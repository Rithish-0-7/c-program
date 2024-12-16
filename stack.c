#include <stdio.h>
#define N 100

struct stack {
    int arr[N];
    int top;
};

void instack(struct stack *s) {
    s->top = -1;
}

int full(struct stack *s) {
    return s->top == N - 1;
}

int empt(struct stack *s) {
    return s->top == -1;
}

void push(struct stack *s, int value) {
    if (full(s)) {
        printf("Stack is full\n");
        return;
    }
    s->arr[++s->top] = value;
}

void display(struct stack *s) {
    if (empt(s)) {
        printf("Stack is empty\n");
        return;
    }
    for (int i = s->top; i >= 0; i--) {
       
        printf("%d ,", s->arr[i]);
        
    }
}

int main() {
    struct stack s;
    instack(&s);
    int n, value;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        push(&s, value);
    }
     printf("[");
    display(&s);
    printf("]");
    return 0;
}
