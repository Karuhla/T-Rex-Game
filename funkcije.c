#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "header.h"



int kreiranjeDatoteke(const char* const imeDatoteke) {

	FILE* pF = fopen(imeDatoteke, "a+");



	if (pF == NULL) {
		perror("Kreiranje datoteke");
		exit(EXIT_FAILURE);
	}

	int count = 0;
	char line[100]; // Assuming each line has a maximum of 100 characters

	while (fgets(line, sizeof(line), pF) != NULL) {
		for (int i = 0; line[i] != '\0'; i++) {
			if (isdigit(line[i])) {
				count++;
				while (isdigit(line[i])) // Skip the entire number
					i++;
			}
		}
	}

	fclose(pF);
	return count;

}

void* ucitavanjeClanova(const char* const imeDatoteke, int BRCLAN) {

	FILE* pF = fopen(imeDatoteke, "r");

	if (pF == NULL) {
		perror("Ucitavanje igraca");
		return NULL;
	
	}

	CLAN* poljeClanova = (CLAN*)calloc(BRCLAN, sizeof(CLAN));

	if (poljeClanova == NULL) {
		perror("Zauzimanje memorije za igrace");
		return NULL;
	
	}

	for (int i = 0; i < BRCLAN; i++) {

		fscanf(pF, "%s %d", (poljeClanova + i)->ime, &(poljeClanova + i)->highscore);

	}

	fclose(pF);



	return poljeClanova;

}


void highscores(const char* const imeDatoteke, int BRCLAN) {

	FILE* pF = fopen(imeDatoteke, "r");



	if (pF == NULL) {
		perror("Ucitavanje igraca");
		return NULL;
		
	}

	fseek(pF, 0, SEEK_SET);

	CLAN* poljeClanova = (CLAN*)calloc(BRCLAN, sizeof(CLAN));

	if (poljeClanova == NULL) {
		perror("Zauzimanje memorije za igrace");
		return NULL;
	
	}

	CLAN* highscorePolje = (CLAN*)calloc(BRCLAN, sizeof(CLAN));
	CLAN* tempPolje = (CLAN*)calloc(BRCLAN, sizeof(CLAN));



	for (int i = 0; i < BRCLAN; i++) {

		fscanf(pF, "%s %d", (poljeClanova + i)->ime, &(poljeClanova + i)->highscore);

	}

	tempPolje = poljeClanova;

	for (int i = 0; i < 5; i++) {

		int max = -1;
		char maxIme[30] = { 0 };

		for (int j = 0; j < BRCLAN; j++) {
			if ((tempPolje + j)->highscore > max) {
				max = (tempPolje + j)->highscore;
				strcpy(maxIme, (tempPolje + j)->ime);
			

			}

		}

		strcpy((highscorePolje + i)->ime, maxIme);

		

		(highscorePolje + i)->highscore = max;
		for (int i = 0; i < BRCLAN; i++) {
			int priv = strcmp(maxIme, (tempPolje + i)->ime);
			if ((max == (tempPolje+i)->highscore) && priv == 0) {
				(tempPolje + i)->highscore = 0;
			}
		}
		

		



	}
	for (int i = 0; i < 5; i++) {
		printf("broj %d igrac: %s sa highscoreom %d\n", i + 1, (highscorePolje + i)->ime, (highscorePolje + i)->highscore);
	}



	fclose(pF);

	free(highscorePolje);
	free(tempPolje);
}




void* pretrazivanjeClanova(CLAN* const poljeClanova, int BRCLAN) {
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

		if (m == 0) {

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

void zapisPlayer(const char* const imeDatoteke, char ime[30], int score, int BRCLAN) {

	FILE* pF = fopen(imeDatoteke, "a+");



	if (pF == NULL) {
		perror("Ucitavanje igraca");
		return NULL;
		
	}

	CLAN* poljeClanova = (CLAN*)calloc(BRCLAN, sizeof(CLAN));

	if (poljeClanova == NULL) {
		perror("Zauzimanje memorije za igrace");
		return NULL;
	
	}

	fseek(pF, 0, SEEK_END);
	fprintf(pF, "\n%s %d", ime, score);

	fclose(pF);


}

void brisanjeDatoteke(const char* const imeDatoteke) {
	FILE* fp = NULL;

	int status = 0;
	fp = fopen(imeDatoteke, "r");
	if (fp == NULL) {
		printf("Datoteka %s ne postoji na disku\n", imeDatoteke);
		return -1;
	}
	else {
		fclose(fp);
	}
	status = remove(imeDatoteke);
	if (status == 0) {
		printf("Uspjesno obrisana datoteka!\n");
	}
	else {
		printf("Nemogucnost brisanja datoteke!\n");
	}

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