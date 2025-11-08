#include <stdio.h>
#include <stdbool.h>

int main() {
    float minC = 0, maxC = 50;
    float minF = 32, maxF = 122;
    float num, res;
    char deg;

    bool infinity = false;
    printf("Enter number followed by unit ('c', 'f') or 'q' to quit:\n");

    while (!infinity) {
        if (scanf("%f", &num) != 1) {
            scanf(" %c", &deg);
            if (deg == 'q') {
                infinity = true;
                break;
            } else {
                printf("Error: Unknown input!\n");
                continue;
            }
        } else {
            scanf(" %c", &deg);
        }

        switch (deg) {
            case 'f':
                res = (num - 32) * 5 / 9;  // F → C
                printf("Celsius: %.2f\n", res);
                if (res < minC) {
                    printf("Celsius out of range, below normal\n");
                } else if (res > maxC) {
                    printf("Celsius out of range, higher than normal\n");
                }
                break;
            case 'c':
                res = num * 9 / 5 + 32;    // C → F
                printf("Fahrenheit: %.2f\n", res);
                if (res < minF) {
                    printf("Fahrenheit out of range, below normal\n");
                } else if (res > maxF) {
                    printf("Fahrenheit out of range, higher than normal\n");
                }
                break;
            case 'q':
                infinity = true;
                break;
            default:
                printf("Error: Unknown unit '%c'!\n", deg);
                break;
        }
    }

    return 0;
}
