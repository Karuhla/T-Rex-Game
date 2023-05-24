#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void kreiranjeDatoteke(const char* const imeDatoteke) {

	FILE* pF = fopen(imeDatoteke, "wb");
	//CLAN* player = NULL;
	CLAN player = { 0 };

	if (pF == NULL) {
		perror("Kreiranje datoteke");
		exit(EXIT_FAILURE);
	}

	printf("Unesi ime:\n");
	scanf("%29[^\n]", player.ime);
	getchar();

	//fwrite(&brojClanova, sizeof(int), 1, pF);

	fclose(pF);

}

void* ucitavanjeClanova(const char* const imeDatoteke) {

	FILE* pF = fopen(imeDatoteke, "rb");

	if (pF == NULL) {
		perror("Ucitavanje igraca");
		return NULL;
		//exit(EXIT_FAILURE);
	}

	//fread(&brojClanova, sizeof(int), 1, pF);
	//citanje highscorea i imena
	//printf("broj clanova: %d\n", brojClanova);
	
	//recimo da pokazujemo prvih 10 najboljih rezultata

	int brojClanova = 10;

	CLAN* poljeClanova = (CLAN*)calloc(brojClanova, sizeof(CLAN));

	if (poljeClanova == NULL) {
		perror("Zauzimanje memorije za igrace");
		return NULL;
		//exit(EXIT_FAILURE);
	}

	fread(poljeClanova, sizeof(CLAN), brojClanova, pF);

	return poljeClanova;

}

void ispisivanjeClanova(const CLAN* const poljeClanova) {

	if (poljeClanova == NULL) {
		printf("Polje clanova je prazno!\n");
		return;
	}
	int i;

	//10 je broj clanova

	for (i = 0; i < 10; i++)
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
	int b;
	int priv = 0;
	//char trazenoIme[20] = { '\0' };
	printf("Unesite trazeni kriterij za pronalazak clanova.\n");
	//getchar();
	scanf("%d", &b);
	//scanf("%19[^\n]", trazenoIme);
	int brojClanova = 10;

	for (i = 0; i < brojClanova; i++)
	{

		//if (!strcmp(trazenoIme, (poljeClanova + i)->ime)) {
		if (b == (poljeClanova + i)->ime) {
			printf("Clan je pronaden!\n");
			printf("Clan broj %d\time: %s\t highscore: %d\n",
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