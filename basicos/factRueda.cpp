#include <bits/stdc++.h>

using namespace std;
typedef long long int lol;

void rueda(lol n,vector<lol>&factores);

int main(){
   lol n;
   cin>> n;
   vector<lol> factores;
   rueda(n,factores);

   int len=factores.size();
   for(int i=0; i<len;i++){
    cout<<factores[i]<<" ";
   }
   cout<<endl;

return 0;
}

void rueda(lol n,vector<lol>&factores){
    for(lol d:{2,3,5}){
        while(n%d==0){
        factores.push_back(d);
        n=n/d;
     }
   }
   lol incrementos[]={4,2,4,2,4,6,2,6};
   int j=0;
   for(int i=7;i<=sqrt(n);i=i+incrementos[j++]){
        while(n%i==0){
        factores.push_back(2);
        n=n/i;
     }
     if(j>7)
        j=0;
   }
   if(n>1)
    factores.push_back(n);
}
