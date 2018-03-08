#include "producto.h"
#include <stdio.h>
#include <ctype.h>

void AltaProducto(t_producto *p)
{
	char nombre;
	int precio;
	int categoria;

	printf("ALTA PRODUCTO: \n");
	
	printf("Introduce el nombre: \n");
	scanf("%s", &nombre);
	p->nombre = nombre;

	printf("Introduce el precio: \n");
	scanf ("%d", &precio);
	p->precio = precio;

	printf("Introduce el numero de la categoria deseada: \n");
	printf("1. Primero \n");
	printf("2. Segundo \n");
	printf("3. Postre \n");
	printf("4. Bebida \n");
	scanf ("%d", &categoria);
	p->categoria = categoria;

	//guardarlo en la base de datos
}

void ImprimirProducto(t_producto p)
{
	printf("%s, %d euros, %s)",p.nombre,p.precio,p.categoria);
}

