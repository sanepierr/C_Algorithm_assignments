#include <stdio.h>

// we begin by defining a global variable to make it accessible to our max_array_element function. The value of this variable will be set to zero(0)
int max_element = 0;

// the prototype at the top just let's the clang compiler know that the function is defined below the main function
int max_array_element(int numbers[]);
int arr_length(int arr[]);
int main(void)
{
    // we start by initializing an array of integers to use for the demonstration
    int numbers[] = {4, 32, 56, 7, 8, 10, 23, 20};
    printf("the maximum element in the array is %i\n", max_array_element(numbers));

}

// finally, we create a function that'll return the maximum element in the array. We'll use a concept of bubble sort; traversing
// two elements at time while comparing the value of our maximum_element global variable to that of the element at that iteration.
// if the value is less we assign the value of the maximum_element to the higher value throughout the array
int max_array_element(int numbers[])
{
    // variable to store the size of Arr
    int length = arr_length(numbers);
    for (int i = 0; i < length; i++)
    {
        if (max_element < numbers[i])
        {
            max_element = numbers[i];
        }
        else
        {
            break;
        }
    }
    return max_element;
}

// the arr_length function is going to be responsible for getting the number of elements in the array. As long as we haven't reached the NULL character since it's the last value to indicate the end so we keep counting the array elements.
int arr_length(int arr[])
{
    int i;
    int count = 0;
    for(i=0; arr[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}