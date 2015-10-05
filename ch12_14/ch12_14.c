#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int main()
{
    char text[80];
    char find[10];
    char replace[10];
    char text2[80] = "";
    char* tok = NULL;

    int skip_first = TRUE;

    printf("문자열을 입력하시오: ");
    gets(text);

    printf("찾을 문자열: ");
    gets(find);

    printf("바꿀 문자열 : ");
    gets(replace);

    tok = strtok(text, " ");
    while (tok != NULL) {
        // 단어 사이의 빈 칸을 처음에만 빼고 넣기
        if (skip_first) {
            skip_first = FALSE;
        }
        else {
            strcat(text2, " ");
        }

        if (strcmp(tok, find) == 0) {
            strcat(text2, replace);
        }
        else {
            strcat(text2, tok);
        }

        tok = strtok(NULL, " ");
    }

    printf("결과: %s\n", text2);
    return 0;
}