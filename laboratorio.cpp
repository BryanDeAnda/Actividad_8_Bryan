#include "laboratorio.h"
#include <fstream>

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

void Laboratorio::respaldar_capturas()
{
    
    ofstream archivo("computadoras_capturas.txt");
    if(archivo.is_open()){
        Computadora &p = arreglo[2];
        archivo << p.getSistema() << endl;
        archivo << p.getMarca() << endl;
        archivo << p.getProcesador() << endl;
        archivo << p.getRam() << endl;
    }
    archivo.close();
}

void Laboratorio::recuperar()

{
    ifstream archivo("computadoras_capturas.txt");
    if(archivo.is_open()){
        string temp;
        int ram;
        Computadora p;


        while (true)
        {
            getline(archivo, temp); //Sistema operativo
            if(archivo.eof()){
                break;
            }
            p.setSistema(temp);

            getline(archivo, temp); //Marca
            p.setMarca(temp);

            getline(archivo, temp); //Procesador
            p.setProcesador(temp);

            getline(archivo, temp); //RAM
            ram = stoi(temp);
            p.setRam(ram);

            agregarComputadora(p);
        }
        
    }
    archivo.close();
}

/* Ejemplo del video
void Laboratorio::respaldar()
{
    
    ofstream archivo("computadoras.txt");
    if(archivo.is_open()){
        for (size_t i=0; i<cont; i++){
        Computadora &p = arreglo[i];
        archivo << p.getSistema() << endl;
        archivo << p.getMarca() << endl;
        archivo << p.getProcesador() << endl;
        archivo << p.getRam() << endl;


        }
    }
    archivo.close();
}
void Laboratorio::respaldar_capturas()
{
    
    ofstream archivo("computadoras_capturas.txt");
    if(archivo.is_open()){
        archivo << left;
        archivo << setw(10) << "Sistema";
        archivo << setw(10) << "Marca";
        archivo << setw(12) << "Procesador";
        archivo << setw(6) << "RAM";
        archivo << endl;
        Computadora &p = arreglo[2];
        archivo << p;
    }
    archivo.close();
}
*/  