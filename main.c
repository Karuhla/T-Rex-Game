#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "header.h"

int main() {

	int uvjet = 1;
	char* imeDatoteke = "highscores.txt";

	kreiranjeDatoteke(imeDatoteke);

	while (uvjet) {

		uvjet = izbornik(imeDatoteke);

	}

	printf("Zavrsetak programa!\n");

	return 0;

}
