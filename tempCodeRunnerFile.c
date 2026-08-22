#include <stdio.h>

int main() {
    char str[50];
    printf("Enter a full sentence: ");
    
    // Safely reads up to 49 characters + adds '\0'
    scanf("%s ",&str);
    
    printf("You entered: %s", str);
    return 0;
}
