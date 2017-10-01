#include <iostream>
using namespace std;

int main ()
{


  for (int n=0; n<10; n++) {   
      cout << "n is " << n << ": ";
      for (int m=0; m<=n; m++){
	cout << m;
      }
    }
  return 0;
}
