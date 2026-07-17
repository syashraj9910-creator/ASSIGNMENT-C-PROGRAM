#include <stdio.h>
#include <string.h>
#include <ctype.h>

void lengthString(char str[]) {
    printf("Length = %d\n", strlen(str));
}

void reverseString(char str[]) {
    int len = strlen(str);
    printf("Reversed String: ");
    for (int i = len - 1; i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");
}

void palindrome(char str[]) {
    int len = strlen(str);
    int flag = 1;

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("The string is a Palindrome.\n");
    else
        printf("The string is NOT a Palindrome.\n");
}

void countCharacters(char str[]) {
    int vowels = 0, digits = 0, spaces = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u')
            vowels++;

        if (isdigit(str[i]))
            digits++;

        if (str[i] == ' ')
            spaces++;
    }

    printf("Vowels : %d\n", vowels);
    printf("Digits : %d\n", digits);
    printf("Spaces : %d\n", spaces);
}

void frequency(char str[]) {
    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++)
        freq[(unsigned char)str[i]]++;

    printf("\nCharacter Frequency:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0)
            printf("%c : %d\n", i, freq[i]);
    }
}

int main() {
    char str[200];
    int choice;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    do {
        printf("\n===== STRING UTILITY TOOLKIT =====\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Check Palindrome\n");
        printf("4. Count Vowels, Digits & Spaces\n");
        printf("5. Character Frequency\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                lengthString(str);
                break;
            case 2:
                reverseString(str);
                break;
            case 3:
                palindrome(str);
                break;
            case 4:
                countCharacters(str);
                break;
            case 5:
                frequency(str);
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}