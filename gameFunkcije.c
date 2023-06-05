#include <stdio.h>
#include <conio.h>

#define SCREEN_WIDTH 60
#define SCREEN_HEIGHT 20
#define GROUND_HEIGHT 5

#define OBSTACLE_CHAR '#'
#define OBSTACLE_DELAY 10

void igraFunkcija() {

    int trex_pos = SCREEN_HEIGHT - GROUND_HEIGHT; // position za T-Rex //15
    int is_jumping = 0;
    int jump_height = 0;
    int trex_offset = 10;
    int obstacle_pos = SCREEN_WIDTH;
    int pao_je = 0;
    int skace = 0;
    int obstPassed = 0;
    int padaJednu = 0;
    int u_zraku_je = 0;
    int pada = 0;

    while (1) {

        // Clear the console
        system("cls");

        /*if (pada) {
            printf("PADA");
        }*/

        // Crtanje T-Rexa

        //prije obstacle passed
    
        if (trex_offset <= obstacle_pos && !(pada) && trex_pos != 10) {
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
        /*else if (trex_offset <= obstacle_pos && !(pada) && trex_pos == 10) {
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
            for (int i = 0; i < jump_height; i++) {

                printf("\n");
            }
            for (int i = 0; i < trex_offset + 2; i++) {
                printf("B");
            }
        }*/
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
            for (int i = 0; i < trex_offset + 2; i++) {
                printf("K");
            }
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
            for (int i = 0; i < trex_offset + 2; i++) {
                printf("B");
            }
        }
       else if (obstacle_pos == trex_offset) {
           printf("AAAAAAAAAAAAAAAAAAAAAAA");
       }
       else if(trex_offset > obstacle_pos) {

       }
       else {
           printf("Kako se ovo dogodilo");
       }

        //if (obstacle_pos == trex_offset) {
        //    printf("ISPOD JE");
        //    for (int i = 0; i < trex_pos; i++) {
        //        printf("\n");
        //    }
        //    for (int i = 0; i < trex_offset; i++) {
        //        printf(" ");
        //    }
        //    printf(" @\n");
        //    //OK DO OVDJE
        //    for (int i = 0; i < trex_offset; i++) {

        //        printf(" ");
        //    }
        //    printf("\\O\n");
        //    
        //    for (int i = 0; i < jump_height-1; i++) {
        //        printf("\n");
        //    }
        //    for (int i = 0; i < trex_offset; i++) {

        //        printf(" ");
        //    }
        //    printf("%c", OBSTACLE_CHAR);
        //}
        //else 
        //if (obstPassed && !(pao_je)) {
        //    printf("NIJE PAO");
        //    for (int i = 0; i < trex_pos; i++) {
        //        printf("\n");
        //    }
        //    for (int i = 0; i < trex_offset; i++) {
        //        printf(" ");
        //    }
        //    printf(" @\n");
        //    //OK DO OVDJE
        //    for (int i = 0; i < trex_offset; i++) {
        //        
        //        printf(" ");
        //    }
        //    printf("\\O\n");
        //    for (int i = 0; i < obstacle_pos; i++) {

        //        printf(" ");
        //    }
        //    for (int i = 0; i < jump_height; i++) {
        //        printf("\n");
        //    }
        //    
        //    printf("%c", OBSTACLE_CHAR);
        //}
        //else if (obstPassed && pao_je) {
        //    printf("PAO JE");
        //    for (int i = 0; i < trex_pos; i++) {
        //        printf("\n");
        //    }
        //    for (int i = 0; i < trex_offset; i++) {
        //        printf(" ");
        //    }
        //    printf(" @\n");
        //    //OK DO OVDJE
        //    for (int i = 0; i < obstacle_pos-1; i++) {

        //        printf(" ");
        //    }
        //    printf("%c", OBSTACLE_CHAR);
        //    for (int i = obstacle_pos; i < trex_offset; i++) {

        //        printf(" ");
        //    }
        //    printf("\\O\n");
        //}
        //else if(!obstPassed) {
        //    printf("nije prosla jos");
        //    for (int i = 0; i < trex_pos; i++) {
        //        printf("\n");
        //    }
        //    for (int i = 0; i < trex_offset; i++) {
        //        printf(" ");
        //    }
        //    printf(" @\n");
        //    for (int i = 0; i < trex_offset; i++) {
        //        printf(" ");
        //    }
        //    printf("\\O");
        //    if (padaJednu && obstacle_pos <= trex_offset) {
        //        //printf("5 JE");
        //        for(int i = 0; i < 5; i++) {
        //            printf("\n");
        //        }
        //    }
        //}

        if (obstPassed) {
            //printf("PDPAKD");
        }
        

        if (is_jumping) {
            
            for (int i = 0; i < jump_height; i++) {

                printf("\n");
            }
            for (int i = 0; i < trex_offset+2; i++) {
                printf("b");
            }
            /*if (jump_height == 1) {

                for (int i = 0; i < 14; i++) {
                    printf("a");
                }
                                
            }
            if (jump_height == 2) {

                for (int i = 0; i < 13; i++) {
                    printf("b");
                }
                skace = 0;
            }
            if (jump_height == 3) {

                for (int i = 0; i < 12; i++) {
                    printf("c");
                }
            }
            if (jump_height == 4) {

                for (int i = 0; i < 11; i++) {
                    printf("d");
                }
            }*/

            
        }
        else if (!(obstacle_pos == trex_offset)) {

            if (obstacle_pos < 10) {
                //obstPassed = 1;
                //printf("obst PASSED");
                if (trex_pos == 10) {
                    for (int i = 0; i < 5; i++) {
                        printf("\n");
                    }
                    /*for (int i = 0; i < obstacle_pos; i++) {
                        printf("e");
                    }*/
                    //printf("        ");
                }
                if (trex_pos == 11) {
                    for (int i = 0; i < 4; i++) {
                        printf("\n");
                    }
                    /*for (int i = 0; i < obstacle_pos; i++) {
                        printf("d");
                    }*/
                }
                if (trex_pos == 12) {
                    for (int i = 0; i < 3; i++) {
                        printf("\n");
                    }
                    /*for (int i = 0; i < obstacle_pos; i++) {
                        printf("c");
                    }*/
                }
                if (trex_pos == 13) {
                    for (int i = 0; i < 2; i++) {
                        printf("\n");
                    }
                    /*for (int i = 0; i < obstacle_pos; i++) {
                        printf("b");
                    }*/
                }
                if (trex_pos == 14) {
                    for (int i = 0; i < 1; i++) {
                        printf("\n");
                    }
                    /*for (int i = 0; i < obstacle_pos; i++) {
                        printf("a");
                    }*/

                }
                /*if (obstacle_pos == 9) {
                    for (int i = 0; i < 9; i++) {
                        printf(" ");
                    }
                    
                }
                if (obstacle_pos == 8) {
                    for (int i = 0; i < 8; i++) {
                        printf(" ");
                    }

                }
                if (obstacle_pos == 7) {
                    for (int i = 0; i < 7; i++) {
                        printf(" ");
                    }

                }
                if (obstacle_pos == 6) {
                    for (int i = 0; i < 6; i++) {
                        printf(" ");
                    }

                }
                if (obstacle_pos == 5) {
                    for (int i = 0; i < 5; i++) {
                        printf(" ");
                    }

                }
                if (obstacle_pos == 4) {
                    for (int i = 0; i < 4; i++) {
                        printf(" ");
                    }

                }*/
                /*if (obstacle_pos == 3) {
                    for (int i = 0; i < 3; i++) {
                        printf("c");
                    }

                }
                if (obstacle_pos == 2) {
                    for (int i = 0; i < 2; i++) {
                        printf("b");
                    }

                }
                if (obstacle_pos == 1) {
                    for (int i = 0; i < 1; i++) {
                        printf("a");
                    }

                }*/
            }
            //else {
            //    if (trex_pos == 10 && trex_pos != 10 ) {
            //        for (int i = 0; i < 5; i++) {
            //            printf("\n");
            //        }
            //        //printf("        ");
            //    }
            //    if (trex_pos == 11) {
            //        for (int i = 0; i < 4; i++) {
            //            printf("\n");
            //        }
            //        //printf("         ");
            //    }
            //    if (trex_pos == 12) {
            //        for (int i = 0; i < 3; i++) {
            //            printf("\n");
            //        }
            //        //printf("          ");
            //    }
            //    if (trex_pos == 13) {
            //        for (int i = 0; i < 2; i++) {
            //            printf("\n");
            //        }
            //        //printf("           ");
            //    }
            //    if (trex_pos == 14) {
            //        for (int i = 0; i < 1; i++) {
            //            printf("\n");
            //        }
            //        //printf("            ");

            //    }
            //}

            

            

        }
        
        

        // Spawn obstacle
        if (obstacle_pos <= 0) {
            obstacle_pos = SCREEN_WIDTH - trex_offset;
            obstPassed = 0;
        }

        if (obstacle_pos >= 0) {
            //printf("\n");

            if (obstacle_pos <= trex_offset) {
                obstPassed = 1;
                //printf("OBST JE 1");
            }
            // - trex_pos ali treba trex_offset
            for (int i = 0; i < obstacle_pos; i++) {
                /*if (u_zraku_je) {
                    
                    i += trex_offset;
                }
                if (pao_je) {
                    i -= trex_offset;
                }*/
                //if (pada && trex_pos == 11) {
                //    //printf("MOLIM");
                //    //for (int i = 0; i < 10; i++) {
                //        printf("P");
                //    //}
            
                //    
                //    
                //}
                
                    printf("a");
                
                
            }
           
            /*if (pao_je == 1) {

                printf(" ");
            }
            if (skace) {
                printf(" ");
            }*/
            if (!obstPassed) {
                printf("%c\n", OBSTACLE_CHAR);
            }
            
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
            /*if (trex_pos == 12) {
                printf("dodajemo 1");
                padaJednu = 1;
            }
            if (trex_pos == 13) {
                padaJednu = 0;
            }*/
            
        }

        // Move obstacle
        if (obstacle_pos >= 0) {
            obstacle_pos--;
        }

        // Delay for smoother animation
        Sleep(20);

        

    }

}


