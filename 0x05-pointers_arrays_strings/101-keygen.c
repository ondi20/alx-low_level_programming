#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 12 // Change this to the desired password length

/*
 *passwords for the program 101-crackme
 *
 *Return: Always 0
 */

char generate_random_character() {
    char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    int len = strlen(characters);
    int index = rand() % len;
    return characters[index];
}

void generate_password(char *password, int length) {
    for (int i = 0; i < length; i++) {
        password[i] = generate_random_character();
    }
    password[length] = '\0'; // Null-terminate the password string
}

int main() {
    srand(time(NULL)); // Seed the random number generator with the current time

    char password[PASSWORD_LENGTH + 1];
    generate_password(password, PASSWORD_LENGTH);

    printf("Generated Password: %s\n", password);

    return 0;
}

