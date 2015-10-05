#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0

int is_palindrome(const char* text);

int main()
{
    char text[80];

    printf("문자열을 입력하시오: ");
    gets(text);

    if (is_palindrome(text)) {
        printf("회문입니다.\n");
    }
    else {
        printf("회문이 아닙니다.\n");
    }

    return 0;
}

int is_palindrome(const char* text)
{
    int i;
    int last;
    char text2[80];

    strcpy(text2, text);
    last = strlen(text2) - 1;
    for (i = 0; i <= last; i++) {
        text2[i] = tolower(text2[i]);
    }

    for (i = 0; i < last / 2; i++) {
        if (text2[i] != text2[last - i]) {
            return FALSE;
        }
    }

    return TRUE;
}