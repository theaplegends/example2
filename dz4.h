#define _CRT_SECURE_NO_WARNINGS

#pragma once

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct elem {
	char ime[35], mail[35];
	int trazeno, karta, clan;
	struct elem *sledeci;
} element;

element* ucitaj();

element* izbrisi(element *lista);

element* izbaci(element *lista);

element* ubaci_pocetak(element *lista);

element* ubaci_kraj(element *lista);

void ispisi(element *lista);

void obrada(element *lista);