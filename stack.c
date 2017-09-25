#include <stdlib.h>
#include "stack.h"


Stack* create_stack() {
    struct Stack *e = malloc(sizeof(struct Stack));
    e->size = 0;

    return e;
}

int stk_isEmpty(Stack *s) {
    return s->head == 0;
}

void stk_push(Stack *s, char *val) {
    // create a node for the new value
    struct StackNode *n = malloc(sizeof(struct StackNode));

    // put the value in the new node and
    // link the previous node to the new node and change the size of the Stack
    n->value = val;
    n->previous = s->head;

    // Make this new node the head of the stack
    s->head = n;
    s->size++;
}

char* stk_pop(Stack *s) {
    // If the stack is empty, notice the user.
    if (stk_isEmpty(s)) {
        return "STACK IS EMPTY";
    }

    // pop the head of the stack
    struct StackNode *temp = s->head;

    // set the previous node as the new head and decrement the size
    // of the stack
    s->head = temp->previous;
    s->size--;

    // save the value of the popped node and
    // free the memory of the popped node
    char *val = temp->value;
    free(temp);

    return val;
}
