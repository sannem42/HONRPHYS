#include <iostream>
using namespace std;

int main (){

  for (int n=1; n<=100; n++){ //this loop prints all the numbers from 1 to 100 and their factors
    cout << "Factors of " << n << ": "; //outputs to screen
    for (int i=1; i<=n; i++){ //finds factors of n
      if (n%i == 0)
	cout << i << ", ";
    }
    cout << endl;
  }
  return 0;
}
