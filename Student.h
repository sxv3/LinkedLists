#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstring>

//Student header file for the student class. 
//Created by Tai Wong on December 9th

//student class
class Student {
private:
//name of student
  char name[80];
public:
  //constructor
  Student(const char* name);

  const char* getName();
  void printStudent();
};

#endif
