#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
using namespace std;

class Computadora 
{
private:
    string sistema;
    string marca;
    string procesador;
    int ram;
public:
    Computadora();
    Computadora(const string &sistema, const string &marca, const string &procesador, int ram);
    void setSistema(const string &v);
    string getSistema();
    void setMarca(const string &v);
    string getMarca();
    void setProcesador(const string &v);
    string getProcesador();
    void setRam(int v);
    int getRam();
};

#endif