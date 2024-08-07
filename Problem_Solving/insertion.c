#include <stdio.h>

int main() {
     
     int arr[] = { 3, 4, 1, 2, 5, 6};

     int n = 6;

     for (int i = 1; i < n; i++){
	   int key = arr[i];
	   int j = i - 1;
	   while(j>=0 && arr[j] > key) {
		arr[j + 1] = arr[j];
		j--;
	   }
	   arr[j + 1] = key;
     }

     for (int i = 0; i < n; i++) printf("%d\n", arr[i]);
}
