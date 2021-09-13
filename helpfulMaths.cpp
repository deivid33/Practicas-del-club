#include "iostream"

using namespace std;

void heapify(int arr[], int n, int i);
void ordenarA(int arr[], int n);

int main(){
int arr[50],i=0,j=0;
string str;
getline(cin,str);
//Saber si hay elementos + o espacios vacíos
for(i=0;i<str.length();i++){
    if(str[i] == '+')continue;
    else{
        arr[j] = str[i]-'0';
        j++;
    }
}
//ordenamos los elementos
ordenarA(arr,j);
//Imprimir arreglo ordenado
for (i=0;i<j;i++) {
      if (i<j-1)
        cout<<arr[i]<<"+";
      else
        cout<<arr[i];
}

return 0;
}
//ordenamiento por montículos heapify
void arbolHeap(int arr[], int n, int i){
        int largest = i;
        int l = 2*i + 1;
        int r = 2*i + 2;

        if (l < n && arr[l] > arr[largest]) largest = l;
        if (r < n && arr[r] > arr[largest]) largest = r;

        if (largest != i){
            swap(arr[i], arr[largest]);
           arbolHeap(arr, n, largest);
        }
}
//ordenamiento por montículos heapsort
void ordenarA(int arr[], int n){
    for (int i = n / 2 - 1; i >= 0; i--)
        arbolHeap(arr,n,i);

    for (int i=n-1; i>=0; i--){
        swap(arr[0],arr[i]);
        arbolHeap(arr,i,0);
    }
}
