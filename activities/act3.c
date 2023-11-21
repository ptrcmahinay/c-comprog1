// focuses on the scanf which accept inputs from the user

int main(){
    int feet, inches;

    printf("Enter two integers separated by spaces: ");
    // scanf read the user input into variable using '&'
    scanf("%d %d", &feet, &inches);

    printf("Feet = %d \n", feet);
    printf("Inches = %d \n", inches);

    return 0;
}