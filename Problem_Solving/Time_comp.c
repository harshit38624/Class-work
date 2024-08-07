#include <stdio.h>
#include <sys/time.h>
#include <time.h>
#include <stdlib.h>

int main() {
    struct timeval start, end;
    
    int N = 1000;

    int *arr = malloc(N * sizeof(int));

    srand(time(0));

    for (int i = 0; i < N; i++) {
	   arr[i] = rand();
    }

    gettimeofday(&start, NULL);

    for (int i = 0; i < N - 1; i++) {
	 int sorted = 1;
	 for (int j = 0; j < N - i - 1; j++) {
	      if(arr[j] > arr[j + 1]) {
		  int temp = arr[j];
		  arr[j] = arr[j + 1];
		  arr[j + 1] = temp;
		  sorted = 0;
	      }
	 }
	 if(sorted == 1) break;
    }

    gettimeofday(&end, NULL);

    double time_taken = (end.tv_sec - start.tv_sec) * 1e6;
    time_taken = (time_taken + (end.tv_usec - start.tv_usec)) * 1e-6;

    printf("Time taken: %f seconds\n", time_taken);

    for (int i = 0; i < N; i++) printf("%d\n",arr[i]);

    return 0;
}    
