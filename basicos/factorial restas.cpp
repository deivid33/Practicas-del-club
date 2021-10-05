#include <iostream>

using namespace std;

int cont=0;
int perroEmpachado (int a,int b);

int main(){
    int a,b;
    cin >> a >> b;
    cout << a << "/" << b << "=" << perroEmpachado(a,b) <<  endl;

  return 0;
}

int perroEmpachado (int a,int b){
 if(a<0)return 0;
else if(a==0) return cont;
 cont++;

 return perroEmpachado(a-b,b);
}
