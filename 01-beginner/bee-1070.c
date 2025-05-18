#include <stdio.h>
#define RANGE 6

void calcImparValues(int x) {
    int numNumbers = 0;
    
    while (numNumbers <= RANGE) {
        if(x % 2 != 0) {
            printf("%i\n", x);
            numNumbers++;
        }
        x++;    
    } 
}

int main() {
    int input = 7;
    calcImparValues(input);
    return 0;
}