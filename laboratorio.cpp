#include "laboratorio.h"

Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarFinal(const Computadora &c)
{
    if (cont < 5){
        arreglo[cont] = c;
        cont++;
    }
    else
    {
        cout<<"Arreglo completo"<<endl;
    }
    
}

void Laboratorio::mostrar()
{
    for(size_t i = 0; i < cont; i++){
        Computadora &c = arreglo[i];
        cout<<"Sistema Operativo: "<<c.getSistemOp()<<endl;
        cout<<"Nombre del equipo: "<<c.getNomE()<<endl;
        cout<<"Memoria Ram: "<<c.getRam()<<endl;
        cout<<"Nivel de Almtotoacenamiento: "<<c.getAlmto()<<endl;
        cout<<endl;
    }
}
