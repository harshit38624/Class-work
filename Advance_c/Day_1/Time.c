#include <stdio.h>
#include <time.h>

int main() {
	clock_t start_time , end_time;//clock_t datatype is long int
	double cpu_time_used;

	start_time = clock();

	//int sum = 0;
	//for (int i = 0; i <= 1000000; i++) {
	//	sum += i;
	//}
	
	long long int sum = 0;
	sum = 1000000LL * (1000000LL + 1) / 2;

	end_time = clock();

	cpu_time_used = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;

	printf("Sum: %lld\n", sum);
	printf("CPU Time Used: %f seconds\n",cpu_time_used);

	return 0;
}
