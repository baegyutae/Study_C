#include <stdio.h>

// 선언
void p(int num);

void function_without_return();
int function_with_return();
void function_without_params();

int main(void)
{
	//// functionnn
	//// 계산기

	//int num = 2;
	////printf("num은 %d입니다.\n", num); // 2
	//p(num);

	//// 2 + 3은?
	//num = num + 3; // num += 3;
	////printf("num은 %d입니다.\n", num); // 5
	//p(num);

	//// 5 - 1은?
	//num -= 1; // num = num -1;
	////printf("num은 %d입니다.\n", num); // 4
	//p(num);

	//// 4 x 3은?
	//num *= 3;
	////printf("num은 %d입니다.\n", num); // 12
	//p(num);

	//// 12 / 6은?
	//num /= 6;
	////printf("num은 %d입니다.\n", num); // 2
	//p(num);

	// 함수 종류
	// 반환값이 없는 함수
	/*function_without_return();*/

	// 반환값이 있는 함수
	/*int ret = function_with_return();
	p(ret);*/

	// 파라미터(전달값)가 없는 함수
	function_without_params();

	return 0;
}

// 정의
void p(int num)
{
	printf("num은 %d입니다.\n", num);
}

// 전달값 : 36
// 함수 : ㅁ + 4
// 반환형 : ?
//void 함수이름(int num1, int num2, char c, float f)
//{
//
//}

void function_without_return()
{
	printf("반환값이 없는 함수입니다.\n");
}

int function_with_return()
{
	printf("반환값이 있는 함수입니다.\n");
	return 10;
}

void function_without_params()
{
	printf("전달값이 없는 함수입니다.\n");
}