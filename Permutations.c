#include<stdio.h> 
int count = 0;
int print(int str[], int n){
	// int m=0,b,i,j,flag=1;
	// for(i=0;i<n&&flag;i++){
	// 	for(j=i+1;j<n&&flag;j++){
	// 		if(str[i]>str[j]){
	// 			if(m==0)
	// 			{
	// 				b=str[j];
	// 				m++;
	// 			}
	// 			else
	// 			{
	// 				if(str[j]>b)
	// 				{
	// 					flag=0;
	// 					break;
	// 				}
	// 				else
	// 					b=str[j];
	// 			}
	// 		}
	// 	}
	// 	m=0;
	// }
	// if(flag)
	// {
	// 	printf("%d ",count++);
	// 	for(i=0;i<n;i++)
	// 	{
	// 		printf(" %d",str[i]);
	// 	}
	// 	printf("\n");
	// }
	int i;
	for(i = 0; i < n; i++){
		printf("%d ", str[i]);
	}
	putchar('\n');
	count++;
	return 0;	
}
int perm(int str[], int k, int n){
	
	int i;
	int temp;
	if(k == (n - 1)){
		print(str, n);
	}
	else{
		for(i = k; i < n; i++){
			temp = str[i];
			str[i] = str[k];
			str[k] = temp;
			perm(str, k + 1, n);
			temp = str[i];
			str[i] = str[k];
			str[k] = temp;
		}
	}
	return 0;
}
int main(){
	int n, i;
	int str[100];
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		str[i] = 1 + i;
	}
	perm(str, 0, n);
	printf("%d", count);
	getchar();
	getchar();
	return 0;
}

