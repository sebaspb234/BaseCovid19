#include "Poblacion.h"
#include <iostream>
#include <string.h>
using namespace std;


void Poblacion::setNombre(string miNombre)
{
    nombrePaciente=miNombre;
}

void Poblacion::setApellido(string miApellido)
{
    apellidoPaciente=miApellido;
}

string Poblacion::getNombre()
{
    return nombrePaciente;
}

string Poblacion::getApellido()
{
    return apellidoPaciente;
}

string Poblacion::Registro()
{
    cout<<"같같Ingresa tu informacion같같"<<endl;
    cout<<"Ingresa el nombre del paciente: ";getline(cin,nombrePaciente);
    cout<<"Ingresa el apellido del paciente: ";getline(cin,apellidoPaciente);
    cout<<"Ingresa el distrito del paciente: ";getline(cin,distrito);
    cout<<"Ingresa la edad del paciente: ";cin>>edad;
    setNombre(nombrePaciente);setApellido(apellidoPaciente);setEdad(edad);setDistrito(distrito);
    cout<<"Los datos del paciente son: "<<getNombre()<<" "<<getApellido()<<" "<<getEdad()<<" "<<getDistrito();
}

string Poblacion::Sintomas()
{
    cout<<"Ingresa los sintomas que presenta el paciente: ";getline(cin,sintoma);
    setSintomas(sintoma);
    cout<<"Los sintomas que presenta el paciente son: "<<getSintomas()<<endl;
}

string Poblacion::AntecedentesMedicos()
{
    cout<<"Ingresa los antecedentes medicos del paciente: ";getline(cin,antecedente);
    setAntecedentes(antecedente);
    cout<<"Los antecedentes medicos del paciente son: "<<getAntecedente();
}

void Poblacion::setSintomas(string _sintoma)
{
    sintoma=_sintoma;
}

void Poblacion::setEdad(int miEdad)
{
    edad=miEdad;
}

int Poblacion::getEdad()
{
    return edad;
}

void Poblacion::setDistrito(string miDistrito)
{
    distrito=miDistrito;
}

void Poblacion::setAntecedentes(string _antecedente)
{
    antecedente=_antecedente;
}

string Poblacion::getDistrito()
{
    return distrito;
}

string Poblacion::getSintomas()
{
    return sintoma;
}

string Poblacion::getAntecedente()
{
    return antecedente;
}
