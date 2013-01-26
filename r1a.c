/**
 * 1. Napisać rekurencyjną implementację funkcji obliczającej nk (n do potęgi k).
 */
#include <stdio.h>

long pow_rekurencja(long n, int k)
{
	// warunek potegowania
	if (k < 1) return 0;
	// warunek stopu
	if (k == 1) return n;
	return n*pow_rekurencja(n,k-1);
}

int main(void)
{
	char buf[50];
	int n, k;
	long wynik;

	printf("podaj n: ");
	scanf("%d", &n);

	printf("podaj k: ");
	scanf("%d", &k);

	wynik = pow_rekurencja(n,k);
	printf("wynik to: %ld\n", wynik);

	return 0;
}