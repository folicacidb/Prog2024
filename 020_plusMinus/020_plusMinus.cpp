// 020_plusMinus.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int n;

    printf("숫자 입력 :");
    scanf_s("%d", &n);

    if (n > 0) { // 양수인지 확인
        printf("양수\n");
    }

    else if (n == 0) { //양수가 아니라면 0인지 확인
        printf("0\n");
    }
    else { // 양수도 아니고 0도 아니라면 음수다.
        printf("음수\n");
    }
}

