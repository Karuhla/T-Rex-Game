#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void kreiranjeDatoteke(const char* const imeDatoteke) {

	FILE* pF = fopen(imeDatoteke, "wb");
	//CLAN* player = NULL;
	CLAN player = { 0 };

	if (pF == NULL) {
		perror("Kreiranje datoteke studenti.bin");
		exit(EXIT_FAILURE);
	}

	getchar();
	printf("Unesi ime:\n");
	scanf("%29[^\n]", player.ime);
	//fwrite(&brojClanova, sizeof(int), 1, pF);
	fclose(pF);

}

void* ucitavanjeClanova(const char* const imeDatoteke) {

	FILE* pF = fopen(imeDatoteke, "rb");
	if (pF == NULL) {
		perror("Ucitavanje studenata iz datoteke studenti.bin");
		return NULL;
		//exit(EXIT_FAILURE);
	}
	fread(&brojClanova, sizeof(int), 1, pF);
	printf("broj clanova: %d\n", brojClanova);
	CLAN* poljeClanova = (CLAN*)calloc(brojClanova, sizeof(CLAN));
	if (poljeClanova == NULL) {
		perror("Zauzimanje memorije za studente");
		return NULL;
		//exit(EXIT_FAILURE);
	}
	fread(poljeClanova, sizeof(CLAN), brojClanova, pF);
	return poljeClanova;

}