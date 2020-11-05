#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void binary(char a[])
{
	int b[128], i = 0, * p, c = 0;
	printf("Binary Number : ");
	while (a[i] != '\0')
	{
		if (a[i] == 'A' || a[i] == 'a')
		{
			b[i] = 10;
		}
		else if (a[i] == 'B' || a[i] == 'b')
		{
			b[i] = 11;
		}
		else if (a[i] == 'C' || a[i] == 'c')
		{
			b[i] = 12;
		}
		else if (a[i] == 'D' || a[i] == 'd')
		{
			b[i] = 13;
		}
		else if (a[i] == 'E' || a[i] == 'e')
		{
			b[i] = 14;
		}
		else if (a[i] == 'F' || a[i] == 'f')
		{
			b[i] = 15;
		}
		else
		{
			b[i] = a[i] - 48;
		}
		i++;
	}
	i--;
	p = b;
	for (i; i >= 0; i--)
	{
		c += (*p * pow(16, i));
		switch (*p)
		{
		case 0:
			printf("0000 ");
			break;
		case 1:
			printf("0001 ");
			break;
		case 2:
			printf("0010 ");
			break;
		case 3:
			printf("0011 ");
			break;
		case 4:
			printf("0100 ");
			break;
		case 5:
			printf("0101 ");
			break;
		case 6:
			printf("0110 ");
			break;
		case 7:
			printf("0111 ");
			break;
		case 8:
			printf("1000 ");
			break;
		case 9:
			printf("1001 ");
			break;
		case 10:
			printf("1010 ");
			break;
		case 11:
			printf("1011 ");
			break;
		case 12:
			printf("1100 ");
			break;
		case 13:
			printf("1101 ");
			break;
		case 14:
			printf("1110 ");
			break;
		case 15:
			printf("1111 ");
			break;
		}
		p++;
	}
}
int main()
{
	char a[128], i = 0;
	printf("Enter Hexadecimal Number : ");
	scanf("%s", a);
	while (a[i] != '\0')
	{
		if ((a[i] > 70 && a[i] < 97) || a[i] > 102)
		{
			printf("you enter wrong hexadecimal number ");
			return 0;
		}
		i++;
	}
	binary(a);
	return 0;
}