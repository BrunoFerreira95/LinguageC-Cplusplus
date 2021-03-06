#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 10

void print_vector(int vector[SIZE]){
    int i;
    for(i = 0; i < SIZE; i++){
        printf("|%d| ", vector[i]);
    }
}
/*
int simple_search(int vector[SIZE], int soughtValue, int *foundPosition){

    int i;
    bool valueWasFound;
    for(i = 0; i <= SIZE; i++){
        if(vector[i] == soughtValue){
            valueWasFound = true;
            *foundPosition = i;
        }
    }

    if(valueWasFound){
        return 1;
    }else{
        return 0;
    }
}
*/
int binary_search(int vector[SIZE], int soughtValue, int *foundPosition){
    int left = 0;
    int right = SIZE - 1;
    int medium;

    while(left <= right){
        medium = (left + right)/2;

        if(soughtValue == vector[medium]){
            *foundPosition = medium;
            return 1;
        }

        if(vector[medium] < soughtValue){
            left = medium + 1;
        }else{
            right = medium - 1;
        }
    }
    return 0;
}
int main(){

    int vector[SIZE] = {1,23,44,56,63,72,84,90,98,100};
    int soughtValue;
    int position, foundPosition;
    int i;

    print_vector(vector);

    printf("\n");

    printf("What number do you find it?");
    scanf("%d", &soughtValue);

    if(binary_search(vector,soughtValue, &foundPosition)){
        printf("The value was found in position: %d\n", foundPosition);
    }else{
        printf("Value not found\n");
    }

    return 0;
}
