#include <iostream>
#include <string>
#include "Poblacion.h"
using namespace std;

void imprimirLista()
{
    cout<<"a.Datos del paciente"<<endl;
    cout<<"b.Sintomas"<<endl;
    cout<<"c.Antecedentes"<<endl;
    cout<<"d.Personal medico"<<endl;
}

int main()
{
    Poblacion paciente;
    string eleccion;
    imprimirLista();
    getline(cin,eleccion);
    if(eleccion=="a")
        {paciente.Registro();}
    else if(eleccion=="b"){paciente.Sintomas();}
    else if(eleccion=="c"){paciente.AntecedentesMedicos();}

    return 0;
}
