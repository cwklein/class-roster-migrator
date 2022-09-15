#include <iostream>
#include <string>
#include "stdafx.h"
#include "degree.h"
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

class Student {
   public:
      //Default Constructor for ALL (7) input parameters
      student();

      //Constructor for ALL (7) input parameters
      student(string studentId, string firstName, string lastName, string emailAddress, int studentAge, int course1, int course2, int course3, DegreeProgram degreeProgram);

      //"Set" & "Get" functions for studentId
      void SetStudentId(string studentId);
      string GetStudentId() const;

      //"Set" & "Get" functions for firstName
      void SetFirstName(string firstName);
      string GetFirstName() const;

      //"Set" & "Get" functions for lastName
      void SetLastName(string lastName);
      string GetLastName() const;

      //"Set" & "Get" functions for emailAddress
      void SetEmailAddress(string emailAddress);
      string GetEmailAddress() const;

      //"Set" & "Get" functions for studentAge
      void SetStudentAge(int studentAge);
      int GetStudentAge() const;

      //"Set" & "Get" functions for daysPerCourse
      void SetDaysPerCourse(int course1, int course2, int course3);
      vector GetDaysPerCourse() const;

      //"Set" & "Get" functions for degreeProgram
      void SetDegreeProgram(DegreeProgram degreeProgram);
      string GetDegreeProgram() const;


   private:
      string studentId, firstName, lastName, emailAddress;
      int studentAge;
      vector daysPerCourse;
      DegreeProgram degreeProgram;
};

#endif