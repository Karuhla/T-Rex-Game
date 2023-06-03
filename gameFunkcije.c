#include <stdio.h>
#include <conio.h>

#define SCREEN_WIDTH 60
#define SCREEN_HEIGHT 20
#define GROUND_HEIGHT 5

#define OBSTACLE_CHAR '#'
#define OBSTACLE_DELAY 10

void igraFunkcija() {

    int trex_pos = SCREEN_HEIGHT - GROUND_HEIGHT; // position za T-Rex //15
    int is_jumping = 0; // flag za jumpanje
    int jump_height = 0; // counter za jump height
    int trex_offset = 10;
    int obstacle_pos = SCREEN_WIDTH; // Initial position of the obstacle
    int pao_je = 0;
    int skace = 0;

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
        printf("\\O");

        // Crtanje poda

        if (is_jumping) {
            
            for (int i = 0; i < jump_height; i++) {

                printf("\n");
            }
            if (jump_height == 1) {

                printf("           ");
                
            }
            if (jump_height == 2) {

                printf("           ");
                skace = 0;
            }
            if (jump_height == 3) {

                printf("          ");
            }
            if (jump_height == 4) {

                printf("         ");
            }

            
        }
        else if (trex_pos < SCREEN_HEIGHT - GROUND_HEIGHT) {

            if (trex_pos == 10) {
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("        ");
            }
            if (trex_pos == 11) {
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("         ");
            }
            if (trex_pos == 12) {
                printf("\n");
                printf("\n");
                printf("\n");
                printf("          ");
            }
            if (trex_pos == 13) {
                printf("\n");
                printf("\n");
                printf("           ");
            }
            if (trex_pos == 14) {
                printf("\n");
                printf("            ");

            }

            

        }
        

        // Spawn obstacle
        if (obstacle_pos <= 0) {
            obstacle_pos = SCREEN_WIDTH;
        }

        if (obstacle_pos >= 0) {
            //printf("\n");

            for (int i = 0; i < obstacle_pos - trex_pos; i++) {

                printf(" ");
                
            }
            //if (jump_height == 5) {

            //    printf("C");
            //}
            if (pao_je == 1) {

                printf(" ");
            }
            if (skace) {
                printf(" ");
            }
            printf("%c\n", OBSTACLE_CHAR);
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

        

        // Check for collision
        /*if (trex_offset == obstacle_pos && obstacle_pos != 0) {
            printf("\nGame Over!\n");
            break;
        }*/

        // Check for user input
        if (_kbhit()) {
            char key = _getch();
            if (key == ' ') {
                skace = 1;
                is_jumping = 1;
                jump_height = 0;
            }
			if (key == '0') {
				system("cls");
				return;
			}
        }

        // Skakanje
        if (is_jumping) {

            trex_pos--;
            jump_height++;
            
            pao_je = 0;
            
            if (jump_height >= 5) {
                is_jumping = 0;
                
            }
            
            
        }
        else if (trex_pos < SCREEN_HEIGHT - GROUND_HEIGHT) {
            trex_pos++; // gravitacija

            if (trex_pos == 15) {
                pao_je = 1;
            }
            
        }

        // Move obstacle
        if (obstacle_pos >= 0) {
            obstacle_pos--;
        }

        // Delay for smoother animation
        Sleep(20);

        

    }

}


