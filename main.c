#include <stdio.h>
#include "stack.h"


int main() {
    struct Stack *s = create_stack();
    printf("Stack size: %d\n", s->size);
    printf("Stack is empty ?: %d\n", stk_isEmpty(s));
}
