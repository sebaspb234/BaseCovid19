#include <iostream>
#include <string>
#include <vector>
#include "Poblacion.h"
#include "Vulnerable.h"
#include "NoVulnerable.h"
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
    Vulnerable vulnerable;
    NoVulnerable noVulnerable;
    string eleccion;
    string verificacion;
    imprimirLista();
    getline(cin,eleccion);
    if(eleccion=="a")
    {   cout<<"El paciente tiene mas de 60 anios?   SI/NO \n";
        getline(cin,verificacion);
        if(verificacion=="SI"||verificacion=="Si"||verificacion=="si")
        {
                vulnerable.Registro();
                vulnerable.mostrarDatos();
                vulnerable.centroRecomendado();
        }
        else if(verificacion=="NO"||verificacion=="No"||verificacion=="no")
        {
            noVulnerable.Registro();
            noVulnerable.mostrarDatos();
            //noVulnerable.mostrarVector();
        }
    }
    else if(eleccion=="b"){paciente.Sintomas();}
    else if(eleccion=="c"){paciente.AntecedentesMedicos();}

    return 0;
}
