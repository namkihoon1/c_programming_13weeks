
// 함수 포인터 배열
#include <stdio.h>

// 함수 원형 정의
void menu(void);
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

int main(void)
{
	int choice, result, x, y;
	// 함수 포인터 배열을 선언하고 초기화한다.
	int (*pf[4])(int, int) = { add, sub, mul, div };

	while (1)
	{
		menu();
		printf("메뉴를 선택하시오:");
		scanf_s("%d", &choice);

		if (choice < 0 || choice >= 4)
			break;
		printf("2개의 정수를 입력하시오:");
		scanf_s("%d %d", &x, &y);

		result = pf[choice](x, y);	// 함수 포인터를 이용한 함수 호출
		printf("연산 결과 = %d\n", result);
	}
	return 0;
}

void menu(void)
{
	printf("=====================\n");
	printf("0. 덧셈\n");
	printf("1. 뺄셈\n");
	printf("2. 곱셈\n");
	printf("3. 나눗셈\n");
	printf("4. 종료\n");
	printf("=====================\n");
}


int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	return x / y;
}
