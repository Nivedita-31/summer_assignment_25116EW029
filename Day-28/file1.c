#include <stdio.h>

int main() {
    int bookId;
    char bookName[50], author[50];
    int choice;

    printf("===== Library Management System =====\n");
    printf("1. Add Book\n");
    printf("2. Display Book\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &bookId);

            printf("Enter Book Name: ");
            scanf("%s", bookName);

            printf("Enter Author Name: ");
            scanf("%s", author);

            printf("\nBook Added Successfully!\n");
            break;

        case 2:
            printf("\nBook ID: %d", bookId);
            printf("\nBook Name: %s", bookName);
            printf("\nAuthor: %s", author);
            break;

        default:
            printf("Invalid Choice!");
    }

    return 0;
}