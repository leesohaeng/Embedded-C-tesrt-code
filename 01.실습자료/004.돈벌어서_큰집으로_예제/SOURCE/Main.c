/*===== << 이 부분은 실습을 위하여 수정 금지 >> =====*/
#include "my_lib.h"
#define 	printf		Uart_Printf
#define 	main		User_Main
void User_Main(void);
void Main(void)
{
	Uart_Init(115200);	
	printf("\n=================================\n");
	main();
	printf("=================================\n");
}

/*===== << 여기부터 사용자 프로그램을 작성함 >> =====*/

/***********************************************************/
// [1] : 다음의 결과를 예측하라
// warning이 발생한다면 이유를 말하시오
/***********************************************************/

/*
void main(void)
{
	unsigned char c = 0x80;

	printf("%u\n",c);
	printf("%d\n",c);
}
*/

/***********************************************************/
// [2] : 다음의 결과를 예측하라
// warning이 발생한다면 이유를 말하시오
/***********************************************************/

/*
void main(void)
{
	signed char c = 0x80;

	printf("%u\n",c);
	printf("%d\n",c);
}
*/

/***********************************************************/
// [3] : 다음의 결과를 예측하라
// warning이 발생한다면 이유를 말하시오
/***********************************************************/

/*
void main(void)
{
	unsigned char c = 0xff;

	if(c == 0xff)
		printf("%x\n",c+1);
	else
		printf("%x\n",c-1);
}
*/

/***********************************************************/
// [4] : 다음의 결과를 예측하라
// warning이 발생한다면 이유를 말하시오
/***********************************************************/

/*
void main(void)
{
	signed char c = 0xff;

	if(c == 0xff)
		printf("%x\n",c+1);
	else
		printf("%x\n",c-1);
}
*/

/***********************************************************/
// [5] : 다음의 결과를 예측하라
// warning이 발생한다면 이유를 말하시오
/***********************************************************/

/*
int add(int a, int b)
{
	return a+b;
}

void main(void)
{
	int a = -1;
	unsigned int b = 0xffffffff;
	printf("%d\n", add(a, b));
}
*/

/***********************************************************/
// [6] : 다음의 결과를 예측하라
// warning이 발생한다면 이유를 말하시오
/***********************************************************/

/*
void main(void)
{
	int a[4] = {1,2,3,4};

	if(-1 < sizeof(a)) 
		printf("%d\n", a[sizeof(char)]);
	else
		printf("%d\n", a[sizeof(short)]);
}
*/

/***********************************************************/
// [7] : 다음의 결과를 예측하라
// warning이 발생한다면 이유를 말하시오
// 컴파일러에 따라서는 에러날 수도 있음
/***********************************************************/

/*
void main(void)
{
	char i = 255;
	char *p = &i;

	if(p > -1) (*p)++;
	else	   (*p)--;

	printf("%X\n", *p);
}
*/

/***********************************************************/
// [8] : conversion 연습 1
// 다음의 결과를 예측하라
// 다음 프로그램을 단 하나의 경고도 없도록 casting하라
/***********************************************************/

//*

void main(void)
{
	double d;
	float f;
	int i;
	short int s;
 /*
	s = i = f = d = 100/3; 
	printf("%d\t %d\t %g\t %g\t\n",s, i, f, d);

	d = f = i = s = 100/3;
	printf("%d\t %d\t %g\t %g\t\n",s, i, f, d);*/

	s = (short int)(i = (int)(f = (float)(d = 100/3.)));
	printf("%d\t %d\t %g\t %.20f\t\n",s, i, f, d);
/*
	d = f = i = s = 100/3.;
	printf("%d\t %d\t %g\t %g\t\n",s, i, f, d);*/
}
//*/

/***********************************************************/
// [9] : conversion 연습 2
// 다음의 결과를 예측하라
// 다음 프로그램을 단 하나의 경고도 없도록 casting하라
/***********************************************************/

/* 
void main(void)
{
	double d = 3.2;
	double x;
	int i = 2;
	int y;

	x = (y = d/i) * 2;
	printf("x = %g  y = %d\n",x,y);
	y = (x = d/i) * 2;
	printf("x = %g  y = %d\n",x,y);
	y = d * (x = 2.5 / d);
	printf("y = %d\n",y);
	x = d * (y = ((int)2.9 + 1.1)/d);
	printf("x = %g  y = %d\n",x,y);
}
*/

/***********************************************************/
// [10-QUIZ] : 반올림 반버림
// 실수를 입력받아 가장 가까운 정수를 리턴하는 함수를 설계하라
// 단 하나의 경고도 없어야 하며 효율적으로 작성하시오
/***********************************************************/

/* 
int convert_int(double a);

void main(void)
{
	printf("%f => %d\n", 3.14, convert_int(3.14));
	printf("%f => %d\n", 15.72, convert_int(15.72));
	printf("%f => %d\n", -3.14, convert_int(-3.14));
	printf("%f => %d\n", -15.72, convert_int(-15.72));
}

int convert_int(double a)
{


}
*/

/***********************************************************/
// [11] : 실수의 비교 
// 다음의 실행결과는? 
// 원하는 결과가 나오도록 수정하시오
/***********************************************************/

/*
void main(void)
{
	float  pi = 3.14;

	if(pi == 3.14)
		printf("TRUE\n");
	else 
		printf("FLASE\n");
}
*/