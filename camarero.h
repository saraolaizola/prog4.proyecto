#ifndef _CAMARERO_H
#define _CAMARERO_H

#define DEBUG

typedef struct
{
	char nombre;
	char apellido;
	int dni;
	int tel; 
} t_camarero;

void AltaCamarero();
void MostrarCamarero(t_camarero c);
void NuevaMesa (t_camarero *c, int mesa);
void RealizarPedido (t_camarero *c, int mesa);


#endif