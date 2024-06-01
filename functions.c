# include "functions.h"


struct Book {
  u8 name[MAX_NAME_LENGTH];
  u8 author[MAX_NAME_LENGTH];
  u32 bookId;
  f32 price;
  struct Book* next;
};

struct Book* head = NULL; // Initialize head to NULL




void addBook() {
  struct Book* newBook = (struct Book*)malloc(sizeof(struct Book)); // Allocate memory for new node

  if (newBook == NULL) {
    printf("Memory allocation failed!\n");
    return;
  }

  printf("Enter the book name: ");
  scanf(" %[^\n]s", newBook->name);

  printf("Enter the author's name: ");
  scanf(" %[^\n]s", newBook->author);

  printf("Enter the book ID: ");
  scanf("%d", &newBook->bookId);

  printf("Enter the book price: ");
  scanf("%f", &newBook->price);

  newBook->next = head; // Make the new node point to the current head
  head = newBook; // Update the head to point to the new node
  printf("Book added successfully!\n");
}


void deleteBook() {
  u32 idToDelete;
  printf("Enter the book ID to delete: ");
  scanf("%d", &idToDelete);

  struct Book* current = head;
  struct Book* previous = NULL;

  while (current != NULL) {
    if (current->bookId == idToDelete) {
      if (previous == NULL) { // Deleting the head node
        head = current->next;
      } else {
        previous->next = current->next;
      }
      free(current); // Free the memory of the deleted node
      printf("Book with ID %d deleted successfully!\n", idToDelete);
      return;
    }
    previous = current;
    current = current->next;
  }

  printf("Book with ID %d not found.\n", idToDelete);
}



void viewBooks() {
  if (head == NULL) {
    printf("No books in the system.\n");
    return;
  }

  printf("\nBooks in the Library:\n");
  struct Book* current = head;
  while (current != NULL) {
    printf("Name: %s\n", current->name);
    printf("Author: %s\n", current->author);
    printf("ID: %d\n", current->bookId);
    printf("Price: $%.2f\n", current->price);
    printf("---------------------------\n");
    current = current->next;
  }
}
