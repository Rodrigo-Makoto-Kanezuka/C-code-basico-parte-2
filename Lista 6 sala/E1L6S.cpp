#include<stdio.h>
int main () {
	int A[5][3], B[5][3], C[5][3], x, y;
	for (x = 0; x < 5; x++) {
		for (y = 0; y < 3; y++) {
			printf ("Digite valores da primeira matriz A:\n");
			scanf ("%i", &A[x][y]);}}
	for (x = 0; x < 5; x++) {
		for (y = 0; y < 3; y++) {
			printf ("Digite valores da primeira matriz B:\n");
			scanf ("%i", &B[x][y]);}}
	for (x = 0; x < 5; x++) {
		for (y = 0; y < 3; y++) {
			C[x][y] = A[x][y] + B[x][y];}}
	printf ("A soma da suas 2 matrizes em forma 2D :\n");
	for (x = 0; x < 5; x++) {
		printf ("\n");
		for (y = 0; y < 3; y++){
			printf ("%16d|", C[x][y]);}}
	return 0;}
