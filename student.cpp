
#include <iostream>
#include <string>
#include stdafx.h
#include "student.h"
#include "degree.h"
using namespace std;

//"Set" & "Get" functions for studentId
void student::SetStudentId(std::string tempStudentId) {
   studentId = tempStudentId;
}

string student::GetStudentId() {
   return studentId;
}

//"Set" & "Get" functions for firstName
void student::SetFirstName(std::string tempFirstName) {
   firstName = tempFirstName;
}

string student::GetFirstName() {
   return firstName;
}

//"Set" & "Get" functions for lastName
void student::SetLastName(std::string tempLastName) {
   lastName = tempLastName;
}

string student::GetLastName() {
   return lastName;
}

//"Set" & "Get" functions for emailAddress
void student::SetEmailAddress(std::string tempEmailAddress) {
   emailAddress = tempEmailAddress;
}

string student::GetEmailAddress() {
   return emailAddress;
}

//"Set" & "Get" functions for studentAge
void student::SetStudentAge(int tempStudentAge) {
   studentAge = tempStudentAge;
}

int student::GetStudentAge() {
   return studentAge;
}

//"Set" & "Get" functions for daysPerCourse
void student::SetDaysPerCourse(int course1, int course2, int course3) {
   daysPerCourse.at(0) = course1;
   daysPerCourse.at(1) = course2;
   daysPerCourse.at(2) = course3;
}

vector student::GetDaysPerCourse() {
   return daysPerCourse;
}

//"Set" & "Get" functions for degreeProgram
void student::SetDegreeProgram(DegreeProgram tempDegreeProgram) {
   degreeProgram = tempDegreeProgram; // FIXME?
}

DegreeProgram student::GetDegreeProgram() { // FIXME?
   return degreeProgram; // FIXME?
}
