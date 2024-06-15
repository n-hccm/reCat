//
// Created by nghoc on 15/06/2024.
//

#include "recat.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int reCat(char* fileName) {
    /* A recreated cat command, it reads the contents of a file and prints it to the console.
     * @param fileName: the name of the file to be read
     * @return: 0 if the file is read successfully, it will exit with code 1 if the file does not exist
     */

    // Open the file in read mode
    FILE *file = fopen(fileName, "r");

    // Check if the file exists
    if (file == NULL) {
        printf("File does not exist\n");
        exit(1);
    }

    // Create a pointer to store each character of the file
    char *buffer = (char*) malloc(sizeof(char));

    // Check if memory allocation was successful
    if (buffer == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    // Read the file character by character
    while ((*buffer = fgetc(file)) != EOF) {
        // Print the character to the console
        printf("%c", *buffer);
    }

    // Free the allocated memory
    free(buffer);

    // Close the file
    fclose(file);

    // Return 0 to indicate success
    return 0;
}