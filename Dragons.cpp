#include <bits/stdc++.h>

using namespace std;

int main(){
    long int x,s,n,c;
    pair<int, int>a[1001];

    while(cin>>s>>n){
        c=1;
        for(x=0;x<n;x++){
            cin>>a[x].first>>a[x].second;
        }

        sort(a,a+n);
         for(x=0;x<n;x++){
             if(s<=a[x].first){
                 c=0;
                 break;
             }
             else{
                 s=s+a[x].second;
             }
         }
         if(c==0)
            cout<<"NO\n";
         else
            cout<<"YES\n";
    }
    return 0;
}
