#include <iostream>
#include <string>

using namespace std;

int64_t fact(int n);

int main(){
	int64_t n;
    string m;

getline(cin >> ws, m);
n = atoi(m.c_str());
for(int i = 0; i < m.length(); i++){
        if (m[i] == ' ' || m[i + 1] == ' ')){
            n=n+i;
        }
}
cout<<fact(n)<<endl;
return 0;
}

int64_t fact(int n){
//casos base
if(n==0||n==1) return 1;
//parte recursiva
else{
	return n+fact(n-1);
 }
}
