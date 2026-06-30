#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item item[100];
    int n, i;

    printf("Enter number of items: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nItem %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &item[i].id);

        printf("Enter Name: ");
        scanf("%s", item[i].name);

        printf("Enter Quantity: ");
        scanf("%d", &item[i].quantity);

        printf("Enter Price: ");
        scanf("%f", &item[i].price);
    }

    printf("\n========== INVENTORY ==========\n");
    printf("ID\tName\tQty\tPrice\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%d\t%.2f\n",
               item[i].id,
               item[i].name,
               item[i].quantity,
               item[i].price);
    }

    return 0;
}