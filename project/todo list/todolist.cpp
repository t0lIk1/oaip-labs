#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
short int x = 1, y = 1;
COORD curspos = { x,y };
int w, h;



using namespace std;

void menu();
int size_h();
int size_w();
void gotoxy(short int j, short int h);
void showCursor(bool visible);
void control(int w, int h);
void menu2();

int main() {





	menu();
	gotoxy(1, 1);
	printf("1.create mission");
	gotoxy(1, 2);
	printf("2.show mission");
	gotoxy(1, 3);
	printf("3.exit");
	do {
		w = size_w();
		h = size_h();
		gotoxy(1, 1);
		system("pause>nul");
		while (5)control(w, h);
	} while (1);


}






void menu() {
	int w, h;
	w = size_w();
	h = size_h();
	char** mass = (char**)malloc(w * sizeof(char*));


	for (int i = 0; i < w; i++) {
		mass[i] = (char*)malloc(h * sizeof(char));

	}


	for (int b = 0; b < h; b++) {
		for (int i = 0; i < w; i++) {
			mass[i][b] = ' ';

		}
	}

	for (int i = 0; i < w; i++) {
		mass[i][0] = '-';
		mass[i][h - 1] = '-';
	}

	for (int i = 0; i < h; i++) {
		mass[18][i] = '|';

	}


	for (int i = 0; i < h; i++) {
		mass[0][i] = '|';
		mass[w - 1][i] = '|';


	}


	for (int b = 0; b < h; b++)
		for (int i = 0; i < w; i++)
			printf("%c", mass[i][b]);


}

int size_h()
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	int h;
	if (hStdOut = GetStdHandle(-12))
	{
		CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
		if (GetConsoleScreenBufferInfo(hStdOut, &consoleInfo))
		{
			h = consoleInfo.srWindow.Bottom - consoleInfo.srWindow.Top + 1;
		}
	}
	return h;
}

//------------------------------------------------------------------------------------------------



int size_w()
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	int w;
	if (hStdOut = GetStdHandle(-12))
	{
		CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
		if (GetConsoleScreenBufferInfo(hStdOut, &consoleInfo))
		{
			w = consoleInfo.srWindow.Right - consoleInfo.srWindow.Left + 1;
		}
	}
	return w;
}



void gotoxy(short int j, short int h) {
	curspos = { j , h };
	SetConsoleCursorPosition(hStdOut, curspos);
}



void showCursor(bool visible)
{
	CONSOLE_CURSOR_INFO ccInfo;
	ccInfo.bVisible = visible;
	ccInfo.dwSize = 20;
	SetConsoleCursorInfo(hStdOut, &ccInfo);
}

void control(int w, int h)
{
	int p = 0;
	char g = _getch();


	switch (g)
	{
	case 72:
		if (y > 1)
		{
			y--;
			gotoxy(x, y);



		}
		break;
	case 80:
		if (y < (h - 27))
		{
			y++;
			gotoxy(x, y);



		}
		break;
	case 77:
		if (x > 1)
		{
			x++;
			gotoxy(x, y);
		}
		/*else if (x == w * 0.3) {
			x += (w * 0.3 * 2);
			gotoxy(x, y);
		}*/
		break;
	case 75:
		if (x < 1)
		{
			x--;
			gotoxy(x, y);
		}
		break;
	case 13:
		if (y == 2)
		{


		}
		if (y == 1)
		{
			system("cls");
			menu2();
		}
		break;
	}
}


void menu2() {
	int w, h;
	w = size_w();
	h = size_h();
	char** mass = (char**)malloc(w * sizeof(char*));


	for (int i = 0; i < w; i++) {
		mass[i] = (char*)malloc(h * sizeof(char));

	}


	for (int b = 0; b < h; b++) {
		for (int i = 0; i < w; i++) {
			mass[i][b] = ' ';

		}
	}

	for (int i = 0; i < w; i++) {
		mass[i][0] = '-';
		mass[i][h - 1] = '-';
		mass[i][3] = '-';
	}

	for (int i = 0; i < h; i++) {
		mass[15][i] = '|';
	}


	for (int i = 0; i < h; i++) {
		mass[0][i] = '|';
		mass[w - 1][i] = '|';


	}


	for (int b = 0; b < h; b++)
		for (int i = 0; i < w; i++)
			printf("%c", mass[i][b]);


}
