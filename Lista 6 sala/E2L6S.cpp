#include<stdio.h>
int main () {
	int A[7], B[7], C[2][7], a, c = 0;
	for (a = 0; a < 7; a++) {
		printf ("Digite os valores da sua matriz A:\n");
		scanf ("%i", &A[a]);}
	for (a = 0; a < 7; a++) {
		printf ("Digite valores da sua matriz B:\n");
		scanf ("%i", &B[a]);}
	for (a = 0; a < 2; a++) {
		for (int b = 0; b < 7; b++) {
			if (c < 7) {
			C[a][b] = A[b];
			c++;}
			else {
			C[a][b] = B[b];}}}
	printf ("Suas matrizes dentro de uma matriz 2D:\n");
	for (a = 0; a < 2; a++) {
		printf ("\n");
		for (int b = 0; b < 7; b++){
			printf ("%d | ", C[a][b]);}}
	return 0;}
