#include "dz4.h"

int main() {

	element *lista = NULL;
	int opcija, n;
	char imeClana[35], c;

	while (1) {

		printf("\n1. Kreiraj listu\n");
		printf("2. Izbrisi listu\n");
		printf("3. Izbaci element iz liste\n");
		printf("4. Ubaci element na pocetak liste\n");
		printf("5. Ubaci element na kraj liste\n");
		printf("6. Ispis liste\n");
		printf("7. Raspodeli karte\n");
		printf("8. Kraj rada\n");

		printf("\nIzaberite opciju: ");
		scanf("%d", &opcija);

		switch (opcija)
		{
		case 1: lista = ucitaj();
			break;
		case 2: lista = izbrisi(lista);
			break;
		case 3:lista = izbaci(lista);
			break;
		case 4: lista = ubaci_pocetak(lista);
			break;
		case 5: lista = ubaci_kraj(lista);
			break;
		case 6: ispisi(lista);
			break;
		case 7: obrada(lista);
			break;
		case 8: exit(1);
		}

	}

}