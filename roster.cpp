#include <iostream>
#include <string>
#include "roster.h"
using namespace std;

void Roster::parseStudentData(const string studentData[]) {
   for (int i = 0; i < studentDataSize; ++i) {
      string currStudent = studentData[i];
      int currLoc = 0;

      //Assign each comma delimited substring to respective variables
      string studID = currStudent.substr(currLoc, currStudent.find(",", currLoc + 1) - currLoc - 1);
      currLoc = currStudent.find(",", currLoc + 1) + 1;

      string studFN = currStudent.substr(currLoc, currStudent.find(",", currLoc + 1) - currLoc - 1);
      currLoc = currStudent.find(",", currLoc + 1) + 1;

      string studLN = currStudent.substr(currLoc, currStudent.find(",", currLoc + 1) - currLoc - 1);
      currLoc = currStudent.find(",", currLoc + 1) + 1;

      string studEM = currStudent.substr(currLoc, currStudent.find(",", currLoc + 1) - currLoc - 1);
      currLoc = currStudent.find(",", currLoc + 1) + 1;

      int studAge = stoi(currStudent.substr(currLoc, currStudent.find(",", currLoc + 1) - currLoc - 1));
      currLoc = currStudent.find(",", currLoc + 1) + 1;

      int c1 = stoi(currStudent.substr(currLoc, currStudent.find(",", currLoc + 1) - currLoc - 1));
      currLoc = currStudent.find(",", currLoc + 1) + 1;

      int c2 = stoi(currStudent.substr(currLoc, currStudent.find(",", currLoc + 1) - currLoc - 1));
      currLoc = currStudent.find(",", currLoc + 1) + 1;

      int c3 = stoi(currStudent.substr(currLoc, currStudent.find(",", currLoc + 1) - currLoc - 1));
      currLoc = currStudent.find(",", currLoc + 1) + 1;

      string studDegStr = currStudent.substr(currLoc, currStudent.find(",", currLoc + 1) - currLoc - 1);
      currLoc = currStudent.find(",", currLoc + 1) + 1;

      //Convert degree string to enumeration
      DegreeProgram studDeg;
      if (studDegStr == "SECURITY") {
         studDeg = SECURITY;
      }
      else if (studDegStr == "NETWORK") {
         studDeg = NETWORK;
      }
      else {
         studDeg = SOFTWARE;
      }

      //Assign course ints into an array
      int studCourses[3] = {c1, c2, c3};

      add(studID, studFN, studLN, studEM, studAge, studCourses, studDeg);
   }
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], DegreeProgram degreeProgram) {
   classRosterArray[rosterIndex] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeProgram);
   rosterIndex++;
}

void Roster::remove(string studentID) {
   /*for (int i = 0; i < studentDataSize; ++i) {
      if (classRosterArray[i]->GetStudentID() == studentID && i == 0) {
         classRosterArray[i - 1] = &classRosterArray[i+1];
         delete classRosterArray[i];
      }
      else if (classRosterArray[i]->GetStudentID() == studentID && i = studentDataSize - 1) {
         return;
      }
      else if (classRosterArray[i]->GetStudentID() == studentID) {
      return;
      }
   }*/
}

void Roster::printAll() {
   for (int i = 0; i < studentDataSize; ++i) {
      classRosterArray[i]->Print();
   }
}

void Roster::printAverageDaysInCourse(string studentID) {
   double sumDaysInCourse = 0.0;
   double avgDaysInCourse;
   int numCourses = 3;

   for (int i = 0; i < studentDataSize; ++i) {
      if (classRosterArray[i]->GetStudentID() == studentID) {
         int* daysInCoursePtr = classRosterArray[i]->GetDaysInCourse();
         for (int j = 0; j < numCourses; ++j) {
            sumDaysInCourse += daysInCoursePtr[j];
         }
      }
   }
   avgDaysInCourse = sumDaysInCourse / numCourses;
   if (avgDaysInCourse == 0) {
      cout << "No student found with studentID: " << studentID << endl;
   }
   else {
      cout << "Average number of days per course for " << studentID << ": " << avgDaysInCourse << endl;
   }
}

void Roster::printInvalidEmails() {
   for (int i = 0; i < studentDataSize; ++i) {
      string emailTst = classRosterArray[i]->GetEmailAddress();
      if (emailTst.find('@') == string::npos || emailTst.find('.') == string::npos || emailTst.find(' ') == string::npos) {
         cout << emailTst <<", belonging to student ID: " << classRosterArray[i]->GetStudentID() << " is invalid";
      }
   }
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
   for (int i = 0; i < studentDataSize; ++i) {
      if (classRosterArray[i]->GetDegreeProgram() == degreeProgram) {
         classRosterArray[i]->Print();
      }
   }
}