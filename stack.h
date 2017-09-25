typedef struct StackNode StackNode;
typedef struct Stack Stack;

struct StackNode {
    StackNode *previous;
    char *value;
};

struct Stack {
    StackNode *head;
    int size;
};

Stack* create_stack();
int stk_isEmpty(Stack *s);
