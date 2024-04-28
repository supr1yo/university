#include <stdio.h>

int main() {
    char source[] = "Suprixxxyo";
    char destination[20]; // Make sure destination has enough space to hold the copied string
    
    int i = 0;
    // Copying the string character by character
    while (source[i] != sizeof(source)) {
        destination[i] = source[i];
        i++;
    }
    
    printf("Source string: %s\n", source);
    printf("Copied string: %s\n", destination);
    
    return 0;
}
