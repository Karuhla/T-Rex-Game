#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int izbornik(const char* const imeDatoteke, int *brojClanova) {

	printf("====================");
	printf("Odaberite jednu od ponudenih opcija:");
	printf("====================\n");
	printf("\t\t\tOpcija 1: Igraj T-Rex game!\n");
	printf("\t\t\tOpcija 2: Pogledaj highscore\n");
	printf("\t\t\tOpcija 3: pretrazivanje po imenu!\n");
	printf("\t\t\tOpcija 4: Brisanje highscores!\n");
	printf("\t\t\tOpcija 5: Izadi iz igre!\n");
	printf("======================================\
======================================\n");

	int uvjet = 0;
	int score = 0;
	int status = 0;

	static CLAN* poljeClanova = NULL;
	static CLAN* pronadeniClan = NULL;
	CLAN player = { 0 };

	FILE* fp = NULL;

	scanf("%d", &uvjet);


	switch (uvjet) {
	case 1:

		//Igraj T-Rex game!	

		getchar();
		printf("Unesi ime:\n");
		scanf("%29[^\n]", player.ime);
		getchar();

		score = igraFunkcija();

		printf("\nVas score je %d!\n", score);


		player.highscore = score;
	
		(*brojClanova)++;

	
		zapisPlayer(imeDatoteke, player.ime, player.highscore, *brojClanova);

		break;

	case 2:

		//Pogledaj highscore!



		if (poljeClanova != NULL) {
			free(poljeClanova);
			poljeClanova = NULL;
		}

		poljeClanova = (CLAN*)ucitavanjeClanova(imeDatoteke, *brojClanova);

		if (poljeClanova == NULL) {
			exit(EXIT_FAILURE);
		}



		highscores(imeDatoteke, *brojClanova);

	

		break;

	case 3:

		//Pretrazivanje po imenu!

		pronadeniClan = (CLAN*)pretrazivanjeClanova(poljeClanova, *brojClanova);

		break;

	case 4:


		brisanjeDatoteke(imeDatoteke);
		

		break;

	case 5:

		//Izadi iz igre!

		uvjet = izlazIzPrograma(poljeClanova);

		break;

	default:

		uvjet = 0;

	}

	return uvjet;

}