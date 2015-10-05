#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char text[80];

    printf("텍스트를 입력하시오: ");
    gets(text);

    if (islower(text[0])) {
        text[0] = toupper(text[0]);
    }

    if (text[strlen(text) - 1] != '.') {
        strcat(text, ".");
    }

    printf("%s\n", text);

    return 0;
}

