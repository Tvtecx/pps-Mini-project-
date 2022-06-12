#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct library {
	char book_name[20];
	char author[20];
	int pages;
	float price;
};

int main() {
	
	struct library lib[100];
	char ar_nm[30], bk_nm[30];

    int i, input, count;
	i = input = count = 0;

	while (input != 5) {

		printf("\n========== DIGITAL LIBRARY CATALOGUE ==========\n");
		printf("\n1. Add a Book\n2. Display Books\n3. Search by Author\n4. Book Count\n5. Exit Program");
        printf("\n\n===============================================");

		
		printf("\n\nEnter choice: ");
		scanf("%d", &input);

		switch (input) {

		case 1:

			printf("\n(p.s Don't Enter Spaces)\n\nEnter Books' Name: ");
			scanf("%s", lib[i].book_name);

			printf("Enter Authors' Name: ");
			scanf("%s", lib[i].author);

			printf("Enter Page Count: ");
			scanf("%d", &lib[i].pages);

			printf("Enter Books' Price: ");
			scanf("%f", &lib[i].price);

            printf("Book Added.\n");
			
            count++;

			break;

		case 2:

			printf("\nExisting Book Information:-\n");

			for (i = 0; i < count; i++) {
				printf("\nBooks' Name: %s", lib[i].book_name);
				printf("\nAuthors' Name: %s", lib[i].author);
				printf("\nPage Count: %d", lib[i].pages);
				printf("\nPrice: %.2f", lib[i].price);
			}

            printf("\n");

			break;

		case 3:
			
            printf("\nEnter Authors' Name: ");
			scanf("%s", ar_nm);

			for (i = 0; i < count; i++) {
				if (strcmp(ar_nm, lib[i].author) == 0) {
					printf("\nBooks' Name: %s", lib[i].book_name);
                    printf("\nAuthors' Name: %s", lib[i].author);
                    printf("\nPage Count: %d", lib[i].pages);
                    printf("\nPrice: %.2f", lib[i].price);
                } else {
                    printf("Book by %s doesn't Exist in Collection.", ar_nm);
                }
			}

            printf("\n");

			break;

		case 4:
			
            printf("\nLibrary Book Count: %d\n", count);
			
            break;
		
        case 5:
		
            printf("\nGoodbye!\n\n");
        	exit(0);

        default:
        
            printf("\nWrong Input, Try Again!");
		
        };
        
	}

	return 0;
}
