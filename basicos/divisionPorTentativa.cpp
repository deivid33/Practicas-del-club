#include <bits/stdc++.h>

using namespace std;
typedef long long int lol;

void divisionTentativa(lol n,vector<lol>&factores);

int main(){
   lol n;
   cin>> n;
   vector<lol> factores;
   divisionTentativa(n,factores);

   int len=factores.size();
   for(int i=0; i<len;i++){
    cout<<factores[i]<<" ";
   }
   cout<<endl;

return 0;
}

void divisionTentativa(lol n,vector<lol>&factores){
    for(int i=2;i<=sqrt(n);i++){
        while(n%i==0){
            factores.push_back(i);
            n=n/i;
        }
    }
    if(n>1)

        factores.push_back(n);
}
