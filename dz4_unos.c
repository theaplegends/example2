#include "dz4.h"

element* ucitaj() {

	element *poslednji = NULL, *lista = NULL, *tmp;
	char ime[35], c;
	int n;

	while (1) {

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
		else {

			tmp = malloc(sizeof(element));
			if (tmp == NULL) {
				printf("Alokacije memorije nije uspela!");
				exit(1);
			}
			strcpy(tmp->ime, ime);
			printf("\nUnesite email: ");
			scanf("%s", tmp->mail);
			while (1) {
				printf("\nUnesite zeljeni broj karata(Broj mora biti veci od 0): ");
				scanf("%d", &tmp->trazeno);
				if (tmp->trazeno > 0) break;
			}
			tmp->karta = 0;
			printf("\nUnesite 1 ako je osoba clan kluba, 0 ako osoba nije clan kluba ");
			scanf("%d", &tmp->clan);
			tmp->sledeci = NULL;

			if (!lista) lista = tmp;
			else poslednji->sledeci = tmp;
			poslednji = tmp;

		}

	}
	return lista;

}

element* ubaci_pocetak(element *lista) {

	char ime[35], c;
	int n;
	element *novi;

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
	else {

		novi = malloc(sizeof(element));
		if (novi == NULL) {
			printf("Alokacije memorije nije uspela!");
			exit(1);
		}
		strcpy(novi->ime, ime);
		printf("\nUnesite email: ");
		scanf("%s", novi->mail);
		while (1) {
			printf("\nUnesite zeljeni broj karata(Broj mora biti veci od 0): ");
			scanf("%d", &novi->trazeno);
			if (novi->trazeno > 0) break;
		}
		novi->karta = 0;
		printf("\nUnesite 1 ako je osoba clan kluba, 0 ako osoba nije clan kluba ");
		scanf("%d", &novi->clan);

		novi->sledeci = lista;
		lista = novi;

	}

	return lista;

}

element* ubaci_kraj(element *lista) {

	char ime[35], c;
	int n;
	element *novi, *tek = lista;

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
	else {

		novi = malloc(sizeof(element));
		if (novi == NULL) {
			printf("Alokacije memorije nije uspela!");
			exit(1);
		}
		novi->sledeci = NULL;
		strcpy(novi->ime, ime);
		printf("\nUnesite email: ");
		scanf("%s", novi->mail);
		while (1) {
			printf("\nUnesite zeljeni broj karata(Broj mora biti veci od 0): ");
			scanf("%d", &novi->trazeno);
			if (novi->trazeno > 0) break;
		}
		novi->karta = 0;
		printf("\nUnesite 1 ako je osoba clan kluba, 0 ako osoba nije clan kluba ");
		scanf("%d", &novi->clan);

		if (!lista) lista = novi;
		else {
			for (tek; tek->sledeci; tek = tek->sledeci);
			tek->sledeci = novi;
		}

	}

	return lista;

}
