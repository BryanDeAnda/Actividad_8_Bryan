#include <iostream>
#include "laboratorio.h"

using namespace std;

int main (){

    Computadora c01 = Computadora("windows", "Huawei", "Rizen", 4);
    
    Computadora c02;
    c02.setSistema ("Windows");
    c02.setMarca ("Lenovo");
    c02.setProcesador ("Intel");
    c02.setRam (8);

    Laboratorio lb;

    lb.agregarComputadora(c01);
    lb.agregarComputadora(c02);
    
    
    Computadora c03;
    cin >> c03;
    lb.agregarComputadora(c03);
    
    lb.mostrar();

    //cout << c01;

    /*cout << c02.getSistema() << endl;
    cout << c02.getMarca() << endl;
    cout << c02.getProcesador() << endl;
    cout << c02.getRam() << endl;*/

    return 0;
}