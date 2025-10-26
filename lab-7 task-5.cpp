#include <stdio.h>

int main() {
    char input[200];
    int whitespace_count = 0;
    char temp;

    printf("Enter a string: ");
  
    fgets(input, sizeof(input), stdin);

  
    for (int i = 0; input[i] != '\0'; i++) {
      
        if (sscanf(&input[i], "%[ \t\n]", &temp) == 1) {
            whitespace_count++;
        }
    }

    printf("Number of whitespace characters: %d\n", whitespace_count);

    return 0;
}
