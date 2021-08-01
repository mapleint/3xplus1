#include <stdio.h>


inline unsigned long long n3p1 (unsigned long long  x)
{
	return x = x & 1 ? 3*x+1 : x >> 1;
}

int main ()
{
	for (
	unsigned long long i = 1;
	i != 0; /* overflow */
	i++) {
		unsigned long long j = i;
		while(j != 1) {
			j = n3p1(j);
		}
	}
	
}
