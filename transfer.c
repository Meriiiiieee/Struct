#include <stdio.h>

typedef struct{
    float balance;
    int ownerId;
} Account;

void percent20(Account *Mery, Account *Milena) {
    float amount = Mery ->balance * 0.2;
    Mery -> balance = Mery -> balance - amount;
    Milena -> balance = Milena -> balance + amount;
}

int main() {
    Account Mery;
    Account Milena;
    
    printf("Enter the id for  Mery: ");
    scanf("%d", &Mery.ownerId);
    printf("Enter the balance for Mery: ");
    scanf("%f", &Mery.balance);
    
    printf("Enter the id for Milena: ");
    scanf("%d", &Milena.ownerId);
    printf("Enter the balance for Milena: ");
    scanf("%f", &Milena.balance);
    
    printf("Befor transfer: Mery Id = %d  Mery balance = %f\n", Mery.ownerId, Mery.balance);
    printf("Befor transfer: Milena Id = %d  Milena balance = %f\n ", Milena.ownerId, Milena.balance);
    
    percent20(&Mery, &Milena);
    
    printf("after transfer: Mery Id = %d  Mery balance = %f\n", Mery.ownerId, Mery.balance);
    printf("After transfer: Milena Id = %d  Milena balance = %f\n", Milena.ownerId, Milena.balance);
    
    return 0;
    
}
