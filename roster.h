#ifndef ROSTER_H
#define ROSTER_H

#include <iostream>
#include <string>
#include "student.h"
using namespace std;

class Roster {

   private:
      int rosterIndex = 0;
      const static int studentDataSize = 5;
      

   public:
      void parseStudentData(const string studentData[]);
      void add(string studentID, 
         string firstName, 
         string lastName, 
         string emailAddress, 
         int age, 
         int daysInCourse[],
         DegreeProgram degreeprogram);
      void remove(string studentID);
      void printAll();
      void printAverageDaysInCourse(string studentID);
      void printInvalidEmails();
      void printByDegreeProgram(DegreeProgram degreeProgram);
      Student* classRosterArray[studentDataSize];
};
#endif