// This program calculates approximates the value of mathematical constant e.
// Author: Bazillah Zargar
#include <stdio.h>

// Input: 'n' an integer value
// Effect: Calculates the factorial of the integer n
// Output: Returns the factorial of the integer n
long long factorial(int n){
    long long result = 1;
    for(int i = 1; i <= n; i++){
        result = result * i;
    }
    return result;
}

// Input: 'euler' the number ε selected by the user
// Effect: Approximates the value of the mathematical constant e
// Output: Prints the infinite series up to the value ε entered by the user.
//          Prints the sum of the infinite series up to the value ε entered by the user.
void approximateEuler(double euler){
    double sum, next;
    int count;
    count = 1;
    sum = 1;
    next = 1;
    
    while (next >= euler){
        sum = sum + next;
        count++;
        next = (double) 1/factorial(count);
    }

    printf("e = 1");
    for (int i = 1; i < count; i++){
        printf(" + 1/%d!", i);
    }
    printf("\n");
    printf("e = %.20lf\n", sum);
}

// Main method
// Effect: Prompts user to enter an value for ε
// Output: Prints the infinite series up to the value ε entered by the user.
//          Prints the sum of the infinite series up to the value ε entered by the user.
int main(void){
    double euler, sum;

    printf("Enter a value for ε: ");
    scanf(" %lf", &euler);
    
    approximateEuler(euler);
    
    return 0;
}
