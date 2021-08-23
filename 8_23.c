#include <stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	int r = 0;
	scanf_s("%d%d", &m, &n);
	while (m % n)
	{
		r = m % n;
		m = n;
		n = r;
	}
	printf("maximal mutiple is %d\n", n);
	return 0;
}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int max = 0;
//	scanf_s("%d%d" ,& m, &n);
//	m > n ? (max = n): (max = m);
//	while(max>1)
//	{ 
//		if (m % max == 0 && n % max == 0)
//
//		{
//			printf("%d\n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}