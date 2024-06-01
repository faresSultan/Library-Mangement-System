# include "functions.h"
#define MAX_BOOKS 100
#define MAX_NAME_LENGTH 100




int main()
{
	char choice ;
	char password[] = "123";
	char names[MAX_BOOKS][MAX_NAME_LENGTH];
	char authors[MAX_BOOKS][MAX_NAME_LENGTH];
	int bookIds[MAX_BOOKS];
	float prices[MAX_BOOKS];
	
	printf("----------------------------------------------------- Welcome to your library -----------------------------------------------------\n\n\n");
	while (1)
	{
		printf("Choose (1) to add a book\n");
		printf("Choose (2) to deleta a book\n");
		printf("Choose (3) to veiw books in the system\n");
		printf("Choose (4) to close the program\n");
		printf("Your choice is: ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
			addBook( names, authors, bookIds, prices);
			break;
			
			case 2:
			deleteBook(names,authors, bookIds,prices);
			break;
			
			case 3:
			viewBooks(names, authors, bookIds,prices);
			break;
			
			case 4:
			return 0;
			
			default:
			printf("Enter a Valid choice!\n\n");
			
			
		}
		
	}
	
	
	
	
	return 0;
}