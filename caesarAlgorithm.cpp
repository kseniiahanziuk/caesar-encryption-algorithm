#include <iostream>

extern "C" {
    char* encryption(char *startText, int key) {
        int len = strlen(startText);
        char* encryptedText = (char*)malloc(len + 1);

        for (int i = 0; i < len; i++) {
            char character = startText[i];

            if (isalpha(character)) {
                if (isupper(character)) {
                    encryptedText[i] = (character - 'A' + key) % 26 + 'A';
                } else {
                    encryptedText[i] = (character - 'a' + key) % 26 + 'a';
                }
            } else {
                encryptedText[i] = character;
            }
        }
        encryptedText[len] = '\0';
        return encryptedText;
    }
}