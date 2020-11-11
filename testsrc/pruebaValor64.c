/*
 * pruebaValor64.c
 *
 *  Created on: 10 nov. 2020
 *      Author: german
 */
#include "/home/german/Documentos/tp0R/src/valor64.c"
#include "../testsrc/pruebasConversor.h"

void pruebaValor64(){

	char esperado = 'A';
	char c = valor64(0);
	printf("TEST 1: Clave-->Valor\n-------------\n");
	printf("Prueba 1: ");
	c == esperado ? printf("OK\n") : printf("FAIL\n");

	esperado = '\0';
	c = valor64(-1);
	printf("Prueba 2: ");
	c == esperado ? printf("OK\n") : printf("FAIL\n");

	esperado = '\0';
	c = valor64(64);
	printf("Prueba 3: ");
	c == esperado ? printf("OK\n") : printf("FAIL\n");

	esperado = '\0';
	c = valor64(64);
	printf("Prueba 4: ");
	c == esperado ? printf("OK\n") : printf("FAIL\n");

	esperado = '/';
	c = valor64(63);
	printf("Prueba 5: ");
	c == esperado ? printf("OK\n") : printf("FAIL\n");

	esperado = 'B';
	c = valor64(1);
	printf("Prueba 6: ");
	c == esperado ? printf("OK\n") : printf("FAIL\n");

	esperado = 'n';
	c = valor64(5);
	printf("Prueba 7: ");
	c != esperado ? printf("OK\n") : printf("FAIL\n");

	printf("\nEND TEST 1\n-------------\n");

}


