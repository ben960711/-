/*	�� �ڿ��� a, b, c �� ��Ÿ��� ���� a2 + b2 = c2 �� �����ϸ� ��Ÿ��� ����� �θ��ϴ�(���⼭ a < b < c).
	���� ��� 32 + 42 = 9 + 16 = 25 = 52�̹Ƿ� 3, 4, 5�� ��Ÿ��� ���Դϴ�.
	a + b + c = 1000 �� ��Ÿ��� �� a, b, c�� �� ���� ���Դϴ�.�� ��, a �� b �� c �� ���Դϱ� ? */

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
	printf("����:%d ���:%d %d %d �ҿ�ð�:%f\n", d, a, b, c, (double)(end-start)/CLOCKS_PER_SEC);
}