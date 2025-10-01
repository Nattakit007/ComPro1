#include <stdio.h>

// ฟังก์ชันลบเงิน โดยใช้ pointer (pass by reference)
void remove_money_from_wallet(int *wallet, int amount) {
    *wallet -= amount;  // ลบเงินจากค่าที่ pointer ชี้อยู่
}

int main()
{
    int wallet = 20, amount;
    printf("Enter money : ");
    scanf("%d", &amount);

    // เรียกฟังก์ชันพร้อมส่ง address ของ wallet
    remove_money_from_wallet(&wallet, amount);

    // แสดงผล
    printf("My wallet -> %d", wallet);

    return 0;
}

