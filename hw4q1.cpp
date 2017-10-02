#include <iostream>
using namespace std;

int main (){
  int nfact = 1;
  for (int n=1; n<=10; n++){
    for (int i=1; i<=n; i++)
      nfact = nfact*i;
    cout << n << "! = " << nfact << endl;
    nfact = 1;
  }
  return 0;
}
