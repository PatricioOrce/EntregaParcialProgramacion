/*
 ============================================================================
 Name        : Parcial_Oficial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include "utn2.h"
#include "clientes.h"
#include "ventas.h"
#include "informes.h"
#define CLIENTES 100
#define VENTAS 1000

int main(void) {
	setbuf(stdout,NULL);

	int desicionMain;
	int desicion;
	int idCliente = 0;
	int idVenta = 0;
	Cliente arrayClientes[CLIENTES];
	Venta arrayVentas[VENTAS];

	do
		{
			printf("Elija una desicion:\n");
			printf("1)Alta de Cliente.\n2)Modificar datos de Cliente.\n3)Baja de Cliente.\n4)Realizar compra.\n5)Pagar Compra.\n"
			"6)Cancelar compra.\n7)Imprimir clientes.\n8)Informar.\n9)Salir!.\n");
			utn_getNumero(&desicionMain, "-->", "[ERROR]Opcion incorrecta.\n", 1, 9, 3);

			switch (desicionMain) {
				case 1:
					cli_altaArray(arrayClientes, CLIENTES, &idCliente);
					break;
				case 2:
					cli_modificarArray(arrayClientes, &idCliente);
					break;
				case 3:
					info_bajaCliente(arrayVentas, arrayClientes, &idCliente, &idVenta);
					break;
				case 4:
					ven_altaArray(arrayVentas, arrayClientes, CLIENTES, &idCliente, &idVenta);
					break;
				case 5:
					ven_pagarImporte(arrayVentas, arrayClientes, &idVenta);
					break;
				case 6:
					ven_cancelarCompra(arrayVentas, arrayClientes, &idVenta);
					break;
				case 7:
					cli_imprimirArray(arrayClientes, CLIENTES);
					break;
				case 8:
					utn_getNumero(&desicion, "1) Color de barbijo que se compró mas veces.\n2) Cantidad de compras pendientes.\n3) Compra con “precio por unidad” mas bajo.\n", "[ERROR]Opcion incorrecta.\n", 1, 3, 3);
					switch (desicion) {
						case 1:
							info_colorBarbijoMasVeces(arrayVentas,&idVenta);
							break;
						case 2:
							info_cantidadComprasPendientes(arrayVentas);
							break;
						case 3:
							info_compraConPrecioPorUnidadMasBajo(arrayVentas);
							break;
					}
					break;
				case 9:
					printf("SALISTE!.\n");
					break;
			}
		}
		while(desicionMain!=9);
	return EXIT_SUCCESS;
}
