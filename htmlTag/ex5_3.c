#include <stdio.h>
#include "stackL.h"
#include "testPair.h"

int main(void) {
	char* express = "<body> <div> <img src=\"hanbit_Academy.jpg\"/>\n<div> <a href=\"https://www.hanbit.co.kr/academy/\"> �Ѻ���ī����\n\n\n.";
	printf("%s", express);

	if (testPair(express) == 1)
		printf("\n\n��ū�� �°� ���Ǿ����ϴ�!");
	else
		printf("\n\n ��ū�� ¦�� ���� �ʽ��ϴ�!");

	return 0;
}
