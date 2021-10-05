//crpelh
#include <iostream>
#include  <string>

using namespace std;

string encriptar(string cadena);
string desencriptar(string cadena);

int main(){
    string cadena;
    cout << "Escribe la cadena: ";
    cin >> cadena;
    string cadenaEncriptada=encriptar(cadena);
    cout << "Tu cadena encriptada es: " << cadenaEncriptada << endl;


    string cadenaDesencriptada= desencriptar(cadena);
    cout << "Tu cadena desencriptada es: " << cadenaDesencriptada << endl;

   return 0;
}

/*
En(x)= (x+1)
for(charx='!';x<='~';)
*/

//implemantar la función
string encriptar(string cadena){
   string resultado="";

//cadena='hola'
//cadena[0]='h'
//cadena[1]='o'...
int longitud=cadena.size();
  for(int i=0; i<longitud; i++){
    int x=(int)cadena[i]-97;
    int e_n=(x+3) %26;
    e_n=(e_n<0)?25-e_n:e_n;
    e_n+=97;
    resultado+=(char)e_n;

     }
    return resultado;
  }


  string desencriptar (string cadena){
      string resultado= "";
      int longitud=cadena.size();
      for(int i=0; i<longitud; i++){
        int x=(int) cadena [i]-97;
        int e_n=(x-3) %26;
        e_n+=97;
        resultado+=(char)e_n;
      }
      return resultado;
  }



