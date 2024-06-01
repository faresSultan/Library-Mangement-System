#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <string.h>
#include "std_types.h"
#define MAX_BOOKS 100
#define MAX_NAME_LENGTH 100



void addBook(char names[][MAX_NAME_LENGTH], char authors[][MAX_NAME_LENGTH], int bookIds[], float prices[]);

void deleteBook(char names[][MAX_NAME_LENGTH], char authors[][MAX_NAME_LENGTH], int bookIds[], float prices[]);

void viewBooks(char names[][MAX_NAME_LENGTH], char authors[][MAX_NAME_LENGTH], int bookIds[], float prices[]);




#endif/* the end of STD_TYPES_H*/