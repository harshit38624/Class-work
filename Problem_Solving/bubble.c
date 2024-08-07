#include <stdio.h>
int main() {

    int arr[] = {3,4,1,2,3,5,6,5};
    // ans = 1,2,3,3,4,5,5,6
    int n = 8;

    for (int i = 0; i < 7; i++) {
	   int sorted = 1;
	   for (int j = 0; j < 8 - i - 1; j++) {
		if(arr[j] > arr[j + 1]) {
		   int temp = arr[j];
		   arr[j] = arr[j + 1];
		   arr[j + 1] = temp;
		   sorted = 0;
		}
	   }
	   if(sorted == 1) break;
    }

    for (int i = 0; i < 8; i++) {
	    printf("%d\n",arr[i]);
    }
}


	
