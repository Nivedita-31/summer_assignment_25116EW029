#include <stdio.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
};

int main()
{
    struct Book b[100];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &b[i].id);

        printf("Enter Title: ");
        scanf("%s", b[i].title);

        printf("Enter Author: ");
        scanf("%s", b[i].author);
    }

    printf("\n----- Library Books -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nBook ID : %d", b[i].id);
        printf("\nTitle   : %s", b[i].title);
        printf("\nAuthor  : %s\n", b[i].author);
    }

    return 0;
}