#include <stdio.h>
#include "camarero.h"


void AltaCamarero(t_camarero *c)
{
	char nombre;
	char apellido;
	int dni;
	int tel;

	printf("ALTA CAMARERO \n");

	printf("Nombre: \n");
	scanf ("%s, &nombre");
	c->nombre= nombre;

	printf("Apellido: \n");
	scanf ("%s, &apellido");
	c->apellido = apellido;

	printf("DNI: \n");
	scanf ("%d, &dni");
	//comprobar que es único
	c->dni = dni;

	printf("Telefono: \n");
	scanf ("%d, &tel");
	c->tel = tel;
}

void MostrarCamarero(t_camarero c)
{
	printf("%s %s, DNI: %d, Telefono: %d)",c.nombre,c.apellido,c.dni,c.tel);
}