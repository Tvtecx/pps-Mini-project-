#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char book_name[20];
char author[20];
char c;
int pages;
float price;
FILE *book;
int
main ()
{
  int input;



  do
    {

      printf ("\n========== DIGITAL LIBRARY CATALOGUE ==========\n");
      printf ("\n1. Add a Book\n2. Display Books\n3. Exit Program");
      printf ("\n\n===============================================");


      printf ("\n\nEnter choice: ");
      scanf ("%d", &input);

      switch (input)
	{

	case 1:
	  {

	    printf ("\n\n\nEnter Books' Name: ");
	    scanf ("%s", book_name);

	    printf ("Enter Authors' Name: ");
	    scanf ("%s", author);

	    printf ("Enter Page Count: ");
	    scanf ("%d", &pages);

	    printf ("Enter Books' Price: ");
	    scanf ("%f", &price);

	    printf ("Book Added.\n");
	    book = fopen ("book_list.txt", "a");
	    fprintf (book, "%s\t%s\t%d\t%f", book_name, author, pages, price);
	    fclose (book);


	    break;
	  }

	case 2:
	  {

	    book = fopen ("book_list.txt", "r");
	    while (c != EOF)
	      {
		        c = fgetc(book);
		        printf ("%c", c);
	      }
	    fclose (book);

	    break;
	  }

	case 3:

	  break;

	default:

	  printf ("\nWrong Input, Try Again!");
	  break;

	}

    }
  while (input != 3);

  return 0;
}
