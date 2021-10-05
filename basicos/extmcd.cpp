#include <bits/stdc++.h>

using namespace std;

int mcdE(int a, int b,int *x,int *y){
   if(a==0){
    *x=0;
    *y=1;
    return b;
   }
   int x1,y1;
   int mcd=mcdE(b%a,a,&x1,&y1);
   *x=y1-(b/a)*x1;
   *y=x1;
   return mcd;
}

int main(){
int x,y;
cout<<mcdE(18,14,&x,&y)<<endl;
cout<<x<<","<<y<<endl;

return 0;
}

/*
unit64_t power(base)
*/
