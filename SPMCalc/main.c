#include <stdio.h>
#include <string.h>
#include "functions.h"

int main(){
    float res = 0;

    char choice;

    while(choice != 'q'){
        printf("\n\n******** CALCULATOR ********");
        printf("\na: ADD          b: SUBTRACT");
        printf("\nc: MULTIPLY     d: DIVIDE");
        printf("\nEnter \'q\' to quit.");
        printf("\n\nEnter your choice: ");
        scanf("%c", &choice);
        getchar();

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
            case'd':
                res = div();
                break;
            case 'q':
                printf("Terminating...");
                continue;
            default:
                printf("\nIncorrect input\n");
                continue;
        }

        printf("\nResult: %.2f",res);

    }

    return 0;
}