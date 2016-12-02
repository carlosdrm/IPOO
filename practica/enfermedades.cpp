/* 
 * File:   enfermedades.cpp
 * Author: carlosapc
 *
 * Created on 2 de diciembre de 2016, 07:55 AM
 */

#include "enfermedades.h"

Enfermedades::Enfermedades(string nombreIn, string descripcionIn){
   
   nombre = nombreIn;
   descripcion = descripcionIn;
}

Enfermedades::~Enfermedades(){
   
}

string Enfermedades::getNombre(){
   return nombre;
}

string Enfermedades::getDescripcion(){
   return descripcion;
}