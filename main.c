# include "functions.h"


int main()
{
	u8 choice ;
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
			addBook();
			break;
			
			case 2:
			deleteBook();
			break;
			
			case 3:
			viewBooks();
			break;
			
			case 4:
			return 0;
			
			default:
			printf("Enter a Valid choice!\n\n");
			
			
		}
		
	}
	
	
	
	
	return 0;
}