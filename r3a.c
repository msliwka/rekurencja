/**
 * 3. Napisać funkcję rekurencyjną odwracającą kolejność liter w napisie podanym na wejściu.
 */
#include <stdio.h>
#include <string.h>

void swap (char* a, char* b)
{
  char c; c=*a; *a=*b; *b=c;
}

void rewers(char* str, int l, int r)
{
	// warunek stopu
	if (r <= l) return;
	swap(str+l, str+r);
	rewers(str, l+1, r-1);
}

int main(void)
{
	char buf[50];
	int n, k;
	long wynik;

	printf("podaj lancuch: ");
	scanf("%s", buf);

	rewers(buf, 0, strlen(buf)-1);
	printf("Odwrocony lanuch: \"%s\"\n", buf);

	return 0;
}