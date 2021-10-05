#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n;
  cout<<"ingresa el numero de digistos: "<<endl;
  cin>>n;
  int numBinario[n];

  for(int i = 0; i < n;i++) {
    cin >> numBinario[i];
  }

  int suma=0;
  for (int i=n-1, j=0; i>=0; i--, j++) {
    suma = suma + (numBinario[i]*pow(2,j));
  }
  cout << suma << endl;

  return 0;

}
