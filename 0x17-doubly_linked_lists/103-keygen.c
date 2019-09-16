#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int f1(int i)
{
        return ((i ^ 59) & 63);

}

int f2(char *i,int j)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (b < j)
	{
		a = a + i[b];
		b = b + 1;
	}
	return ((a ^ 0x4f) & 0x3f);
}


int f3(char *i,int j)
{
	int a;
	int b;

	a = 1;
	b = 0;
	while (b < j)
	{
		a = i[b] * a;
		b = b + 1;
	}
	return ((a ^ 0x55) & 0x3f);
}

int f4(char *i,int j)
{
	int a;
	int b;

	a = (int)*i;
	b = 0;
        for (; b < j; b++)
	{
		if (a < (int)i[(long)b])
		{
			a = (int)i[(long)b];
		}
	}
	srand(a ^ 0xe);
	return (rand() & 0x3f);
}

int f5(char *i,int j)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (b < j)
	{
		a = a + (int)i[(long)b] * (int)i[(long)b];
		b = b + 1;
	}
	return ((a ^ 0xef) & 0x3f);
}


int f6(char i)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (b < i)
	{
		a = rand();
		b = b + 1;
	}
	return ((a ^ 0xe5) & 0x3f);
}

int main(int argc,char **argv)
{
	int a;
	char *s;
	long int arr[]= {
		0x3877445248432d41,
	        0x42394530534e6c37,
	        0x4d6e706762695432,
	        0x74767a5835737956,
	        0x2b554c59634a474f,
	        0x71786636576a6d34,
	        0x723161513346655a,
		0x6b756f494b646850
	};

	if (argc != 2)
		exit(1);

	s = argv[1];
        a = strlen(s);
	putchar(((char *)arr)[f1(a)]);
	putchar(((char *)arr)[f2(s, a)]);
	putchar(((char *)arr)[f3(s, a)]);
	putchar(((char *)arr)[f4(s, a)]);
	putchar(((char *)arr)[f5(s, a)]);
	putchar(((char *)arr)[f6(*s)]);

	return (0);
}
