## Library Management System

This document describes a library management system implemented in C with two alternative data structures: arrays and singly-linked lists.

### Features

* Add new books to the library.
* Delete books from the library by ID.
* View a list of all books in the library.

### Functionality (Array Implementation)

The system utilizes four arrays to store book information:

* `names`: Array of characters to store book names (size: `MAX_BOOKS`, length: `MAX_NAME_LENGTH`).
* `authors`: Array of characters to store book authors (size: `MAX_BOOKS`, length: `MAX_NAME_LENGTH`).
* `bookIds`: Array of integers to store unique book IDs (size: `MAX_BOOKS`).
* `prices`: Array of floats to store book prices (size: `MAX_BOOKS`).

Functions are provided to manage the library:

* `addBook`: Prompts the user for book details (name, author, ID, price) and adds them to the next available slot in the arrays. Checks for reaching the maximum book capacity.
* `deleteBook`: Prompts the user for the book ID to delete. Searches the arrays and removes the corresponding entry by shifting elements.
* `viewBooks`: Iterates through the arrays and displays information of all books.

**Limitations (Array Implementation):**

* Fixed size limit for the number of books (MAX_BOOKS).
* Deleting books requires shifting elements in the arrays, which can be inefficient for large datasets.

### Functionality (Linked List Implementation)

This implementation uses a singly-linked list data structure to store book information. Each node in the list holds:

* `name`: Character array for book name.
* `author`: Character array for book author.
* `bookId`: Integer for unique book ID.
* `price`: Float for book price.
* `next`: Pointer to the next node in the list.

A global head pointer points to the first node in the list (or NULL if empty).

Functions are modified to work with the linked list:

* `addBook`: Creates a new node, populates its data, and inserts it at the beginning of the list.
* `deleteBook`: Searches the list for the node with the matching ID and removes it by adjusting pointers.
* `viewBooks`: Traverses the linked list, starting from the head, and displays information of each book.

**Advantages (Linked List Implementation):**

* Dynamic memory allocation: No fixed size limit for the number of books.
* Efficient insertions and deletions: No need to shift elements in the list.

**Trade-offs:**

* Linked lists require more memory overhead compared to arrays due to the pointer in each node.

### Choosing the Right Implementation

The choice between using arrays or a linked list depends on your specific needs. If you have a fixed number of books and performance is critical for large datasets, arrays might be sufficient. However, if you anticipate a growing number of books and frequent insertions/deletions, a linked list offers better scalability and efficiency.

