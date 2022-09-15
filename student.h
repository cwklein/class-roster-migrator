#include <iostream>
#include <string>
#include stdafx.h
#include "degree.h"
using namespace std;

class Student {
   public:
      //"Set" & "Get" functions for studentId
      void SetStudentId(std::string studentId);
      string GetStudentId();

      //"Set" & "Get" functions for firstName
      void SetFirstName(std::string firstName);
      string GetFirstName();

      //"Set" & "Get" functions for lastName
      void SetLastName(std::string lastName);
      string GetLastName();

      //"Set" & "Get" functions for emailAddress
      void SetEmailAddress(std::string emailAddress);
      string GetEmailAddress();

      //"Set" & "Get" functions for studentAge
      void SetStudentAge(int studentAge);
      int GetStudentAge();

      //"Set" & "Get" functions for daysPerCourse
      void SetDaysPerCourse(int course1, int course2, int course3);
      vector GetDaysPerCourse();

      //"Set" & "Get" functions for degreeProgram
      void SetDegreeProgram(DegreeProgram degreeProgram);
      string GetDegreeProgram();


   private:
      std::string studentId = "No ID";
      std::string firstName = "No First Name";
      std::string lastName = "No Last Name";
      std::string emailAddress = "No Email Address";
      int studentAge = "No Age";
      std::vector daysPerCourse(3, -1);
      DegreeProgram degreeProgram = "No Degree";
};
