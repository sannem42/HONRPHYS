#include <iostream>
using namespace std;

int main (){

  bool prop;
  prop = (5>1);
  cout << "prop is " << prop << endl;
  prop = (1>5);
  cout << "Prop is " << prop << endl;
  prop = (1 != 5);
  cout << "Prop is " << prop << endl;
  return 0;
}
