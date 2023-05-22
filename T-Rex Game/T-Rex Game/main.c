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

//#include <stdio.h>
//#include <conio.h>
//
//#define SCREEN_WIDTH 60
//#define SCREEN_HEIGHT 20
//#define GROUND_HEIGHT 5
//
//int main() {
//    int trex_pos = SCREEN_HEIGHT - GROUND_HEIGHT; // Initial position of the T-Rex
//    int is_jumping = 0; // Flag to track if the T-Rex is jumping
//    int jump_height = 0; // Counter for the jump height
//
//    // Set the initial offset for the T-Rex
//    int trex_offset = 10;
//
//    while (1) {
//        // Clear the console
//        system("cls");
//
//        // Draw the T-Rex
//        for (int i = 0; i < trex_pos; i++) {
//            printf("\n");
//        }
//        for (int i = 0; i < trex_offset; i++) {
//            printf(" ");
//        }
//        printf(" @\n");
//        for (int i = 0; i < trex_offset; i++) {
//            printf(" ");
//        }
//        printf("\\O\n");
//
//        // Draw the ground
//        for (int i = 0; i < SCREEN_WIDTH; i++) {
//            /* if (i < SCREEN_WIDTH - GROUND_HEIGHT) {
//                 printf(" ");
//             }
//             else {
//                 printf("-");
//             }*/
//            printf("-");
//        }
//        printf("\n");
//
//        // Check for user input
//        if (_kbhit()) {
//            char key = _getch();
//            if (key == ' ') {
//                is_jumping = 1;
//                jump_height = 0;
//            }
//        }
//
//        // Simulate jumping
//        if (is_jumping) {
//            trex_pos--;
//            jump_height++;
//
//            if (jump_height >= 5) {
//                is_jumping = 0;
//            }
//        }
//        else if (trex_pos < SCREEN_HEIGHT - GROUND_HEIGHT) {
//            trex_pos++; // Simulate gravity when not jumping
//        }
//
//        // Delay for smoother animation
//        Sleep(20);
//    }
//
//    return 0;
//}
