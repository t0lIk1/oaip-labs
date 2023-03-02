#include <stdio.h>
#include <iostream>

using namespace std;

/*нахождение максимального элемента среди строки*/

int main(void) {
	int m[6][6];
	int num = 1;
	int k = 1;
	int min_line = 120;
	int n;
	cout << "enter a column from 1 to 6: ";
	cin >> n;
	n--;
	for (int j = 0; j < 6; j++) {
		for (int i = 0; i < 6; i++) {
			m[j][i] = rand() % 100;
		}
		k++;
		num = k;
	}
	for (int j = 0; j < 6; j++) {
		if (min_line > m[j][n]) {
			min_line = m[j][n];
		}
	}
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			cout << '\t' << m[i][j];
		}
		cout << endl;
	}
	cout << "min = " << min_line;
}
