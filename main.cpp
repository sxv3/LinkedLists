#include "Node.h"
#include "Student.h"

//main.cpp file. Used for testing the nodes and students.
//Created by Tai Wong on December 9th

using namespace std;

int main() {
  //create student objects for testing
  Student* student1 = new Student("Tai");
  Student* student2 = new Student("Nathaniel");

  //create node for linked list
  Node* node1 = new Node(student1);
  Node* node2 = new Node(student2);

  //link node
  node1->setNext(node2);

  //test functions
  cout << "Student in node1";
  node1->getStudent()->printStudent();

  cout << "Student in node2";
  node1->getNext()->getStudent()->printStudent();

  delete node1;
  delete node2;
}
