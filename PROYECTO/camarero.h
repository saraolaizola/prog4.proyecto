#ifndef _CAMARERO_H
#define _CAMARERO_H

#define DEBUG

typedef struct
{
	char * nombre;
	char * apellido;
	int dni;
	int tel; 
	
} t_camarero;

void AltaCamarero(t_camarero *c);
void printCamarero(t_camarero *c);
void MostrarCamareros(t_camarero *camareros, int total);

#endif