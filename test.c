#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    const int MAX_USER_INPUT = 100;  // Max input size
    char userInput[MAX_USER_INPUT];  // User defined string
    char* stringPos = NULL;          // Index into string
    int i = 0;

    // Prompt user for input
    printf("Enter a line of text: ");
    fgets(userInput, MAX_USER_INPUT, stdin);

    // Locate exclamation point, replace with period
    stringPos = strchr(userInput, '!');
    /*
    while (*stringPos != '\0')
    {
        if (*stringPos == '!')
        {
            *stringPos = '.';
        }
        stringPos++;
    }
    */
    for (int i = 0; i < strlen (stringPos); i++) 
    {
        if (*(stringPos + i) == '!')
        {
            *(stringPos + i) = '.';
        }
    }

    // Locate "Booooooo" replace with "---"
    stringPos = strstr(userInput, "Boo"); //ptr to Boooo
    char *arrstr = NULL;
    arrstr = (char*)malloc(sizeof(char));
    *arrstr = *stringPos;

    //printf("String Pos word: %c\n", *stringPos);
    //printf("Array Pos word: %c\n", *arrstr);
    for (int i = 0; i < strlen (stringPos); i++) 
    {
        if (stringPos[i+1] == 'o')
        {
            arrstr [i+1] = stringPos[i+1];
            stringPos[i] = '-';
            stringPos[i+1] = '-';
        }
    }
    // Output modified string
    printf("Censored: %s\n", userInput);
    return 0;
}