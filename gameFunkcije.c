#include <stdio.h>
#include <conio.h>

#define SCREEN_WIDTH 60
#define SCREEN_HEIGHT 20
#define GROUND_HEIGHT 5

#define OBSTACLE_CHAR '#'
#define OBSTACLE_DELAY 10

int igraFunkcija() {

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
    int novaObst = 0;
    int filling = 0;
    int obstPrviPutIkadProsla = 0;
    int score = 0;
    int gameover = 0;

    while (1) {

        system("cls");

        printf(" SCORE: %d", score);

        if (!novaObst) {
            if (!(pada) && trex_pos != 10) {
                
                for (int i = 0; i < trex_pos; i++) {
                    printf("\n");
                }
                for (int i = 0; i < trex_offset; i++) {
                    printf(" ");
                }
                printf(" @\n");


                //za drugi dio

                if (trex_pos != 15) {
                    if (obstPrviPutIkadProsla) {

                        for (int i = 0; i < trex_offset; i++) {
                            printf(" ");
                        }

                        printf("\\O");

                        for (int i = 0; i < jump_height; i++) {

                            printf("\n");
                        }

                        filling = trex_offset - novaObst;

                        for (int i = -2; i < novaObst; i++) {
                            printf(" ");
                        }

                        if (novaObst != -1) {
                            printf("%c", OBSTACLE_CHAR);
                        }

                        for (int i = 0; i < filling-1; i++) {
                            printf(" ");
                        }

                    }
                    else {
                        for (int i = 0; i < trex_offset; i++) {
                            printf(" ");

                        }
                        printf("\\O");
                    }



                }

                else {



                    if (obstPrviPutIkadProsla) {

                        filling = trex_offset - novaObst;

                        for (int i = -2; i < novaObst; i++) {
                            printf(" ");
                        }

                        if (novaObst != -1) {
                            printf("%c", OBSTACLE_CHAR);
                        }

                        for (int i = 0; i < filling - 1 - 1 - 1; i++) {
                            printf(" ");
                        }

                    }
                    else {
                        for (int i = 0; i < trex_offset; i++) {
                            printf(" ");
                        }
                    }

                    printf("\\O");

                }




            }
            else if (obstacle_pos == 0 && !pada) {
                
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
                        printf(" ");
                    }
                    printf(" %c\n", OBSTACLE_CHAR);
                }
                else if (obstacle_pos == 1) {
                    for (int i = 0; i < (trex_offset + 2); i++) {
                        printf(" ");
                    }
                    printf(" %c\n", OBSTACLE_CHAR);
                }
                else if (obstNePostoji) {
                    for (int i = 0; i < (trex_offset + 2); i++) {
                        printf(" ");
                    }
                    printf("%c\n", OBSTACLE_CHAR);
                }
                else {
                    for (int i = 0; i < trex_offset + 2; i++) {
                        printf(" ");
                    }
                }
            }
            else if (pada) {
                
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
                        printf(" ");
                    }
                    printf(" %c\n", OBSTACLE_CHAR);
                }
                else if (obstacle_pos == 1) {
                    for (int i = 0; i < (trex_offset + 2); i++) {
                        printf(" ");
                    }
                    printf(" %c\n", OBSTACLE_CHAR);
                }
                else if (obstNePostoji) {
                    for (int i = 0; i < (trex_offset + 2); i++) {
                        printf(" ");
                    }
                    printf("%c\n", OBSTACLE_CHAR);
                }
                else {
                    for (int i = 0; i < trex_offset + 2; i++) {
                        printf(" ");
                    }
                }

            }
            else if (trex_pos == 10) {
                

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


                
                if (obstPrviPutIkadProsla) {

                    for (int i = 0; i < jump_height; i++) {

                        printf("\n");
                    }


                    filling = trex_offset - novaObst;

                    for (int i = -2; i < novaObst; i++) {
                        printf(" ");
                    }

                    if (novaObst != -1) {
                        printf("%c", OBSTACLE_CHAR);
                    }

                    for (int i = 0; i < filling - 1 - 1 - 1; i++) {
                        printf(" ");
                    }

                }
                

                else {
                    
                    for (int i = 0; i < jump_height; i++) {

                        printf("\n");
                    }


                    if (obstacle_pos == 0) {
                        obstNePostoji = 0;
                        for (int i = 0; i < (trex_offset + 2) - 1; i++) {
                            printf(" ");
                        }
                        printf(" %c\n", OBSTACLE_CHAR);
                    }
                    else if (obstacle_pos == 1) {
                        for (int i = 0; i < (trex_offset + 2); i++) {
                            printf(" ");
                        }
                        printf(" %c\n", OBSTACLE_CHAR);
                    }
                    else if (obstNePostoji) {
                        for (int i = 0; i < (trex_offset + 2); i++) {
                            printf(" ");
                        }
                        printf("%c\n", OBSTACLE_CHAR);
                    }
                    else {
                        for (int i = 0; i < trex_offset + 2; i++) {
                            printf(" ");
                        }
                    }
                }



            }
            else {
                printf("Kako se ovo dogodilo");
            }
        }

        //nakon sto je obstacle prosla ispod t-rexa

        else if (novaObst) {

            if (!(pada) && trex_pos != 10 && trex_pos != 15) {
                
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

                filling = trex_offset - novaObst;



                if (obstacle_pos != 1 && obstacle_pos != 0) {


                    if (novaObst != -1) {

                        for (int i = -2; i < novaObst; i++) {
                           
                            printf(" ");
                        }

                        printf("%c", OBSTACLE_CHAR);

                        for (int i = 0; i < filling - 1; i++) {

                            printf(" ");

                        }
                    }
                    else if (novaObst == -1 && obstacle_pos == SCREEN_WIDTH - trex_offset - 3 - 10) {

                        for (int i = -2; i < novaObst; i++) {
                            printf(" ");
                        }

                        printf("%c", OBSTACLE_CHAR);

                        for (int i = 0; i < filling - 1 ; i++) {

                            printf(" ");

                        }
                    }
                    else if (novaObst == -1 && obstacle_pos == SCREEN_WIDTH - trex_offset - 3 - 11) {
                        printf("%c", OBSTACLE_CHAR);

                        for (int i = 0; i < filling; i++) {

                            printf(" ");

                        }
                    }
                    
                    else {
                       

                        for (int i = -2; i < novaObst; i++) {
                            printf(" ");
                        }

                        for (int i = 0; i < filling; i++) {

                            printf(" ");

                        }
                    }





                }



                else {
                    for (int i = 0; i < novaObst; i++) {
                        printf(" ");
                    }

                    if (novaObst != -1) {
                        printf("%c", OBSTACLE_CHAR);
                    }

                    for (int i = 0; i < filling + 1; i++) {
                        printf(" ");
                    }
                }

                if (is_jumping) {

                    if (obstacle_pos == 0) {
                        obstNePostoji = 0;

                        printf("%c\n", OBSTACLE_CHAR);
       
                    }
                    else if (obstacle_pos == 1) {
           
                        printf(" %c\n", OBSTACLE_CHAR);
                    

                    }
                    else if (obstNePostoji) {
        
                        printf("\n");
                    }
                    else {
                 
                    }

                }

            }
            else if (!(pada) && trex_pos != 10 && trex_pos == 15) {

                for (int i = 0; i < trex_pos; i++) {
                    printf("\n");
                }
                for (int i = 0; i < trex_offset; i++) {
                    printf(" ");
                }
                printf(" @\n");

                filling = trex_offset - novaObst;

  

                if (obstacle_pos != 1 && obstacle_pos != 0) {
 

                    if (novaObst != -1) {

                        for (int i = -2; i < novaObst; i++) {
                            printf(" ");
                        }

                        printf("%c", OBSTACLE_CHAR);

                        for (int i = 0; i < filling - 1 - 1 - 1; i++) {

                            printf(" ");

                        }
                    }
                    else if (novaObst == -1 && obstacle_pos == SCREEN_WIDTH - trex_offset - 3 - 10) {

                        for (int i = -2; i < novaObst; i++) {
                            printf(" ");
                        }

                        printf("%c", OBSTACLE_CHAR);

                        for (int i = 0; i < filling - 1 - 1 - 1; i++) {

                            printf(" ");

                        }
                    }
                    else if (novaObst == -1 && obstacle_pos == SCREEN_WIDTH - trex_offset - 3 - 11) {
                        printf("%c", OBSTACLE_CHAR);

                        for (int i = 0; i < filling - 1 - 1; i++) {

                            printf(" ");

                        }

                    }

                    else {
                  

                        for (int i = -2; i < novaObst; i++) {
                            printf(" ");
                        }

                        for (int i = 0; i < filling - 1 - 1; i++) {

                            printf(" ");

                        }
                        
                    }


                }
                


                else {
    
                    for (int i = 0; i < trex_offset; i++) {

                        printf(" ");

                    }
                    printf("\\O\n");
                    for (int i = 0; i < SCREEN_WIDTH; i++) {

                        printf("-");

                    }
                    printf("\n");
                    printf("\n\tGame Over!\n\n");
                    return score;
                }

                printf("\\O");
                

            }
            else if (obstacle_pos == 0 && !pada) {
      
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
                        printf(" ");
                    }
            
                    printf(" %c\n", OBSTACLE_CHAR);
                }
                else if (obstacle_pos == 1) {
                    for (int i = 0; i < (trex_offset + 2); i++) {
                        printf(" ");
                    }
                   
                    printf("%c\n", OBSTACLE_CHAR);
                }
                else if (obstNePostoji) {
                    for (int i = 0; i < (trex_offset + 2); i++) {
                        printf(" ");
                    }
                    printf("%c\n", OBSTACLE_CHAR);
                }
                else {
                    for (int i = 0; i < trex_offset + 2; i++) {
                        printf(" ");
                    }
                }
            }
            else if (pada) {
              
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

                if (trex_pos == 11) {
                    for (int i = 0; i < 3; i++) {
                        printf("\n");
                    }
                }
                if (trex_pos == 12) {
                    for (int i = 0; i < 2; i++) {
                        printf("\n");
                    }
                }
                if (trex_pos == 13) {
                    for (int i = 0; i < 1; i++) {
                        printf("\n");
                    }
                }
      

                filling = trex_offset - novaObst;

                if (obstacle_pos != 1 && obstacle_pos != 0) {
          

                    if (novaObst != -1) {

                        for (int i = -2; i < novaObst; i++) {
                            printf(" ");
                        }

                        printf("%c", OBSTACLE_CHAR);

                        for (int i = 0; i < filling - 1; i++) {

                            printf(" ");

                        }
                    }
                    else if (novaObst == -1 && obstacle_pos == SCREEN_WIDTH - trex_offset - 3 - 10) {

                        for (int i = -2; i < novaObst; i++) {
                            printf(" ");
                        }

                        printf("%c", OBSTACLE_CHAR);

                        for (int i = 0; i < filling - 1; i++) {

                            printf(" ");

                        }
                    }
                    else if (novaObst == -1 && obstacle_pos == SCREEN_WIDTH - trex_offset - 3 - 11) {
                        printf("%c", OBSTACLE_CHAR);

                        for (int i = 0; i < filling; i++) {

                            printf(" ");

                        }
                    }

                    else {
                  

                        for (int i = -2; i < novaObst; i++) {
                            printf(" ");
                        }

                        for (int i = 0; i < filling; i++) {

                            printf(" ");

                        }
                    }
                }




       

                if (obstacle_pos == 0) {
                    obstNePostoji = 0;
                    for (int i = 0; i < (trex_offset + 2) - 1; i++) {
                        printf(" ");
                    }
                    printf(" %c\n", OBSTACLE_CHAR);
         
                }
                else if (obstacle_pos == 1) {
                    for (int i = 0; i < (trex_offset + 2); i++) {
                        printf(" ");
                    }
                    printf(" %c\n", OBSTACLE_CHAR);
               

                }
                else if (obstNePostoji) {
            
                    printf("\n");
                }
                else if (trex_pos == 14) {

                }
                else {
     
                }

            }
            else if (trex_pos == 10) {
 
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

                filling = trex_offset - novaObst;

                if (obstacle_pos != 1 && obstacle_pos != 0) {


                    if (novaObst != -1) {

                        for (int i = -2; i < novaObst; i++) {
                            printf(" ");
                        }

                        printf("%c", OBSTACLE_CHAR);

                        for (int i = 0; i < filling - 1; i++) {

                            printf(" ");

                        }
                    }
                    else if (novaObst == -1 && obstacle_pos == SCREEN_WIDTH - trex_offset - 3 - 10) {

                        for (int i = -2; i < novaObst; i++) {
                            printf(" ");
                        }

                        printf("%c", OBSTACLE_CHAR);

                        for (int i = 0; i < filling - 1; i++) {

                            printf(" ");

                        }
                    }
                    else if (novaObst == -1 && obstacle_pos == SCREEN_WIDTH - trex_offset - 3 - 11) {
                        printf("%c", OBSTACLE_CHAR);

                        for (int i = 0; i < filling; i++) {

                            printf(" ");

                        }
                    }

                    else {
                   

                        for (int i = -2; i < novaObst; i++) {
                            printf(" ");
                        }

                        for (int i = 0; i < filling; i++) {

                            printf(" ");

                        }
                    }
                }

                if (obstacle_pos == 0) {
                   
                    obstNePostoji = 0;
                    for (int i = 0; i < (trex_offset + 2) - 1; i++) {
                        printf(" ");
                    }
                    printf(" %c\n", OBSTACLE_CHAR);
                }
                else if (obstacle_pos == 1) {
                  
                    for (int i = 0; i < (trex_offset + 2); i++) {
                        printf(" ");
                    }
                    printf(" %c\n", OBSTACLE_CHAR);
                }
                else if (obstNePostoji) {
     
                    printf("\n");
                }
                else {

                }
            }
            else {
                printf("Kako se ovo dogodilo");
            }

        }

        //za prije nove obst

        if (is_jumping && !novaObst && !obstPrviPutIkadProsla) {

            for (int i = 0; i < jump_height; i++) {

                printf("\n");
            }
            if (obstacle_pos == 0) {
                obstNePostoji = 0;
                for (int i = 0; i < (trex_offset + 2) - 1; i++) {
                    printf(" ");
                }
                printf(" %c\n", OBSTACLE_CHAR);
            }
            else if (obstacle_pos == 1) {
                for (int i = 0; i < (trex_offset + 2); i++) {
                    printf(" ");
                }
                printf(" %c\n", OBSTACLE_CHAR);
            }
            else if (obstNePostoji) {
                for (int i = 0; i < (trex_offset + 2); i++) {
                    printf(" ");
                }
                printf("%c\n", OBSTACLE_CHAR);
            }
            else {
                for (int i = 0; i < trex_offset + 2; i++) {
                    printf(" ");
                }
            }

        }

        // Spawn obstacle
        
        if (obstacle_pos < 0) {
            obstNePostoji = 1;
            obstDesno = 0;
            obstacle_pos = SCREEN_WIDTH - trex_offset - 3;
            obstNePostoji = 0;


        }
        else if (obstacle_pos > 1) {
            obstDesno = 1;
            obstNePostoji = 0;
            if (obstacle_pos < trex_offset) {
               
            }
            
            for (int i = 0; i < obstacle_pos; i++) {

                if (obstacle_pos == 1) {
                    i++;
                   
                }
                printf(" ");

            }

            printf("%c\n", OBSTACLE_CHAR);
        }
        else if (obstacle_pos == 0) {
            obstNePostoji = 1;
            score++;
            novaObst = 1;
            obstPrviPutIkadProsla = 1;
            obstPassed = 1;
            novaObst = trex_offset;
        }
        else {
            obstDesno = 0;
            obstNePostoji = 0;
          
        }


        if (trex_pos == 15 && obstNePostoji || trex_pos == 15 && novaObst == 8)
        
        {

            if (trex_pos == 15 && novaObst == 8) {
                score -= 1;
            }


            gameover = 1;
            if (gameover) {
                printf("\n");

                for (int i = 0; i < SCREEN_WIDTH; i++) {

                    printf("-");

                }
                printf("\n");
            }

            printf("\n\tGame Over!\n\n");
         
            
            return score;
        }

        // Crtanje poda
        for (int i = 0; i < SCREEN_WIDTH; i++) {

            printf("-");

        }
        printf("\n");

        // Check for user input

        if (_kbhit()) {
            char key = _getch();
            if (key == ' ' && trex_pos == 15) {
                skace = 1;
                is_jumping = 1;
                u_zraku_je = 1;
                jump_height = 0;
            }
            if (key == '0') {
                system("cls");
                return 0;
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
        if (obstPassed) {
            if (novaObst >= 0) {
                novaObst--;
            }

        }

        Sleep(20);

    }

}


