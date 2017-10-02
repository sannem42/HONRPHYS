#include <iostream>
using namespace std;

int main (){
  int nfact = 1; //initialize n-factorial to 1
  for (int n=1; n<=10; n++){ //ths for loop prints all the n's and their calculated factorial variables
    for (int i=1; i<=n; i++)//this foor loop is responsible for calculating each factoral
      nfact = nfact*i; //calculation of factorial
    cout << n << "! = " << nfact << endl;
    nfact = 1; //reset nfact to 1 for next time through loop
  }
  return 0;
}
