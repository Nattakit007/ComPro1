#include <stdio.h>
#include <string.h>

#define SIZE 10

// โครงสร้างข้อมูลนักเรียน
struct Student {
    char id[10];
    char name[50];
    int score;
};

int main() {
    struct Student students[SIZE]; // อาร์เรย์ของโครงสร้าง
    int i, maxScore = -1, count = 0;

    printf(" *** Structure Array 2 ***\n");
    printf("Enter data : ");

    // รับข้อมูลนักเรียน 10 คน
    for (i = 0; i < SIZE; i++) {
        scanf("%s %s %d", students[i].id, students[i].name, &students[i].score);
    }

    // ค้นหาคะแนนสูงสุด
    for (i = 0; i < SIZE; i++) {
        if (students[i].score > maxScore) {
            maxScore = students[i].score;
        }
    }

    // นับจำนวนคนที่ได้คะแนนสูงสุด
    for (i = 0; i < SIZE; i++) {
        if (students[i].score == maxScore) {
            count++;
        }
    }

    // แสดงผลลัพธ์
    printf("\n\n *** Analyzing Data ***\n");
    printf("Max marking   = %d points, %d students.\n", maxScore, count);

    // แสดงรายชื่อของนักเรียนที่ได้คะแนนสูงสุด
    int index = 1;
    for (i = 0; i < SIZE; i++) {
        if (students[i].score == maxScore) {
            printf("%d. %s %s %d\n", index, students[i].id, students[i].name, students[i].score);
            index++;
        }
    }

    return 0;
}
