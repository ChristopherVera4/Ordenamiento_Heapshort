#include <iostream>
#include <iomanip>
#include <time.h>
#include <fstream>

#include "heapshort.h"
using namespace std;


 int menu();

int main() {
 int op;
 int arreglo[MAX];
 int t;
     cout<<"INGRESE EL TAMAÑO"<<endl;
     cin>>t;
     cout<<"INGRESANDO DATOS RANDOMICOS....."<<endl;
     ingresar(arreglo, t);
     cout<<endl;
     cout<<"VALORES ORDENADOS"<<endl;
     heapshort(arreglo,t);
     for(int i=1;i<=arreglo[i];i++){
      cout<<arreglo[i]<<" "; 
     }
     cout<<endl;
   }
   
 