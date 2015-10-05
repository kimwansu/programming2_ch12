#include <stdio.h>
#include <string.h>

// Sleep 함수 사용에 필요
#include <Windows.h>

int main()
{
    char text[80];
    int i;
    int start;
    int end;

    printf("광고하고 싶은 텍스트를 입력하시오: ");
    gets(text);
    start = 0;
    end = strlen(text);

    while (1) {
        for (i = start; i < end; i++) {
            putchar(text[i]);
        }
        
        putchar(' ');

        for (i = 0; i < start; i++) {
            putchar(text[i]);
        }

        start++;
        if (start == end) {
            start = 0;
        }

        // 커서 위치를 줄의 맨 앞으로 이동
        putchar('\r');
        
        // 100밀리초(0.1초)동안 대기
        Sleep(100);
    }

    return 0;
}