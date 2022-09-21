#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "degree.h"
using namespace std;

class Student {
   public:
      //Default Constructor for ALL (7) input parameters
      Student();

      //Constructor for ALL (7) input parameters
      Student(string studentID, 
         string firstName, 
         string lastName, 
         string emailAddress, 
         int studentAge, 
         int daysInCourse[],
         DegreeProgram degreeProgram);

      //Destructor (Best Practice)
      ~Student();

      //"Get" Functions
      string GetStudentID() const;
      string GetFirstName() const;
      string GetLastName() const;
      string GetEmailAddress() const;
      int GetStudentAge() const;
      int* GetDaysInCourse() const;
      DegreeProgram GetDegreeProgram() const;

      //"Set" Functions
      void SetStudentID(string studentID);
      void SetFirstName(string firstName);
      void SetLastName(string lastName);
      void SetEmailAddress(string emailAddress);
      void SetStudentAge(int studentAge);
      void SetDaysInCourse(int daysInCourse[]);
      void SetDegreeProgram(DegreeProgram degreeProgram);

      //Print function for all student info
      void Print();


   private:
      string studentID, firstName, lastName, emailAddress;
      int studentAge;
      int* daysInCourse;
      DegreeProgram degreeProgram;
      const static int numCourses = 3;
};

#endif