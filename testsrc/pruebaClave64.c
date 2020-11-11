/*
 * pruebaClave64.c
 *
 *  Created on: 10 nov. 2020
 *      Author: german
 */
#include "/home/german/Documentos/tp0R/src/clave64.c"
#include "../testsrc/pruebasConversor.h"

void pruebaClave64(){

	int tester = 0;
	int esperado = tester;
	char c = valor64(tester);
	int obtenido = clave64(c);
	printf("TEST 2: Valor-->Clave\n-------------\n");
	printf("Prueba 1: ");
	obtenido == esperado ? printf("OK\n") : printf("FAIL\n");

	tester = -1;
	esperado = tester;
	c = valor64(tester);
	obtenido = clave64(c);
	printf("Prueba 2: ");
	obtenido == esperado ? printf("OK\n") : printf("FAIL\n");

	tester = 63;
	esperado = tester;
	c = valor64(tester);
	obtenido = clave64(c);
	printf("Prueba 3: ");
	obtenido == esperado ? printf("OK\n") : printf("FAIL\n");

	tester = 64;
	esperado = -1;
	c = valor64(tester);
	obtenido = clave64(c);
	printf("Prueba 4: ");
	obtenido == esperado ? printf("OK\n") : printf("FAIL\n");

	tester = 128;
	esperado = -1;
	c = valor64(tester);
	obtenido = clave64(c);
	printf("Prueba 5: ");
	obtenido == esperado ? printf("OK\n") : printf("FAIL\n");

	tester = -543;
	esperado = -1;
	c = valor64(tester);
	obtenido = clave64(c);
	printf("Prueba 6: ");
	obtenido == esperado ? printf("OK\n") : printf("FAIL\n");

	tester = 30;
	esperado = tester;
	c = valor64(tester);
	obtenido = clave64(c);
	printf("Prueba 7: ");
	obtenido == esperado ? printf("OK\n") : printf("FAIL\n");

	tester = 55;
	esperado = tester;
	c = valor64(tester);
	obtenido = clave64(c);
	printf("Prueba 8: ");
	obtenido == esperado ? printf("OK\n") : printf("FAIL\n");

	printf("\nEND TEST 2\n-------------\n");
}
