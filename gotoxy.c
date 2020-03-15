#include <stdio.h>
#include <windows.h>
void gotoxy(int x, int y)
{
	COORD pos = {y,x};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
int main()
{
	gotoxy(0, 1);
	printf("China");
	gotoxy(1, 5);
	printf("Chinese");
	return 0;
 } 
