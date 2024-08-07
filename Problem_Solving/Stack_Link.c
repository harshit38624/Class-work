#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <stdlib.h>
#include <limits.h>

struct Node {
    int item;
    struct Node* next;
};

typedef struct Node Node;
Node *head = NULL;
int N = 0;

void push(int item) {
     Node* oldhead = head;

     head = (Node *) malloc(sizeof(Node));
     head->item = item;
     head->next = oldhead;
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

int testStack() {
    push(1);
    push(2);
    push(3);

    assert(isEmpty() == false);
    assert(size() == 3);
    assert(pop() == 3);
    assert(size() == 2);
    assert(pop() == 2);
    assert(size() == 1);
    assert(pop() == 1);
    assert(isEmpty());
}

int main() {
    testStack();
    return 0;
}
