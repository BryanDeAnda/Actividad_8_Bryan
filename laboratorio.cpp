#include "laboratorio.h"

Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarComputadora(const Computadora &p)
{
    if(cont<5){
        arreglo[cont] = p;
        cont++;
    }
    else{
        cout<<"Arreglo lleno"<<endl;
    }
}

void Laboratorio::mostrar()
{
    cout << left;
    cout << setw(10) << "Sistema";
    cout << setw(10) << "Marca";
    cout << setw(12) << "Procesador";
    cout << setw(6) << "RAM";
    cout << endl;
    for (size_t i=0; i<cont; i++)
    {
        Computadora &p = arreglo[i];
        cout << p;
        /*cout <<"Sistema operativo: "<<p.getSistema()<< endl;
        cout <<"Marca: "<<p.getMarca()<< endl;
        cout <<"Procesador: "<<p.getProcesador()<< endl;
        cout <<"Memoria RAM: "<<p.getRam()<< endl;
        cout <<endl;*/
    }
}
