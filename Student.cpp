#include "Student.h"
#include <cstring>
#include <iostream>

//Student.cpp file for the Student class, has a constructor and returns the name of the student class
//Created by Tai Wong on Dec 9th

using namespace std;

//constructor
Student::Student(const char* inputtedName) {
  strncpy(name, inputtedName, sizeof(name) - 1);
  name[sizeof(name) - 1] = '\0';
}

//return name
const char* Student::getName() {
  return name;
}

//print student details
void Student::printStudent() {
  cout << name << endl;
}
