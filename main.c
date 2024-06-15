//
// Created by nghoc on 15/06/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "recat.h"



int main(int argc, char *argv[]) {
    //Check if the user has entered the file name. It should have two arguments.
    if (argc != 2) {
        printf("Usage: %s <file1>\n", argv[0]);
        return 1;
    }

    // Get file name from the command line argument
    char *fileName = argv[1];

    // Call the reCat function to read and print the contents of the file
    int result = reCat(fileName);

    return 0;
}