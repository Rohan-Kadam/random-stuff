/*
 *
 * C inherits B and B inherits A
 *
 */

#include <iostream>
using namespace std;
class A {
public:
  A(){
     cout<<"Constructor of A class"<<endl;
  }
};
class B: public A {
public:
  B(){
     cout<<"Constructor of B class"<<endl;
  }
};
class C: public B {
public:
  C(){
     cout<<"Constructor of C class"<<endl;
  }
};
int main() {
  //Creating object of class C
  C obj;
  cout<<"C --> B --> A"<<endl;
  return 0;
}