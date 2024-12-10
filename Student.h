#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstring>

//student class
class Student {
private:
  char name[80];
public:
  //constructor
  Student(const char* name);
  const char* getName();
};

#endif
