#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int n;
	int i;
	printf("���������ʼ�齱");
	while(1){
		if(getchar()!='\0'){
			srand((int)time(NULL));
			n=rand()%4;
			for(i=0;i<48+n;i++){
				switch(i%4) {
					case 0:printf("\r***>>>���x888<<<***��ʯx88******���x8888******��ʯx888***");
						break;
					case 1:printf("\r******���x888***>>>��ʯx88<<<***���x8888******��ʯx888***");
						break;
					case 2:printf("\r******���x888******��ʯx88***>>>���x8888<<<***��ʯx888***");
						break;
					case 3:printf("\r******���x888******��ʯx88******���x8888***>>>��ʯx888<<<");
						break;
				}
				Sleep(i*5+20);
			}
			switch(n){
				case 0:printf("\n��ϲ�㣬��鵽����ʯx888��");
					break; 
				case 1:printf("\n��ϲ�㣬��鵽�˽��x888��");
					break; 
				case 2:printf("\n��ϲ�㣬��鵽����ʯx88��");
					break; 
				case 3:printf("\n��ϲ�㣬��鵽�˽��x8888!");
					break; 
			}
		}
	} 
	return 0;
}
