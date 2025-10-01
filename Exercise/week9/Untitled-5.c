#include <stdio.h>
#include <string.h>

void add_word(char *text, const char *word);

int main()
{
    char text[50] = "I";
    char verb[20];
    printf("Enter verb : ");
    scanf("%s", verb);
    add_word(text, verb);
    add_word(text, "You");
    printf("Your text  : %s", text);
    return 0;
}

void add_word(char *text, const char *word) {
    strcat(text, " ");
    strcat(text, word);
}
