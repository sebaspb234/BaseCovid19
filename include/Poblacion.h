#ifndef POBLACION_H
#define POBLACION_H
#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
using namespace std;


class Poblacion
{
   protected:
       string nombrePaciente;
       string apellidoPaciente;
       string distrito;
       string sintoma;
       string antecedente;
       int edad;

   public:

       Poblacion():nombrePaciente(""),apellidoPaciente(""),distrito(""),sintoma(""),antecedente(""),edad(0){}
       Poblacion(string,string,string,string,string,int);
       void setNombre(string miNombre);
       void setApellido(string miApellido);
       void setEdad(int miEdad);
       void setDistrito(string miDistrito);
       void setSintomas(string sintoma);
       void setAntecedentes(string antecedente);
       string getNombre();
       string getApellido();
       int getEdad();
       string getDistrito();
       string getSintomas();
       string getAntecedente();
       string Sintomas();
       string AntecedentesMedicos();
       virtual string Registro();
       virtual string mostrarDatos();



};



#endif // POBLACION_H

