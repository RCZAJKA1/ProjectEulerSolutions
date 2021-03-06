// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//
// Find the sum of all the multiples of 3 or 5 below 1000.

#include <stdio.h>

int main(int argc, char *argv[]){
	
	int runningSum = 0;	
	int i = 1;
	
	for (i; i < 1000; i++){ // O(n) time complexity
		
		if (i % 3 == 0){
			runningSum += i;
			//printf("%d\n");
		}
		
		else if (i % 5 == 0){
			runningSum += i;
			//printf("%d\n");
		}
		
		else{
			continue;
		}
	}
	
	printf("Sum of all multiples of 3 or 5 below 1000 : %d\n", runningSum);
	
	return 0;
}
