#include <iostream>
#include <string>
#include stdafx.h
#include "degree.h"
using namespace std;

class Student {
   public:
      //"Set" & "Get" functions for studentId
      void SetStudentId(std::string studentId);
      string GetStudentId() const;

      //"Set" & "Get" functions for firstName
      void SetFirstName(std::string firstName);
      string GetFirstName() const;

      //"Set" & "Get" functions for lastName
      void SetLastName(std::string lastName);
      string GetLastName() const;

      //"Set" & "Get" functions for emailAddress
      void SetEmailAddress(std::string emailAddress);
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
      std::string studentId;
      std::string firstName;
      std::string lastName;
      std::string emailAddress;
      int studentAge;
      std::vector daysPerCourse;
      DegreeProgram degreeProgram;
};
