/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief Week 1 coding assesment 
 *
 * Embedded systems introduction. This part is an introduction to C language
 *
 * @author Jeremy Turner
 * @date 24/06/2024
 *
 */



#include <stdio.h>
#include <math.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  printf("Original Data Array:\n");
  print_array(test, SIZE);
  print_statistics(test, SIZE);
  sort_array(test, SIZE);
  printf("Sorted Data Array:\n");
  print_array(test, SIZE);

}

/* Add other Implementation File Code Here */


// Prints statistics
void print_statistics(unsigned char arr[], int n){

  //print min
  printf("Min: %d \n", find_minimum(arr, n));

  //print max
  printf("Max: %d \n", find_maximum(arr, n));

  //print mean
  printf("Mean: %d \n", find_mean(arr, n));

  //print medium
  printf("Medium: %d \n", find_median(arr, n));

}


// Prints array
void print_array(unsigned char arr[], int n){
  // Print the sorted array
    for (int i = 0; i < n-1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


// Function to calculate median
unsigned char find_median(unsigned char arr[], int n) {
    
    // Return the middle value
    if (n % 2 != 0) {
        return arr[n/2];
    } else {
        return (arr[(n-1)/2] + arr[n/2]) / 2; // For even number of elements, take average of two middle numbers
    }
}


// Function to calculate mean
unsigned char find_mean(unsigned char arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (int)round(sum / n);
}

// Function to find maximum value
unsigned char find_maximum(unsigned char arr[], int n) {
    unsigned char max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to find minimum value
unsigned char find_minimum(unsigned char arr[], int n) {
    unsigned char max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}


// Function to perform Bubble Sort
void sort_array(unsigned char arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                unsigned char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
