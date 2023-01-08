#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "mylib/mylib.h"

int main(){
    int S0 = 0, S1=0, s0 = 0, s1 = 0 , b1 = 0, b2 = 0, o0 = 0, o1 = 0, o2 = 0;
    //b1 = 1 -> button 1
    //b2 = 2 -> button 2
    //b1 + b2 = button 3 (both) -> button 1 + button 2
    while (true){
        printf("\033[2J");
        printf("\n==============================\n");
        printf("\n B1: %d; B2: %d", b1, b2);
        printf("\n S0 is now: %d", S0);
        printf("\n S1 is now: %d", S1);
        if (S0 == 0 && S1 == 0){ // engine off (S=00)

                printf ("\n");
                printf("\n                    Off            ");
                printf("\n                    /\\             ");
                printf("\n                ==========        ");
                printf("\n              //          \\\\      ");
                printf("\n             //            \\\\     ");
                printf("\n            ||              ||     ");
                printf("\n sport mode ||              || normal mode   ");
                printf("\n            ||              ||     ");
                printf("\n             \\\\            //     ");
                printf("\n              \\\\          //     ");
                printf("\n                ==========        ");
                printf("\n                 eco mode           ");
                printf("\n");

            printf ("\n Engine is off!\n");

        } else if (S0 == 0 && S1 == 1){ // normal mode (S=01)

                printf ("\n");
                printf("\n                    Off            ");
                printf("\n                ==========        ");
                printf("\n              //          \\\\      ");
                printf("\n             //            \\\\     ");
                printf("\n            ||              ||     ");
                printf("\n sport mode ||              || > normal mode   ");
                printf("\n            ||              ||     ");
                printf("\n             \\\\            //     ");
                printf("\n              \\\\          //     ");
                printf("\n                ==========        ");
                printf("\n                 eco mode           ");
                printf("\n");

            printf ("\n Normal mode!\n");
            
        } else if (S0 == 1 && S1 == 0){ // eco mode (S=10)

                printf ("\n");
                printf("\n                    Off            ");
                printf("\n                ==========        ");
                printf("\n              //          \\\\      ");
                printf("\n             //            \\\\     ");
                printf("\n            ||              ||     ");
                printf("\n sport mode ||              || normal mode   ");
                printf("\n            ||              ||     ");
                printf("\n             \\\\            //     ");
                printf("\n              \\\\          //     ");
                printf("\n                ==========        ");
                printf("\n                    \\/             ");
                printf("\n                 eco mode           ");
                printf("\n");

            printf ("\n Eco mode!\n");

        } else if (S0 == 1 && S1 == 1){ // sport mode (S=11)

                printf ("\n");
                printf("\n                    Off            ");
                printf("\n                ==========        ");
                printf("\n              //          \\\\      ");
                printf("\n             //            \\\\     ");
                printf("\n            ||              ||     ");
                printf("\nsport mode <||              ||  normal mode   ");
                printf("\n            ||              ||     ");
                printf("\n             \\\\            //     ");
                printf("\n              \\\\          //     ");
                printf("\n                ==========        ");
                printf("\n                 eco mode           ");
                printf("\n");

            printf ("\n Sport Mode!\n");
    
        }
        printf("\nButton 1/2/3(both):\n");
        int input;
        scanf("%d",&input);
        if (input == 1){ 
            printf("\n pressed button 1");
            b1 = 1;
            b2 = 0;
        }
        else if (input == 2){
            printf("\n pressed button 2");
            b1 = 0;
            b2 = 1;
        }
        else if (input == 3){
            printf("\n pressed both buttons");
            b1 = 1;
            b2 = 1;
        }

        state(s0, s1, b1, b2, &S0, &S1);
        s0 = S0;
        s1 = S1;
        output(s0, s1, &o0, &o1, &o2);
    }
    return 0;
}
