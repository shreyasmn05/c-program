//#include <stdio.h>
//
//#define MAX_USERS 3
//
//
//struct user {
//    int id;
//    char name[50];
//    float balance;
//};
//
//int main() {
//    struct user users[MAX_USERS];
//
//
//    for (int i = 0; i < MAX_USERS; i++) {
//        printf("\nEnter details for User %d:\n", i + 1);
//
//        printf("Enter ID: ");
//        scanf("%d", &users[i].id);
//
//        printf("Enter Name: ");
//        scanf(" %[^\n]", users[i].name);
//
//        printf("Enter Balance: ");
//        scanf("%f", &users[i].balance);
//    }
//
//
//    printf("\nStored User Data:\n");
//    for (int i = 0; i < MAX_USERS; i++) {
//        printf("User %d -> ID: %d, Name: %s, Balance: %.2f\n",
//               i + 1, users[i].id, users[i].name, users[i].balance);
//    }
//
//    return 0;
//}
//
