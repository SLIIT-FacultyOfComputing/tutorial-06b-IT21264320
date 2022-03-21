#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

// Assign studentId and name
void Student::assignDetails(int id, string n) {

	studentID = id;
	name = n;
}

// Display StudentId and Name
Student::display() {

  cout << "Student ID : " << studentID << endl;
	cout << "Student Name : " << name << endl;
  
}
