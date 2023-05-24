#ifndef HEADER_H
#define HEADER_H

typedef struct {

	char ime[30];
	int highscore;

}CLAN;

void kreiranjeDatoteke(const char* const imeDatoteke);
int izbornik(const char* const imeDatoteke);
void* ucitavanjeClanova(const char* const imeDatoteke);
void ispisivanjeClanova(const CLAN* const poljeClanova);
void* pretrazivanjeClanova(CLAN* const poljeClanova);
int izlazIzPrograma(CLAN* poljeClanova);
void igraFunkcija();


#endif //HEADER_H