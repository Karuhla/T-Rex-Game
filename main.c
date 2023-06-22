#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "header.h"

int main() {

	int uvjet = 1;

	char* imeDatoteke = "highscores.txt";

	int brojScoreova = 0;

	brojScoreova = kreiranjeDatoteke(imeDatoteke);

	while (uvjet) {

		uvjet = izbornik(imeDatoteke, &brojScoreova);

	}

	printf("Zavrsetak programa!\n");

	return 0;

}
