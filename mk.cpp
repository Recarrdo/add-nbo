#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>


int main()
{
	uint32_t ch1;
	uint32_t ch2;
	uint32_t sum = 0;
	
	FILE* fp1;
	FILE* fp2;
	fp1 = fopen("thousand.bin", "rb"); //0x3e8
	fp2 = fopen("five-hundred.bin", "rb"); //0x1f4

	if (fp1 == NULL || fp2 == NULL)
	{
		printf("NO");
		return 0;
	}

	while ((ch1 = fgetc(fp1)) != EOF)
	{
		printf("%02X ", ch1);
	}
	printf("\n");

	while ((ch2 = fgetc(fp2)) != EOF)
	{
		printf("%02X ", ch2);
	}
	printf("\n");

	uint32_t ch_1 = 0x3e8;
	uint32_t ch_2 = 0x1f4;
	sum = ch_1 + ch_2;
	printf("%#x + %#x = \n", ch_1, ch_2);
	printf("hex = %#x dec = %d", sum, sum);


	fclose(fp1);
	fclose(fp2);

	return 0;
}
//파일 불러오는 것만 1주...
//파일을 불러오는 것 까진 성공했지만 그 숫자를 덧셈하는 과정에서 어떻게 해야할지 모르겠습니다. 
//가져오는 걸 숫자가 아닌 문자로 인식하는지 반복문을 통해 덧셈을 구현해봐도 fffffffe만 계속 되어 출력됩니다.
//이번 과제를 통해 진정한 뻘짓이 무엇인지, 뻘짓을 통해 해냈을 떄의 쾌감또한 알 수 있던 좋은 과제였습니다(뻘짓은 좋은것!)

