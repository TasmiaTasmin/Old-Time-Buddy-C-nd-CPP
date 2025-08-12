

#include<stdio.h>

int main(){
    //list<stack<char>> ordered_crafts;
    FILE *fptr;

    // Open a file in read mode
    fptr = fopen("input.txt", "r");

    // Store the content of the file
    char myString[100];

    // Read the content and store it inside myString
    fgets(myString, 100, fptr);

    // Print file content
    printf("%s", myString);

    // Close the file
    fclose(fptr);
    return 0;
}
