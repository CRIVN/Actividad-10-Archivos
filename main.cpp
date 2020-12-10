#include<iostream>
#include "laboratorio.h"

using namespace std;

int main(){
    Computadora c02 = Computadora("Ubuntu", "Dell", "8 Gb", "500 Gb");

    Computadora c03;
    c03.setSistemOp("Windows");
    c03.setNomE("Lenovo");
    c03.setRam("16 Gb");
    c03.setAlmto("256 Gb");

    Laboratorio lab;
    lab.agregarFinal(c02);
    lab.agregarFinal(c03);

    lab.mostrar();

}
