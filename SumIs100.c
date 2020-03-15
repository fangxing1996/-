#include<stdio.h>
#include<math.h>
int g = 0;
int count = 0;
int compute(char t[], int n){
	int i, sum = 0;
	if(n == 1){
		for(i = 0; i < (count + 1); i++)
			{
				sum += (*(t + n - 1 + i*2) - '0')*pow(10, count - i);
			}
		count = 0;
		return sum;
	}
	else
	{
		if(*(t + n - 2)=='+')
		{
			for(i = 0; i < (count + 1); i++)
			{
				sum += (*(t + n - 1 + i*2) - '0')*pow(10, count - i);
			}
			count = 0;
			sum += compute(t, n - 2);
		}
		else if(*(t + n - 2) == '-')
		{
			for(i = 0; i < (count + 1); i++)
			{
				sum -= (*(t + n - 1 + i*2) - '0')*pow(10, count - i);
			}
			count = 0;
			sum += compute(t, n - 2);
		}
		else
		{
			count++;
			sum += compute(t, n - 2);
		}
		return sum;
	}
}
int gcd(char a[], int m){
	int i, j;
	char *p;
	if(m == 1)
	{
		if(compute(a - 16, 17) == 100)
		{
			p = a - 16;
			for(j = 0; j < 17; j++)
			{
				if(p[j] != '0')
					printf("%c", p[j]);	
			}
			printf("=100\n");
			g++;
		}
		
	}
	else
	{	
		for(i = 0; i < 3; i++)
		{
			if(i == 0)
			{
				*(a + 1) = '+';
			}
			else if(i == 1){
				*(a + 1) = '-';
			}
			else{
				*(a + 1) = '0';
			}
			gcd(a + 2, m - 2);
		}
	}
	return 0;
}
int main(){
	char s[18] = {'\0'};
	int i, x = 1;
	for(i = 0; i < 17; i += 2)
	{
		s[i] = i/2 + 1 + '0';
	}
	gcd(s, 17);
	printf("%d", g);
	getch();
	return 0;
}
