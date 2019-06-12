#include "dz4.h"

element* izbrisi(element *lista) {

	element *stari;

	while (lista) {
		stari = lista;
		lista = lista->sledeci;
		free(stari);
	}

	return lista;

}

element* izbaci(element *lista) {

	element *tek = lista, *pret = NULL, *stari;
	char ime[35], c;
	int n;

	printf("Unesite ime osobe: \n");
	n = 0;
	getchar();
	while ((c = getchar()) != '\n' && n < 35) {
		ime[n] = c;
		n++;
	}
	ime[n] = '\0';

	if (!strlen(ime)) {
		return lista;
	}

	while (tek) {

		if (strcmp(tek->ime, ime)) {
			pret = tek;
			tek = tek->sledeci;
		}
		else {
			stari = tek;
			tek = tek->sledeci;
			if (!pret) lista = tek;
			else pret->sledeci = tek;
			free(stari);
		}

	}

	return lista;

}

void obrada(element *lista) {

	element *tek = lista;
	int rasp;

	printf("\nUnesite koliko karata je raspolozivo: ");
	scanf("%d", &rasp);

	for (tek; tek != NULL && rasp > 0; tek = tek->sledeci) {
		if (tek->clan) {
			tek->karta++;
			tek->trazeno--;
			rasp--;
		}
	}

	for (tek = lista; tek != NULL && rasp > 0; tek = tek->sledeci) {
		while (1) {
			if (tek->trazeno && rasp) {
				tek->karta++;
				tek->trazeno--;
				rasp--;
			}
			else break;
		}
	}

}