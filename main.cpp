#include <iostream>
#include <dlfcn.h>
using namespace std;

typedef char* (*encryption_func)(char*, int);
typedef char* (*decryption_func)(char*, int);

int main() {
    void* handle = dlopen("./libcaesar.so", RTLD_LAZY);
    if (!handle) {
        fprintf(stderr, "Error: %s\n", dlerror());
        return 1;
    }

    encryption_func encryption = (encryption_func) dlsym(handle, "encryption");
    decryption_func decryption = (decryption_func) dlsym(handle, "decryption");
    if (!encryption){
        printf("Error: %s\n", dlerror());
        return 1;
    }
    if (!decryption){
        printf("Error: %s\n", dlerror());
        return 1;
    }

    int command;
    cout << "Welcome to Caesar cipher program!" << endl;
    while (true) {
        cout << "Choose the command you want to perform: \n"
            "1 - Encryption.\n"
            "2 - Decryption.\n"
            "3 - Exit the program.\n" << endl;
        cin >> command;
        cin.ignore();
        if (command == 1) {
            char startText[500];
            int keyEncrypt;
            cout << "Enter the text to encrypt: ";
            cin.getline(startText, 500);
            cout << "Enter the key for encryption: ";
            cin >> keyEncrypt;
            cin.ignore();
            char *encryptedText = encryption(startText, keyEncrypt);
            cout << "\nEncrypted text: " << encryptedText << endl;
            delete[] encryptedText;
        } else if (command == 2) {
            char encryptedText[500];
            int keyDecrypt;
            cout << "Enter the text to decrypt: ";
            cin.getline(encryptedText, 500);
            cout << "Enter the key for decryption: ";
            cin >> keyDecrypt;
            cin.ignore();
            char *decryptedText = decryption(encryptedText, keyDecrypt);
            cout << "\nDecrypted text: " << decryptedText << endl;
            delete[] decryptedText;
        } else if (command == 3) {
            cout << "Exiting the program... Bye!\n" << endl;
            break;
        } else {
            cout << "Invalid input! Make sure you are entering a correct command.\n" << endl;
        }
    }
    return 0;
}