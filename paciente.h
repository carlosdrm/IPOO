/* 
 * File:   paciente.h
 * Author: invitado
 *
 * Created on 2 de diciembre de 2016, 07:49 AM
 */

#ifndef PACIENTE_H
#define	PACIENTE_H

#include <vector>
#include <iostream>
#include <ccstdlib>

using namespace std;

struct paciente{
	int cedula;
	string nombre;
	char sexo;
	int edad;
}

class paciente {
public:
	paciente();
	paciente(const paciente& orig);
	virtual ~paciente();
private:

    void imprimir();
    void datos();

};

#endif	/* PACIENTE_H */

