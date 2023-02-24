#include <stdio.h>
#include <iostream>

using namespace std;

int main(void) {
	int m[6][6];
	int num = 1;
	int k = 1;

	for (int j = 0; j < 6; j++) {
		for (int i = 0; i < 6; i++) {
			if (num > 6)num = 1;
			m[j][i] = num++;

		}
		k++;
		num = k;
	}
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			cout << '\t' << m[i][j];
		}
		cout << endl;
	}
}
