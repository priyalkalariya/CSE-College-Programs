//  WAP to allocate and de-allocate memory for int, char and float variable at runtime. 

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *int_ptr;
    char *char_ptr;
    float *float_ptr;

    
    int_ptr = (int*)malloc(sizeof(int));
    char_ptr = (char*)malloc(sizeof(char));
    float_ptr = (float*)malloc(sizeof(float)); 

    *int_ptr = 10;
    *char_ptr = 'A';
    *float_ptr = 3.14;

    printf("Int value: %d\n", *int_ptr);
    printf("Char value: %c\n", *char_ptr);
    printf("Float value: %.2f\n", *float_ptr);


    free(int_ptr);
    free(char_ptr);
    free(float_ptr);

    return 0;
}