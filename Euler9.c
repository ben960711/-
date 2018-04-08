/*	세 자연수 a, b, c 가 피타고라스 정리 a2 + b2 = c2 를 만족하면 피타고라스 수라고 부릅니다(여기서 a < b < c).
	예를 들면 32 + 42 = 9 + 16 = 25 = 52이므로 3, 4, 5는 피타고라스 수입니다.
	a + b + c = 1000 인 피타고라스 수 a, b, c는 한 가지 뿐입니다.이 때, a × b × c 는 얼마입니까 ? */

#include <stdio.h>
#include <time.h>

int main(void)
{
	clock_t start, end;
	start = clock();

	int a = 0;
	int b = 0;
	int c = 0;
	int d =0;
	int mul = 0;
	
		for(c = 3; ; c++)
		{
			for (b = 1; b < c; b++)
			{
				for (a = 1; a < b; a++)
				{
					if ((a*a) + (b*b) == (c*c)&&a+b+c==1000)
					{
						
						break;
					}
				}
				if ((a*a) + (b*b) == (c*c) && a + b + c == 1000)
					break;
			}
			if ((a*a) + (b*b) == (c*c) && a + b + c == 1000)
				break;
		}
		d = a*b*c;

	end = clock();
	printf("정답:%d 요소:%d %d %d 소요시간:%f\n", d, a, b, c, (double)(end-start)/CLOCKS_PER_SEC);
}