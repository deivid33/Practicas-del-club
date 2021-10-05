#include <iostream>

using namespace std;

  int main () {
    int n=3;
    int i,j;

    int matriz[n][n];

    cout <<"Escribe los valores de la matriz" << endl;
    for (int i= 0 ; i<n ; i++){
      for (int j= 0 ; j<n ; j++){
        cout << "[" << i <<"][" << j << "]";
        cin >> matriz[i][j];

    }
      }
      cout<<"la matriz original es"<< endl;
    for (int i= 0; i<n; i++){
    for(int j= 0; j<n; j++){
            if(j>=i) cout << matriz[i][j] << " ";
            else cout <<" ";

        }
        cout << endl;

        }
        cout<<"la matriz transpuesta" << endl;
        int res[n][n];

    for (int i= 0; i<n; i++){
    for(int j= 0; j<n; j++){
            cout<<matriz [j] [i] << " ";
    }
    cout << endl;
    }

  return 0;

  }
