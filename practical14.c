//a. palindrome
#include <stdio.h>
#include <string.h>

int Palindrome(char str[]) {
    int length = strlen(str);
    
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0; 
        }
    }
    
    return 1; 
}

void main() 
{
    char inputString[100];
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    int i = 0;
    while (inputString[i] != '\n' && inputString[i] != '\0') {
        i++;
    }
    inputString[i] = '\0';
    if (Palindrome(inputString)) 
    {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }


}

//b.String length calculation
#include <stdio.h>
#include <string.h>

void main() 
{
    char string[100];
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);
    int i = 0;
    while (string[i] != '\n' && string[i] != '\0') {
        i++;
    }
    string[i] = '\0';

    printf("Length of the string: %lu\n", strlen(string));

    
}

//c. String concatenation
#include <stdio.h>
#include <string.h>

void main() 
{
    char str1[100], str2[100];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    int i = 0;
    while (str1[i] != '\n' && str1[i] != '\0') {
        i++;
    }
    str1[i] = '\0';
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    i = 0;
    while (str2[i] != '\n' && str2[i] != '\0') {
        i++;
    }
    str2[i] = '\0';
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);


}