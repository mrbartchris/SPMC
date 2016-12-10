#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"
typedef int bool;
#define true 1
#define false 0

int main(){
    float res = 0;

    char choice;

    bool quit = true;

    do {
        printf("\n\n******** CALCULATOR ********");
        printf("\na: ADD          b: SUBTRACT");
        printf("\nc: MULTIPLY     d: DIVIDE");
        printf("\nEnter \'q\' to quit.");
        printf("\n\nEnter your choice: ");
        scanf ("%c",&choice);

        switch (choice) {
            case 'a':
                res = add();
                break;
            case 'b':
                res = sub();
                break;
            case 'c':
                res = mult();
                break;
            case 'd':
                res = divide();
                break;
            case 'q':
                printf("Terminating...");
                exit(1);
            default:
                printf("\nIncorrect input\n");
        }
        getchar();
        printf("\nResult: %.2f",res);
    }while(quit == true);

    return 0;
}
