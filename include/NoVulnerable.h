#ifndef NOVULNERABLE_H
#define NOVULNERABLE_H
#include "Poblacion.h"
#include <vector>
#include <iostream>
#include <string.h>
using namespace std;

class NoVulnerable:public Poblacion
{
    private:
        string familia;
        string ocupacion;
        string celular;
    public:
      //  NoVulnerable();
        void setFamilia(string);
        void setOcupacion(string);
        void setCelular(string);
        string getFamilia();
        string getOcupacion();
        string getCelular();
        string Registro();
        string mostrarDatos();
        string mostrarVector();
        vector<string>lista={getFamilia(),getOcupacion(),getCelular()};
};

#endif // NOVULNERABLE_H
