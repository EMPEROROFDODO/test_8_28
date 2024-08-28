#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void Swap(int* pa,int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//
//void Swap(int a, int b)
//{
//	int z = 0;
//	z = a;
//	a = b;
//	b = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//求100-200素数
//#include<math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf(" \ncount=%d", count);
//	return 0;
//}

//打印1000-2000之间的闰年
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	return 0;
//}
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//return 0;
//}


//用二分法
int binary_search(int arr[], int s, int m)
{
	int left = 0;
	int right = m - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < s)
		{
			left = mid + 1;
		}
		else if (arr[mid] > s)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
		if (left > right)
		{
			return -1;
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int s = 7;
	int m = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, s, m);
	if (ret == -1)
	{
		printf("查无此数\n");
	}
	else
		printf("该数的下标是[%d]\n",ret);
	return 0;
}
