#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int arr_fill[6][6];
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			arr_fill[i][j] = 1;
			printf (" % d ", arr_fill[i][j]);
		}
	}
}
