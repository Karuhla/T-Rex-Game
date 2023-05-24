#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int izbornik(const char* const imeDatoteke) {

	printf("====================");
	printf("Odaberite jednu od ponudenih opcija:");
	printf("====================\n");
	printf("\t\t\tOpcija 1: Igraj T-Rex game!\n");
	printf("\t\t\tOpcija 2: Pogledaj highscore\n");
	printf("\t\t\tOpcija 3: pretrazivanje po imenu!\n");
	printf("\t\t\tOpcija 4: Izadi iz igre!\n");
	printf("======================================\
======================================\n");

	int uvjet = 0;

	static CLAN* poljeClanova = NULL;
	static CLAN* pronadeniClan = NULL;

	scanf("%d", &uvjet);

	switch (uvjet) {
	case 1:

		//Igraj T-Rex game!

		igraFunkcija();

		break;

	case 2:

		//Pogledaj highscore!

		if (poljeClanova != NULL) {
			free(poljeClanova);
			poljeClanova = NULL;
		}

		poljeClanova = (CLAN*)ucitavanjeClanova(imeDatoteke);
		if (poljeClanova == NULL) {
			exit(EXIT_FAILURE);
		}

		ispisivanjeClanova(poljeClanova);

		break;

	case 3:

		//Pretrazivanje po imenu!

		pronadeniClan = (CLAN*)pretrazivanjeClanova(poljeClanova);

		break;

	case 4:

		uvjet = izlazIzPrograma(poljeClanova);

		break;

	default:

		uvjet = 0;

	}

	return uvjet;

}