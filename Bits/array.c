#include <stdio.h>

int main() {
	int arr[5] = {1, 2, 3, 4, 5};
	int *ptr = &arr;
	printf("%d\n",arr[0]);
	printf("%d\n",arr[5]);
	printf("%d\n",*(ptr));
	printf("%d\n",*(ptr+1));
	printf("%d\n",*(ptr+5));
}
