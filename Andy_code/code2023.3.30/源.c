#include<stdio.h>
main()
{
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,f_s,s_s,total;
	printf("Enter the frist 11 dights of a UPC:");
	scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d" ,&d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);
	f_s = d + i2 + i4 + j1 + j3 + j5;
	s_s = i1 + i3 + i5 + j2 + j4;
	total = 3 * f_s + s_s;
	printf("Check dight:%d\n", 9 - (total - 1) % 10);
}