/*
 * informes.h
 *
 *  Created on: 1 may. 2021
 *      Author: Pato
 */

#ifndef INFORMES_H_
#define INFORMES_H_

#include "clientes.h"
#include "ventas.h"

typedef struct{
	char color[64];
	int cantidadColor;
	int isEmpty;
}VentasColor;

int info_bajaCliente(Venta *arrayVentas,Cliente *arrayClientes, int *idCliente, int *idVenta);
int info_baja(Venta *arrayVentas, Cliente *arrayClientes, int *id);
int info_separarPorColor(Venta *arrayVentas, VentasColor *arrayVentasColor, int indice);
int info_imprimirArrayVentasPorColor(VentasColor *arrayVentasPorColor, int limite);
int info_inicializarArrayVentasPorColor(VentasColor *arrayVentasPorColor);
int info_colorBarbijoMasVeces(Venta *arrayVentas, int *idVentas);
int info_listarBarbijosPorColor(Venta *arrayVentas, VentasColor *listaVentas, int*idVentas);
int info_cantidadComprasPendientes(Venta *arrayVentas);
int info_minimoPrecioPorUnidad(float *preciosPorUnidad);
int info_inicializarArrayFloat(float *arrayFloat);
int info_compraConPrecioPorUnidadMasBajo(Venta *arrayVentas);
int info_maximoBarbijoColor(VentasColor *listaVentas);
#endif /* INFORMES_H_ */
