#include <stdio.h>

int sign(int n) {
     return (n >> 31) | (!(!n));
}

int main() {
   printf("%d\n",sign(0));
}

