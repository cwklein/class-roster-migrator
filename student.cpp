
#include <iostream>
#include <string>
#include stdafx.h
#include "student.h"
#include "degree.h"
using namespace std;

//Default Constructor for ALL (7) input parameters
student::student() {
   studentId = "No ID";
   firstName = "No First Name";
   lastName = "No Last Name";
   emailAddress = "No Email Address";
   studentAge = -1;
   daysPerCourse(3, -1);
   degreeProgram = "No Degree";
}

//"Set" & "Get" functions for studentId
void student::SetStudentId(std::string studentId) {
   this->studentId = studentId;
}

string student::GetStudentId() const {
   return studentId;
}

//"Set" & "Get" functions for firstName
void student::SetFirstName(std::string firstName) {
   this->firstName = tempFirstName;
}

string student::GetFirstName() const {
   return firstName;
}

//"Set" & "Get" functions for lastName
void student::SetLastName(std::string lastName) {
   this->lastName = tempLastName;
}

string student::GetLastName() const {
   return lastName;
}

//"Set" & "Get" functions for emailAddress
void student::SetEmailAddress(std::string emailAddress) {
   this->emailAddress = emailAddress;
}

string student::GetEmailAddress() const {
   return emailAddress;
}

//"Set" & "Get" functions for studentAge
void student::SetStudentAge(int studentAge) {
   this->studentAge = studentAge;
}

int student::GetStudentAge() const {
   return studentAge;
}

//"Set" & "Get" functions for daysPerCourse
void student::SetDaysPerCourse(int course1, int course2, int course3) {
   daysPerCourse.at(0) = course1;
   daysPerCourse.at(1) = course2;
   daysPerCourse.at(2) = course3;
}

vector student::GetDaysPerCourse() const {
   return daysPerCourse;
}

//"Set" & "Get" functions for degreeProgram
void student::SetDegreeProgram(DegreeProgram degreeProgram) {
   this->degreeProgram = degreeProgram; // FIXME?
}

DegreeProgram student::GetDegreeProgram() const { // FIXME?
   return degreeProgram; // FIXME?
}
