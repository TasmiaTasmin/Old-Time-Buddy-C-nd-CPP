#include<stdio.h>

int main(){
    //list<stack<char>> ordered_crafts;
    FILE *fptr;
    int buffer = 256;

    // Open a file in read mode
    fptr = fopen("input.txt", "r");

    // Store the content of the file
    char myString[buffer];

    // Read the content and store it inside myString
//    while(fgets(myString, 100, fptr)) {
//        // Print file content
//        printf("%s", myString);
//    }
    // Read the content and store it inside myString
    while(fgets(myString, sizeof(buffer), fptr)) {
        printf("%s", myString);
    }
     while ((ch = fgetc(fp)) != EOF)

    // Close the file
    fclose(fptr);
    return 0;
}
