// 019_even0dd.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int x;

    printf("숫자를 입력 : ");
    scanf_s("%d", &x);

    if (x % 2 == 0) { //2로 나눈 나머지가 0이면 짝수
        printf("n은 짝수입니다.\n");
    }
    if (x % 2 == 1) { //2로 나눈 나머지가 1이면 홀수
        printf("n은 홀수입니다.\n");

     if (x % 2 == 0) 
        printf("n은 짝수입니다.\n");
     else
         printf("n은 홀수입니다.\n")

    }

}

