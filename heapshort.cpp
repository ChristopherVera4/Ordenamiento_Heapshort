#include <iostream>
#include <iomanip>
#include <time.h>
#include <fstream>

#include "heapshort.h"



using namespace std;

void ingresar(int a[],int f){
  cout<<"\t\t ***NUMEROS ORIGINALES*** \t\t"<<endl;
  for(int i=1;i<=f;i++){
    a[i]=rand()%100;
  }
  for(int i=1;i<=a[i];i++){
    cout<<a[i]<<" "; 
}
}
void heapshort(int b[],int f)
{
   int valor,temp,a;

    for(int i=f; i>0; i--)
    {
        for(int j=1; j<=i; j++)
        {
            valor=b[j];
            a=j/2;
            while(a>0 && b[a]<valor)
            {
                b[j]=b[a];
                j=a;
                a=a/2;
            }
            b[j]=valor;
        }
        temp=b[1];
        b[1]=b[i];
        b[i]=temp;
    }
}