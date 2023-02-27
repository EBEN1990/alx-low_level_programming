#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void) {
    char password[PASSWORD_LENGTH + 1];
    int i;
    
    // Seed the random number generator with the current time
    srand(time(NULL));
    
    // Generate a random password
    for (i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = rand() % 94 + 33;
    }
    password[PASSWORD_LENGTH] = '\0';
    
    // Print the password
    printf("%s\n", password);
    
    return 0;
}
