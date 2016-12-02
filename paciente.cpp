/* 
 * File:   paciente.cpp
 * Author: invitado
 * 
 * Created on 2 de diciembre de 2016, 07:49 AM
 */

#include "paciente.h"

paciente::paciente() {
}

paciente::paciente(const paciente& orig) {
}

paciente::~paciente() {
}

void paciente::datos(){
    paciente p;
    cout<< "Ingrese el nuemro de cedula"<<endl,
    cin>>p.cedula;
    cout<< "Ingrese el nombre:"<<endl;
    cin>>p.nombre;
    cout<<"Ingrese el sexo"<<endl;
    cin>>p.sexo;