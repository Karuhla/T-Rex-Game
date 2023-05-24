#include <stdio.h>
#include <conio.h>

#define SCREEN_WIDTH 60
#define SCREEN_HEIGHT 20
#define GROUND_HEIGHT 5

void igraFunkcija() {

    int trex_pos = SCREEN_HEIGHT - GROUND_HEIGHT; // position za T-Rex //15
    int is_jumping = 0; // flag za jumpanje
    int jump_height = 0; // counter za jump height
    int trex_offset = 10;

    while (1) {

        // Clear the console
        system("cls");

        // Crtanje T-Rexa
        for (int i = 0; i < trex_pos; i++) {
            printf("\n");
        }
        for (int i = 0; i < trex_offset; i++) {
            printf(" ");
        }
        printf(" @\n");
        for (int i = 0; i < trex_offset; i++) {
            printf(" ");
        }
        printf("\\O\n");

        // Crtanje poda
        if (is_jumping) {
            for (int i = 0; i < jump_height; i++) {

                printf("\n");
            }
        }
        else if (trex_pos < SCREEN_HEIGHT - GROUND_HEIGHT) {
            /*for (int i = 0; i < 3; i++) {

                printf("\n");
            }*/
            if (trex_pos == 10) {
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
            }
            if (trex_pos == 11) {
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
            }
            if (trex_pos == 12) {
                printf("\n");
                printf("\n");
                printf("\n");
            }
            if (trex_pos == 13) {
                printf("\n");
                printf("\n");
            }
            if (trex_pos == 14) {
                printf("\n");

            }


        }

     
        
        for (int i = 0; i < SCREEN_WIDTH; i++) {
             /*if (i < SCREEN_WIDTH - GROUND_HEIGHT) {
                 printf(" ");
             }
             else {
                 printf("-");
             }*/
            
            printf("-");
            
            
        }
        printf("\n");

        // Check for user input
        if (_kbhit()) {
            char key = _getch();
            if (key == ' ') {
                is_jumping = 1;
                jump_height = 0;
            }
        }

        // Skakanje
        if (is_jumping) {
            trex_pos--;
            jump_height++;

            if (jump_height >= 5) {
                is_jumping = 0;
            }
            
            
        }
        else if (trex_pos < SCREEN_HEIGHT - GROUND_HEIGHT) {
            trex_pos++; // gravitacija


            
        }

        // Delay for smoother animation
        Sleep(20);

        if (_kbhit()) {

            char key = _getch();
            if (key == '0') {
                system("cls");
                return 0;
            }
        }

    }

}


