#include <stdio.h>
#include "stack.h"


void showcase_stack() {
    struct Stack *usernames = create_stack();
    printf("Stack size: %d\n", usernames->size);
    printf("Stack is empty ?: %d\n", stk_isEmpty(usernames));


    stk_push(usernames, "ZergoV");
    stk_push(usernames, "Bobby");
    stk_push(usernames, "Cloud Sw0rd");
    printf("Stack size: %d\n", usernames->size);
    printf("Stack is empty ?: %d\n", stk_isEmpty(usernames));

    printf("popping from the stack: %s\n", stk_pop(usernames));
    printf("popping from the stack: %s\n", stk_pop(usernames));
    printf("popping from the stack: %s\n", stk_pop(usernames));
    printf("popping from the stack: %s\n", stk_pop(usernames));
    printf("Stack size: %d\n", usernames->size);
    printf("Stack is empty ?: %d\n", stk_isEmpty(usernames));
}

int main() {
    showcase_stack();
}
