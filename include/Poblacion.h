#ifndef POBLACION_H
#define POBLACION_H
#include <iostream>
#include <string>
using namespace std;


class Poblacion
{
   private:
       string nombrePaciente;
       string apellidoPaciente;
       string distrito;
       string sintoma;
       string antecedente;
       string edad;

   public:

       Poblacion():nombrePaciente(""),apellidoPaciente(""),distrito(""),sintoma(""),antecedente(""),edad(""){}
       Poblacion(string,string,string,string,string,string);
       void setNombre(string miNombre);
       void setApellido(string miApellido);
       void setEdad(string miEdad);
       void setDistrito(string miDistrito);
       void setSintomas(string sintoma);
       void setAntecedentes(string antecedente);
       string getNombre();
       string getApellido();
       string getEdad();
       string getDistrito();
       string getSintomas();
       string getAntecedente();
       string Sintomas();
       string AntecedentesMedicos();
       virtual string Registro();
       virtual string mostrarDatos();



};



#endif // POBLACION_H

