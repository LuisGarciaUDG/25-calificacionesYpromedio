/* programa_25 Imprimir los numeros entre el 0 y el 20
estructura: ciclica
autor: Luis Alberto Garcia Rodriguez
numero de lista 11
fecha 03 de marzo del 2015
*/
#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int x;
    float prom, s, a;
    s=0;
    x=0;
    cout<<"\n Claificacion Promedio\n\n";
    do
    {
    cout<<"Escribe la calificacion: ";
    cin>>a;
    cout<<"\n";
    s=s+a;
    x=x+1;
    }
    while (x<=4);
    prom=s/5;
    cout<<"\t\t\t\t El promedio es: " <<prom<<"\n\n\n\t\t\t\t\t";
    system ("pause");

    return 0;
}
