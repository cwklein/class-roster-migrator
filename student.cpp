#include <iostream>
#include <string>
#include "student.h"
using namespace std;

//Default Constructor for ALL (7) input parameters; ints default to 0
Student::Student():
   studentID(" "),
   firstName(" "),
   lastName(" "),
   emailAddress(" "),
   studentAge(0),
   degreeProgram(SECURITY) {

   daysInCourse = new int[numCourses];
   for (int i = 0; i < numCourses; ++i) {
      daysInCourse[i] = 0;
   }
  }

//Constructor for ALL (7) input parameters
Student::Student(string studentID,string firstName, string lastName, string emailAddress, int studentAge, int daysInCourse[], DegreeProgram degreeProgram) {
   SetStudentID(studentID);
   SetFirstName(firstName);
   SetLastName(lastName);
   SetEmailAddress(emailAddress);
   SetStudentAge(studentAge);
   SetDaysInCourse(daysInCourse);
   SetDegreeProgram(degreeProgram);

   daysInCourse = new int[numCourses];
   for (int i = 0; i < numCourses; ++i) {
      daysInCourse[i] = 0;
   }
}

//Destructor (Best Practice)
Student::~Student() {};

//"Get" Functions
string Student::GetStudentID() const {
   return studentID;
}
string Student::GetFirstName() const {
   return firstName;
}
string Student::GetLastName() const {
   return lastName;
}
string Student::GetEmailAddress() const {
   return emailAddress;
}
int Student::GetStudentAge() const {
   return studentAge;
}
int* Student::GetDaysInCourse() const { 
   return daysInCourse; 
}
DegreeProgram Student::GetDegreeProgram() const { 
   return this->degreeProgram; 
}

//"Set" Functions
void Student::SetStudentID(string studentID) {
   this-> studentID = studentID;
}
void Student::SetFirstName(string firstName) {
   this->firstName = firstName;
}
void Student::SetLastName(string lastName) {
   this->lastName = lastName;
}
void Student::SetEmailAddress(string emailAddress) {
   this->emailAddress = emailAddress;
}
void Student::SetStudentAge(int studentAge) {
   this->studentAge = studentAge;
}
void Student::SetDaysInCourse(int daysInCourse[]) {
   this->daysInCourse = new int[numCourses];
   for (int i = 0; i < numCourses; ++i) {
      this->daysInCourse[i] = daysInCourse[i];
   }
}
void Student::SetDegreeProgram(DegreeProgram degreeProgram) {
   this->degreeProgram = degreeProgram;
}

//Print function for all student info
void Student::Print() {
   cout << this->GetStudentID() << "\t";
   cout << this->GetFirstName() << "\t";
   cout << this->GetLastName() << "\t";
   cout << this->GetEmailAddress() << "\t";
   cout << this->GetStudentAge() << "\t";
   cout << "{" << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2] << "}" << "\t";
   if (this->GetDegreeProgram() == 0) {
      cout << "SECURITY";
   }
   else if (this->GetDegreeProgram() == 1) {
      cout << "NETWORK";
   }
   else {
      cout << "SOFTWARE";
   }
   cout << endl;
}