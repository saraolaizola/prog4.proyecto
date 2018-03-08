#ifndef _PRODUCTO_H
#define _PRODUCTO_H

#define DEBUG

typedef struct
{
	char nombre;
	int precio; 
	int categoria;
} t_producto;

void AltaProducto(t_producto *p);
void ImprimirProducto(t_producto p);

#endif