#include <iostream>
#include <string>
#include "roster.h"
using namespace std;

int main() {

	//studentData Table - Populated with my information as student A5
	const string studentData[] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY","A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK","A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE","A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY","A5,Colby,Klein,cklei41@wgu.edu,29,41,28,42,SOFTWARE"};

	cout << "Course Title: C876 - Scripting and Programming - Applications " << endl;
	cout << "Language used: C++" << endl;
	cout << "Student: Colby Klein - 001198444" << endl << endl;

	Roster classRoster;

	classRoster.parseStudentData(studentData);
	classRoster.printAll();
	cout << endl;
	classRoster.printInvalidEmails();
	cout << endl;
	for (int i = 0; i < 5; ++i) {
		classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->GetStudentID());
	}
	cout << endl;

	classRoster.printByDegreeProgram(SOFTWARE);

	cout << endl;

	classRoster.remove("A3");
	cout << endl;

	classRoster.printAll();
	
	cout << endl;
	classRoster.remove("A3");
	
	cout << endl;
	//expected: the above line should print a message saying such a student with this ID was not found.
	
	//classRoster.~Roster(); -- Called automatically at end of program, dont need to explicitly call

	return 0;
}