// The prime factors of 13195 are 5, 7, 13 and 29.
//
// What is the largest prime factor of the number 600851475143?

#include <stdio.h>
#include <math.h>

int LargestPrimeFactor(long long int n)
{
    while (n % 2 == 0)
	{
		n = (n / 2);
	}
    
    int i = 3;
    for (i; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            n = (n / i);
        }
    }

    if (n > 2){
    	return n;
	}
}

int main(int argc, char *argv[]){
	
	long long int value = 600851475143;

	int output = LargestPrimeFactor(value);
	
	printf("Largest prime factor of 600851475143: %lld\n", output);
	
	return 0;
}
