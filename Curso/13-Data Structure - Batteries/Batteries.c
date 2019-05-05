#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 10


int stack_size(int top){
    return top + 1;
}

bool empty_stack(int top){
    if(top == -1){
        return true;
    }else{
        return false;
    }
}

bool full_stack(int top){
    if(top == SIZE -1){
        return true;
    }else{
        return false;
    }
}

void print_vector(int vector[SIZE], int *top){
    int i;
    for(i = 0; i < SIZE; i++){
        printf("|%d| ", vector[i]);
    }
    printf("\n");
    printf("batteries size: %d\n", stack_size(*top));
}

void batteries_push(int batteries[SIZE], int *top, int value){
    if(full_stack(*top)){
        printf("Batteries full\n");
    }else{
        *top += 1;
        batteries[*top] = value;
    }

}

void batteries_pop(int batteries[SIZE], int *top){
    if(empty_stack(*top)){
        printf("The battery is empty\n");
    }else{
        printf("Value retired : %d\n", batteries[*top]);
        batteries[*top] = 0;
        *top += -1;

    }

}

int stack_get(int batteries[SIZE], int *top){
    if(empty_stack(*top)){
        printf("The stack is empty\n");
        return 0;
    }else{
        return batteries[*top];
    }
}
void stack_builder(int *batteries,int *top){
    *top = -1;

    int i;
    for(i = 0; i < SIZE; i++){
        batteries[i] = 0;
    }
}

int main(){

    int batteries[SIZE];
    int top;

    stack_builder(batteries, &top);

    print_vector(batteries, &top);

    batteries_push(batteries, &top, 5);

    print_vector(batteries,&top);

    printf("The last value of batteries: %d\n", stack_get(batteries, &top));

    batteries_push(batteries, &top, 10);

    batteries_push(batteries, &top, 5);
    batteries_push(batteries, &top, 5);
    batteries_push(batteries, &top, 5);
    batteries_push(batteries, &top, 5);
    batteries_push(batteries, &top, 5);
    batteries_push(batteries, &top, 5);
    batteries_push(batteries, &top, 5);
    batteries_push(batteries, &top, 5);

    print_vector(batteries,&top);

    batteries_pop(batteries, &top);

    print_vector(batteries,&top);
    return 0;
}
