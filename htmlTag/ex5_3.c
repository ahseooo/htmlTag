#include <stdio.h>
#include "stackL.h"
#include "testPair.h"

int main(void) {
	char* express = "<body> <div> <img src=\"hanbit_Academy.jpg\"/>\n<div> <a href=\"https://www.hanbit.co.kr/academy/\"> 한빛아카데미\n\n\n.";
	printf("%s", express);

	if (testPair(express) == 1)
		printf("\n\n토큰이 맞게 사용되었습니다!");
	else
		printf("\n\n 토큰의 짝이 맞지 않습니다!");

	return 0;
}
