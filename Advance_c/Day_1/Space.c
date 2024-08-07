#include <stdio.h>
#include <sys/resource.h>
#include <stdlib.h>


int main() {
	struct rusage usage_start;
	getrusage(RUSAGE_SELF, &usage_start);

	int *array = (int *)malloc(1000000 * sizeof(int));

	struct rusage usage_end;
	getrusage(RUSAGE_SELF , &usage_end);

	long memory_used = usage_end.ru_maxrss - usage_start.ru_maxrss;

	printf("Memory Used: %ld KB\n", memory_used);

	free(array);

	return 0;
}
