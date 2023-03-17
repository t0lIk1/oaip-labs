#include <stdio.h>
#include <iostream>
#include <windows.h>


using namespace std;

void menu();
int size_h();
int size_w();
void gotoxy(short int j, short int h);

int main() {




}






void menu() {
	int w, h;
	w = size_w();
	h = size_h();
	char** mass = new char* [w];
	char c[] = "create mission";

	for (int i = 0; i < w; i++) {
		mass[i] = new char[h];
	}


	for (int b = 0; b < h; b++)
		for (int i = 0; i < w; i++)
			mass[i][b] = ' ';

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
			cout << mass[i][b];

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


void gotoxy(short int j, short int h)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD curspos = { j , h };
	SetConsoleCursorPosition(hStdOut, curspos);
}

