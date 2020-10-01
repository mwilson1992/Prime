// Tests whether a number is prime

#include "stdafx.h"
#include <stdio.h>
#define p printf(
#define s scanf(
#define m printf("\n")

#define true 1
#define false 0
typedef int bool;

bool is_prime(int n)
{
	int divisor;

	if (n <= 1)
		return false;
	for (divisor = 2; divisor * divisor <= n; divisor++)
		if (n % divisor == 0)
			return false;
	return true;
}

int main(void)
{
	int n;

	p"Enter a number: " f;
	s"%d", &n f;
	if (is_prime(n))
		p"Prime" f;
		m;
	else 
		p"Not prime" f;
		m;
	return 0;
}
