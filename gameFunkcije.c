#include <stdio.h>
#include <conio.h>

#define SCREEN_WIDTH 60
#define SCREEN_HEIGHT 20
#define GROUND_HEIGHT 5

#define OBSTACLE_CHAR '#'
#define OBSTACLE_DELAY 10

void igraFunkcija() {

    int trex_pos = SCREEN_HEIGHT - GROUND_HEIGHT; // position za T-Rex // 15
    int is_jumping = 0;
    int jump_height = 0;
    int trex_offset = 10;
    int obstacle_pos = SCREEN_WIDTH - trex_offset - 3;
    int pao_je = 0;
    int skace = 0;
    int obstPassed = 0;
    int padaJednu = 0;
    int u_zraku_je = 0;
    int pada = 0;
    int obstDesno = 1;
    int obstNePostoji = 0;
    //int cudnoStanje = 0;

    while (1) {

        
        // Clear the console
        system("cls");

        /*if (pada) {
            printf("PADA");
        }*/

        // Crtanje T-Rexa

        //prije obstacle passed

        if (obstNePostoji) {
            printf("obstnepostoji");
        }

        if (!(pada) && trex_pos != 10) {
            printf("obstacle nije prosla t-rexa");
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

        }
        else if (obstacle_pos == 0 && !pada) {
            printf("SOGRGGUIGRUOGUOGOGGSSORUFGOSRGOSRGSR");
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
            for (int i = 0; i < jump_height; i++) {

                printf("\n");
            }
            if (obstacle_pos == 0) {
                obstNePostoji = 0;
                for (int i = 0; i < (trex_offset + 2) - 1; i++) {
                    printf("F");
                }
                printf(" %c\n", OBSTACLE_CHAR);
            }
            else if (obstacle_pos == 1) {
                for (int i = 0; i < (trex_offset + 2); i++) {
                    printf("F");
                }
                printf(" %c\n", OBSTACLE_CHAR);
            }
            else if (obstNePostoji) {
                for (int i = 0; i < (trex_offset + 2); i++) {
                    printf("B");
                }
                printf("%c\n", OBSTACLE_CHAR);
            }
            else {
                for (int i = 0; i < trex_offset + 2; i++) {
                    printf("F");
                }
            }
        }
        else if (pada) {
            printf("t-rex pada");
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
            /*for (int i = 0; i < jump_height; i++) {

                printf("\n");
            }*/
            if (trex_pos == 11) {
                for (int i = 0; i < 4; i++) {
                    printf("\n");
                }
            }
            if (trex_pos == 12) {
                for (int i = 0; i < 3; i++) {
                    printf("\n");
                }
            }
            if (trex_pos == 13) {
                for (int i = 0; i < 2; i++) {
                    printf("\n");
                }
            }
            if (trex_pos == 14) {
                for (int i = 0; i < 1; i++) {
                    printf("\n");
                }
            }
            if (obstacle_pos == 0) {
                obstNePostoji = 0;
                for (int i = 0; i < (trex_offset + 2) - 1; i++) {
                    printf("K");
                }
                printf(" %c\n", OBSTACLE_CHAR);
            }
            else if (obstacle_pos == 1) {
                for (int i = 0; i < (trex_offset + 2); i++) {
                    printf("K");
                }
                printf(" %c\n", OBSTACLE_CHAR);
            }
            else if (obstNePostoji) {
                for (int i = 0; i < (trex_offset + 2); i++) {
                    printf("B");
                }
                printf("%c\n", OBSTACLE_CHAR);
            }
            else {
                for (int i = 0; i < trex_offset + 2; i++) {
                    printf("K");
                }
            }
            
            /*if (!obstDesno) {
                printf("\n");
            }*/

        }
        else if (trex_pos == 10) {
            printf("trex je 10");
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
            for (int i = 0; i < jump_height; i++) {

                printf("\n");
            }
            
            if (obstacle_pos == 0) {
                obstNePostoji = 0;
                for (int i = 0; i < (trex_offset + 2)-1; i++) {
                    printf("B");
                }
                printf(" %c\n", OBSTACLE_CHAR);
            }
            else if (obstacle_pos == 1) {
                for (int i = 0; i < (trex_offset + 2); i++) {
                    printf("B");
                }
                printf(" %c\n", OBSTACLE_CHAR);
            }
            else if (obstNePostoji) {
                for (int i = 0; i < (trex_offset + 2); i++) {
                    printf("B");
                }
                printf("%c\n", OBSTACLE_CHAR);
            }
            else {
                for (int i = 0; i < trex_offset + 2; i++) {
                    printf("B");
                }
            }

        }
        else if (obstacle_pos == trex_offset) {
            //printf("AAAAAAAAAAAAAAAAAAAAAAA");
        }
        else if (trex_offset > obstacle_pos) {
            //printf("jel se ovo izvrsava");
        }
        else {
            printf("Kako se ovo dogodilo");
        }
        if (is_jumping && !obstDesno) {
            //printf("Z");
            //cudnoStanje = 1;
        }
        

        if (obstPassed) {
            //printf("PDPAKD");
        }


        if (is_jumping) {

            for (int i = 0; i < jump_height; i++) {

                printf("\n");
            }
            /*if (obstacle_pos == 1) {
                for (int i = 0; i < (trex_offset + 2); i++) {
                    printf("b");
                }
                printf("J\n");
            }*/
             if (obstacle_pos == 0) {
                 obstNePostoji = 0;
                for (int i = 0; i < (trex_offset + 2) - 1; i++) {
                    printf("b");
                }
                printf(" %c\n", OBSTACLE_CHAR);
            }
            //else if(obstacle_pos <= 0) {
            //    for (int i = 0; i < (trex_offset + 2); i++) {
            //        printf("b");
            //    }
            //    printf("5\n");
            //}
             else if (obstacle_pos == 1) {
                 for (int i = 0; i < (trex_offset + 2); i++) {
                     printf("b");
                 }
                 printf(" %c\n", OBSTACLE_CHAR);
             }
             else if (obstNePostoji) {
                 for (int i = 0; i < (trex_offset + 2); i++) {
                     printf("b");
                 }
                 printf("%c\n", OBSTACLE_CHAR);
             }
            else {
                for (int i = 0; i < trex_offset + 2; i++) {
                    printf("b");
                }
            }

        }

        // Spawn obstacle

        if (obstacle_pos < 0) {
            obstNePostoji = 1;
            obstDesno = 0;
            obstacle_pos = SCREEN_WIDTH - trex_offset - 3;
            obstNePostoji = 0;
            obstPassed = 0;
            
        }
        else if (obstacle_pos > 1) {
            obstDesno = 1;
            obstNePostoji = 0;
            if (obstacle_pos < trex_offset) {
                obstPassed = 1;
            }
            //printf("U");
            for (int i = 0; i < obstacle_pos; i++) {

                if (obstacle_pos == 1) {
                    i++;
                    //printf("PLEASE");
                }
                printf("a");

            }


            printf("%c\n", OBSTACLE_CHAR);
        }
        else if (obstacle_pos == 0) {
            obstNePostoji = 1;

        }
        else {
            obstDesno = 0;
            obstNePostoji = 0;
            //printf("8\n");
        }

        // Crtanje poda
        for (int i = 0; i < SCREEN_WIDTH; i++) {

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
                u_zraku_je = 1;
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
            pada = 1;

            if (trex_pos == 15) {
                pao_je = 1;
                u_zraku_je = 0;
                pada = 0;
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


