#pragma once
#include <iostream>
#include <string>
#include "student.h"
using namespace std;

//Default Constructor for ALL (7) input parameters; ints default to -1
Student::Student() {
   studentId = "No ID";
   firstName = "No First Name";
   lastName = "No Last Name";
   emailAddress = "No Email Address";
   studentAge = -1;
   daysPerCourse[0] = -1;
   daysPerCourse[1] = -1;
   daysPerCourse[2] = -1;
   degreeProgram = DegreeProgram::SECURITY;
}

//Constructor for ALL (7) input parameters
Student::Student(string studentId,string firstName, string lastName, string emailAddress, int studentAge, int course1, int course2, int course3, DegreeProgram degreeProgram) {
   this-> studentId = studentId;
   this-> firstName = firstName;
   this-> lastName = lastName;
   this-> emailAddress = emailAddress;
   this-> studentAge = studentAge;
   daysPerCourse[0] = course1;
   daysPerCourse[1] = course2;
   daysPerCourse[2] = course3;
   this -> degreeProgram = degreeProgram;
}

//Destructor (Best Practice)
Student::~Student() {};

//"Set" & "Get" functions for studentId
void Student::SetStudentId(string studentId) {
   this-> studentId = studentId;
}

string Student::GetStudentId() const {
   return studentId;
}

//"Set" & "Get" functions for firstName
void Student::SetFirstName(string firstName) {
   this-> firstName = firstName;
}

string Student::GetFirstName() const {
   return firstName;
}

//"Set" & "Get" functions for lastName
void Student::SetLastName(string lastName) {
   this-> lastName = lastName;
}

string Student::GetLastName() const {
   return lastName;
}

//"Set" & "Get" functions for emailAddress
void Student::SetEmailAddress(string emailAddress) {
   this-> emailAddress = emailAddress;
}

string Student::GetEmailAddress() const {
   return emailAddress;
}

//"Set" & "Get" functions for studentAge
void Student::SetStudentAge(int studentAge) {
   studentAge = studentAge;
}

int Student::GetStudentAge() const {
   return studentAge;
}

//"Set" & "Get" functions for daysPerCourse
void Student::SetDaysPerCourse(int course1, int course2, int course3) {
   this -> daysPerCourse[0] = course1;
   this -> daysPerCourse[1] = course2;
   this -> daysPerCourse[2] = course3;
}

int* Student::GetDaysPerCourse(){ //FIXME
   return this -> daysPerCourse; //FIXME
}

//"Set" & "Get" functions for degreeProgram
void Student::SetDegreeProgram(DegreeProgram degreeProgram) {
   this-> degreeProgram = degreeProgram; // FIXME?
}

DegreeProgram Student::GetDegreeProgram() const { // FIXME?
   return degreeProgram; // FIXME?
}
