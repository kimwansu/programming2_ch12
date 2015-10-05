#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define POSITIVE 1
#define NEGATIVE 0

int get_response(const char* prompt);

int main()
{
    char prompt[80];
    int isPositive;

    printf("게임을 하시겠습니까? ");
    scanf("%s", prompt);
    isPositive = get_response(prompt);
    if (isPositive) {
        printf("긍정적인 답변\n");
    }
    else {
        printf("부정적인 답변\n");
    }

    return 0;
}

int get_response(const char* prompt)
{
    int i;
    char prompt2[80];

    strcpy(prompt2, prompt);
    for (i = 0; i < strlen(prompt2); i++) {
        if (!islower(prompt2[i]))
            prompt2[i] = tolower(prompt2[i]);
    }
    
    if (strcmp(prompt2, "yes") == 0) {
        return POSITIVE;
    }
    else if (strcmp(prompt2, "ok") == 0) {
        return POSITIVE;
    }
    else {
        return NEGATIVE;
    }
}
