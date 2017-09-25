#include <stdlib.h>
#include "stack.h"


Stack* create_stack() {
    struct Stack *e = malloc(sizeof(struct Stack));
    e->size = 0;

    return e;
}


int stk_isEmpty(Stack *s) {
    return s->head ? 1 : 0;
}
