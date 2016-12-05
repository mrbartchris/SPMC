#include <stdio.h>
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
        scanf ("%[^\n]%*c",&choice);

        switch (choice) {
            case 'a':
                res = add();
                break;
            case 'b':
                res = sub();
                break;
            case 'c':
                res = mul();
                break;
            case 'd':
                res = div();
                break;
            case 'q':
                printf("Terminating...");
                quit = false;
                break;
            default:
                printf("\nIncorrect input\n");
        }
        getchar();
        printf("\nResult: %.2f",res);
    }while(quit == true);

    return 0;
}