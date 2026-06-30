#include <stdio.h>

int main() {
    char name[50], phone[20], email[50];

    printf("===== Contact Management System =====\n");

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Phone Number: ");
    scanf("%s", phone);

    printf("Enter Email: ");
    scanf("%s", email);

    printf("\n------ Contact Details ------\n");
    printf("Name  : %s\n", name);
    printf("Phone : %s\n", phone);
    printf("Email : %s\n", email);

    return 0;
}