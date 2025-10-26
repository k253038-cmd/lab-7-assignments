#include <stdio.h>

int main() {
    char input[100];
    
    printf("Enter a string: ");
    
    scanf("%99[^0-9]", input);
    
    printf("String without numeric characters: %s\n", input);
    
    return 0;
}
