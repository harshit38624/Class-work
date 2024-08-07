#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

struct Node {
   int item;
   struct Node* next;
}

typedef struct Node Node;
Node* head = NULL;
int N = 0;

void push(int item) {
     Node* oldHead = head;

     head = (Node *) malloc(sizeof(Node));
     head->item = item;
     head->next = oldHead;
     N++;
}

int pop() {
    if(N == 0) return INT_MIN;
    int item = head->item;
    Node* temp = head;
    head = head->next;
    N--;
    free(temp);
    return item;
}

int size() {
    return N;
}

bool isEmpty() {
     return N == 0;
}

struct test_stack() {

int main() {
}
