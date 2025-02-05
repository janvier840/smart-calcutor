/******************************************************************************

                              Online C++ Compiler.
#include <stdio.h>  // Include necessary header file

int main() {    
    int a, b, c, large;  // Declare variables

    printf("Enter three numbers: ");  // Prompt the user for input
    scanf("%d %d %d", &a, &b, &c);  // Corrected format specifier and removed commas

    // Logic to find the largest number
    if (a > b) {  
        if (a > c)  
            large = a;  // a is the largest
        else  
            large = c;  // c is the largest
    } else {  
        if (b > c)  
            large = b;  // b is the largest
        else  
            large = c;  // c is the largest
    }  

    printf("Largest number: %d\n", large);  // Print the largest number

    return 0;  // Return 0 to indicate successful execution
}
#include<stdio.h>
#include<conio.h>
vo