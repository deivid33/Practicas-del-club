#include <bits/stdc++.h>

using namespace std;


unsigned int mcd(unsigned int a, unsigned int b){
	return (b==0)? a:mcd (b,a%b);
}

unsigned int mcm(unsigned int a, unsigned int b){
   return a*b/mcd(a,b);
}

int main(){
cout<<mcd(18,14)<<endl;

return 0;
}

//metodo encriptacion rsa
