#include <stdio.h>
#include <string.h>

// Sleep �Լ� ��뿡 �ʿ�
#include <Windows.h>

int main()
{
    char text[80];
    int i;
    int start;
    int end;

    printf("�����ϰ� ���� �ؽ�Ʈ�� �Է��Ͻÿ�: ");
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

        // Ŀ�� ��ġ�� ���� �� ������ �̵�
        putchar('\r');
        
        // 100�и���(0.1��)���� ���
        Sleep(100);
    }

    return 0;
}