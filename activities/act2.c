// Focuses on if-else statements
# include <stdio.h>

int main(void){
    // can declare multiple variables on a single line commas to
    int x = -1, y = 0, z = 5;

    if (x == 1){
        printf("%d", y);
        printf("%d", z);
        printf("%d", x);
    } else {
        printf("%d\n", x);
        printf("%d\n", z);
    }

    return 0;
}