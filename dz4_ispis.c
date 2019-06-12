#include "dz4.h"

void ispisi(element *lista) {

	element *trenutni = lista;

	while (trenutni != NULL) {

		printf("Ime: %s\n", trenutni->ime);
		printf("eMail: %s\n", trenutni->mail);
		printf("Trazeno karata: %d\n", trenutni->trazeno);
		printf("Karata u posedu: %d\n", trenutni->karta);
		if (trenutni->clan) printf("Jeste clan.\n");
		else printf("Nije clan.\n");

		trenutni = trenutni->sledeci;
		putchar('\n');

	}

}