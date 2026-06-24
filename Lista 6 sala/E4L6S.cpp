#include<stdio.h>
int main () {
	int A[4], B[4], C[4][2], a, b = 0;
	for (a = 0; a < 4; a++) {
		printf ("Digite os valores da primeira matriz:\n");
		scanf ("%d", &A[a]);}
	for (a = 0; a < 4; a++) {
		printf ("Digite valores da segunda matriz:\n");
		scanf ("%i", &B[a]);}
	for (a = 0; a < 2; a++) {
		b++;
		for (int c = 0; c < 4; c++) {
			if (b == 1) {
				C[c][a] = A[c]*2;}
			else if (b == 2) {
				C[c][a] = B[c] - 5;}}}
	for (a = 0; a < 4; a++) {
		printf ("\n");
		for (b = 0; b < 2; b++) {
			printf ("%i | ", C[a][b]);}}
	return 0;}
