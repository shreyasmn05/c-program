//#include <stdio.h>
//
//
//void transferAmount(float *senderBalance, float *receiverBalance, float amount) {
//    if (amount > *senderBalance) {
//        printf("Insufficient balance! Transfer failed.\n");
//    } else {
//        *senderBalance -= amount;
//        *receiverBalance += amount;
//        printf("Transfer successful!\n");
//    }
//}
//
//int main() {
//    float user1_balance, user2_balance, amount;
//    int sender, receiver;
//
//
//    printf("Enter balance for User 1: ");
//    scanf("%f", &user1_balance);
//    printf("Enter balance for User 2: ");
//    scanf("%f", &user2_balance);
//
//
//    printf("\nWho is sending money? (1 or 2): ");
//    scanf("%d", &sender);
//
//
//    if (sender != 1 && sender != 2) {
//        printf("Invalid sender! Please enter 1 or 2.\n");
//        return 1;
//    }
//
//    receiver = (sender == 1) ? 2 : 1;
//
//
//    printf("Enter amount to transfer: ");
//    scanf("%f", &amount);
//
//
//    if (sender == 1) {
//        transferAmount(&user1_balance, &user2_balance, amount);
//    } else {
//        transferAmount(&user2_balance, &user1_balance, amount);
//    }
//
//
//    printf("\nUpdated Balances:\n");
//    printf("User 1 Balance: %.2f\n", user1_balance);
//    printf("User 2 Balance: %.2f\n", user2_balance);
//
//    return 0;
//}
//
