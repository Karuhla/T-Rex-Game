#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

#define BRCLAN 5

void kreiranjeDatoteke(const char* const imeDatoteke) {

	FILE* pF = fopen(imeDatoteke, "a+");

	CLAN player = { 0 };

	if (pF == NULL) {
		perror("Kreiranje datoteke");
		exit(EXIT_FAILURE);
	}

	printf("Unesi ime:\n");
	scanf("%29[^\n]", player.ime);
	getchar();

	fclose(pF);

}

void* ucitavanjeClanova(const char* const imeDatoteke) {

	FILE* pF = fopen(imeDatoteke, "r");

	if (pF == NULL) {
		perror("Ucitavanje igraca");
		return NULL;
		//exit(EXIT_FAILURE);
	}

	CLAN* poljeClanova = (CLAN*)calloc(BRCLAN, sizeof(CLAN));

	if (poljeClanova == NULL) {
		perror("Zauzimanje memorije za igrace");
		return NULL;
		//exit(EXIT_FAILURE);
	}

	for (int i = 0; i < BRCLAN; i++) {

		fscanf(pF, "%s %d", (poljeClanova + i)->ime, &(poljeClanova + i)->highscore);
	
	}


	return poljeClanova;

}



void ispisivanjeClanova(const CLAN* const poljeClanova) {

	if (poljeClanova == NULL) {
		printf("Polje clanova je prazno!\n");
		return;
	}
	int i;


	for (i = 0; i < BRCLAN; i++)
	{
		printf("Clan broj %d\time: %s\thighscore: %d\n",
			i + 1,
			(poljeClanova + i)->ime,
			(poljeClanova + i)->highscore
		);
	}
}

void* pretrazivanjeClanova(CLAN* const poljeClanova) {
	if (poljeClanova == NULL) {
		printf("Polje clanova je prazno!\n");
		return NULL;
	}
	int i;
	char b[30];
	int priv = 0;

	printf("Unesite ime igraca:\n");
	getchar();
	scanf("%29[^\n]", b);

	for (i = 0; i < BRCLAN; i++)
	{
		int m = strcmp(b, (poljeClanova + i)->ime);

		if(m == 0){

			printf("Igrac je pronaden!\n");
			printf("Igrac broj %d\time: %s\t highscore: %d\n",
				i + 1,
				(poljeClanova + i)->ime,
				(poljeClanova + i)->highscore
			);
			return (poljeClanova + i);
		}
		else priv = 1;
	}
	if (priv == 1) {
		printf("Clan ne postoji!\n");
	}
	return NULL;
}

int izlazIzPrograma(CLAN* poljeClanova) {

	char ime[3] = { '\0' };
	printf("Jeste li sigurni da zelite zavrsiti program?\n");
	scanf("%2s", ime);
	if (!strcmp("da", ime)) {
		free(poljeClanova);
		return 0;
	}
	return 1;

}
