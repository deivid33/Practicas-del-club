#include <iostream>

using namespace std;
int buscar(int arr[],int n,int x){
   for(int i=0;i<n;i++)
    if(arr[i]==x) return i;
    return -1;
}
        int busquedaB(int arr[],int l,int r,int x){
          if(r>=l){
            int mid=l+(r-l)/2;
            if(arr[mid]==x)return mid;
            if(arr[mid]>x){
                return busquedaB(arr,l,mid-1,x);
            }else{
               return busquedaB(arr,mid+1,r,x);
               }
          }
          return -1;
          {
          int buscarP(vector<pair<int,int> >arr,int x){
          for(int i=0;i<arr.size();i++){
                        if(arr[i].first==x) return arr[i].second;
          }
          }
        }
int main(){
 vector<pair<int,int> >arr;
 arr.push_back(make_pair(4,7));
 arr.push_back(make_pair(8,9));
 arr.push_back(make_pair(10,11));
 arr.push_back(make_pair(9,6));
 arr.push_back(make_pair(42,1));
 cout<<buscarP(arr,4)<<endl;
 return 0;

return 0;
}
