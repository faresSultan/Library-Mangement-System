# include "functions.h"

	int numBooks =0;
	
void addBook(char names[][MAX_NAME_LENGTH], char authors[][MAX_NAME_LENGTH], int bookIds[], float prices[])
 {
    if (numBooks >= MAX_BOOKS)
    {
        printf("Maximum number of books reached!\n");
		printf("---------------------------\n");
        return;
    }

    printf("\nEnter the book name: ");
    scanf(" %[^\n]s", names[numBooks]);

    printf("Enter the author's name: ");
    scanf(" %[^\n]s", authors[numBooks]);

    printf("Enter the book ID: ");
    scanf("%d", &bookIds[numBooks]);

    printf("Enter the book price: ");
    scanf("%f", &prices[numBooks]);

    numBooks++;
    printf("Book added successfully!\n");
	printf("---------------------------\n");
}

void deleteBook(char names[][MAX_NAME_LENGTH], char authors[][MAX_NAME_LENGTH], int bookIds[], float prices[])
 {
    int idToDelete;
    printf("Enter the book ID to delete: ");
    scanf("%d", &idToDelete);

    int found = 0;
    for (int i = 0; i < numBooks; i++)
     {
        if (bookIds[i] == idToDelete)
            {
            found = 1;
            for (int j = i; j < numBooks - 1; j++)
             {
                strcpy(names[j], names[j + 1]);
                strcpy(authors[j], authors[j + 1]);
                bookIds[j] = bookIds[j + 1];
                prices[j] = prices[j + 1];
            }
            numBooks--;
            printf("Book with ID %d deleted successfully!\n", idToDelete);
			printf("---------------------------\n");
            break;
        }
    }

    if (!found)
        {
        printf("Book with ID %d not found.\n", idToDelete);
		printf("---------------------------\n");
        }

}

void viewBooks(char names[][MAX_NAME_LENGTH], char authors[][MAX_NAME_LENGTH], int bookIds[], float prices[])
 {
    if (numBooks == 0) {
        printf("No books in the system.\n");
        return;
    }

    printf("\nBooks in the Library:\n");
    for (int i = 0; i < numBooks; i++) {
        printf("Name: %s\n", names[i]);
        printf("Author: %s\n", authors[i]);
        printf("ID: %d\n", bookIds[i]);
        printf("Price: $%.2f\n", prices[i]);
        printf("---------------------------\n");
    }
 }