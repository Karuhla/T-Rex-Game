#ifndef HEADER_H
#define HEADER_H

typedef struct {

	char ime[30];
	int highscore;

}CLAN;

int kreiranjeDatoteke(const char* const imeDatoteke);
int izbornik(const char* const imeDatoteke, int* brojClanova);
void* ucitavanjeClanova(const char* const imeDatoteke, int BRCLAN);
void ispisivanjeClanova(const CLAN* const poljeClanova, int BRCLAN);
void* pretrazivanjeClanova(CLAN* const poljeClanova, int BRCLAN);
int izlazIzPrograma(CLAN* poljeClanova);
int igraFunkcija();
void highscores(const char* const imeDatoteke, int BRCLAN);
void zapisPlayer(const char* const imeDatoteke, char ime[30], int score, int BRCLAN);
void brisanjeDatoteke(const char* const imeDatoteke);

#endif //HEADER_H