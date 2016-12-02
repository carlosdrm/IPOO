/* 
 * File:   enfermedades.h
 * Author: carlosapc
 *
 * Created on 2 de diciembre de 2016, 07:42 AM
 */

#ifndef ENFERMEDADES_H
#define	ENFERMEDADES_H

#include <string>
using std::string;

class Enfermedades{
   
private:
   string nombre;
   string descripcion;
   
public:
   Enfermedades(string nombreIn, string descripcionIn);
           ~Enfermedades();
           
           string getNombre();
           string getDescripcion();
           void setNombre();
           void setDescripcion();
};

#endif	/* ENFERMEDADES_H */

