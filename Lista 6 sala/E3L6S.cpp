#include<stdio.h>
int main () {
	int A[10], B[10][3], a, c = 0, d = 1;
	for (a = 0; a < 10; a++) {
		printf ("Digite os valores da sua matriz A:\n");
		scanf ("%i", &A[a]);}
	for (a = 0; a < 3; a++) {
		c++;
		for (int b = 0; b < 10; b++) {
			if (c == 1){
				B[b][a] = A[b] + 5;}
			else if (c == 2) {
				for (int x = A[b]; x > 0; x--){
					d *= x;}
				B[b][a] = d;
				d = 1;}
			else if (c == 3) {
				B[b][a] = A[b]*A[b];}}}
	for (a = 0; a < 10; a++) {
		printf ("\n");
		for (int b = 0; b < 3; b++) {
			printf ("%i | ", B[a][b]);}}
	return 0;}
