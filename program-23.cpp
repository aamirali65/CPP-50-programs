#include <stdio.h>

int main() {
    int num1, num2;
    printf("Input two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (num1 > num2) {
        case 1: 
            printf("The maximum number is %d\n", num1);
            break;
        case 0: 
            switch (num1 == num2) {
                case 1: printf("Both numbers are equal\n"); break;
                case 0: printf("The maximum number is %d\n", num2);
            }
            break;
    }

    return 0;
}
