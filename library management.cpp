#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct library {
    char book_name[100];
    char author[100];
    int pages;
    float price;
};

int main() {
    struct library lib[100];
    char ar_nm[100], bk_nm[100];
    int i, input, count ;
    i = input = count = 0;
    
    while (input != 5) {
        printf("\n\n*###### WELCOME TO E-LIBRARY #####*\n");
        printf("\n\n1. Add book information\n2. Display book information\n");
        printf("3. List all books of given author\n");
        printf("4. List the count of books in the library\n");
        printf("5. Exit");
        printf("\n\nEnter one of the above: ");
        scanf("%d", &input);
        
   switch (input) {
            case 1:
                printf("Enter book name = ");
                scanf("%s",lib[count].book_name);

                printf("Enter author name = ");
                scanf("%s", lib[count].author);

                printf("Enter pages = ");
                scanf("%d", &lib[count].pages);

                printf("Enter price = ");
                scanf("%f", &lib[count].price);
                count++;
                break;

            case 2:
                printf("You have entered the following information\n");
                for (i = 0; i < count; i++) {
                    printf("Book name: %s\n", lib[i].book_name);
  printf("\tAuthor name: %s\n", lib[i].author);
                    printf("\tPages: %d\n", lib[i].pages);
                    printf("\tPrice: %.2f\n", lib[i].price);
                }
                break;

            case 3:
                printf("Enter author name : ");
                scanf("%s", ar_nm);
                printf("Books by author %s:\n", ar_nm);
  for (i = 0; i < count; i++) {
                    if (strcmp(lib[i].author, ar_nm) == 0) {
                        printf("Book name: %s\n", lib[i].book_name);
                        printf("\tPages: %d\n", lib[i].pages);
                        printf("\tPrice: %.2f\n", lib[i].price);
                    }
                }
                break;

            case 4:
                printf("\nNo of books in Library: %d\n", count);
                break;

            case 5:
                exit(0);
        }
    }
	return 0;
}
