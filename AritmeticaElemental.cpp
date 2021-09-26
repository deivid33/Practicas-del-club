#include<iostream>

using namespace std;

int sumar(long long a, long long b, char band);

int main(){
   long long a,b;
   cin>>a;
   cin>>b;
   char band='F';
   long long i=sumar(a,b,band);
   cout<<i;
return 0;
}

int sumar(long long a,long long b, char band){
	long long i=a%10,j=b%10,acarreo=0,suma=0;
	if(band=='T')suma++;
	suma=suma+i+j;
	if(suma>9) {
		acarreo++;
		band='T';
	}
	else band='F';

	if(a==0 && b==0) return acarreo;
	else return sumar(a/10,b/10,band)+acarreo;
}
