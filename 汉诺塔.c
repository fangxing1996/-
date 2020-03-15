#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int s = 0;
int main()
{
	int move(char a, char b, char c, int x);
	int n = 0;
	char a = 'A', b = 'B', c = 'C';
	scanf("%d", &n);
	getchar();
	int count = move(a, b, c, n);
	printf("%d", count);
	getchar();
	return 0;
}
int move( char a, char b, char c, int x)
{
	if(x >= 2)
	{
		move(a, c, b, x - 1);
		printf("%c->%c\n", a, c);
		s++;
		move(b, a, c, x - 1);
	}
	else
	{
		printf("%c->%c\n", a, c);
		s++;
	}
	return s;
}
