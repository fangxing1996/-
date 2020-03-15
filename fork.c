#include<unistd.h>
#include<stdio.h>
int main(){
	pid_t pc;
	pc = fork();
	if(pc < 0){
		printf("fork error");
		exit(1);
	}
	else if(pc == 0){
		printf("child");
	}
	else if(pc > 0){
		printf("father");
	}
	return 0;
}
