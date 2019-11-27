#include <stdio.h>
void tobinary(int num)
{
    int i = sizeof(int) *8 -1;
    for (; i >= 0; i--)
    {
        if ((num >> i) & 1)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}
void leftShift(int num, int shift)
{
    int right, left;
    left = (num << shift);
    right = (num >> (sizeof(int) *8 - shift));
    printf("After left shift: %d\n", (right + left));
    tobinary(right + left);
}
void rightShift(int num, int shift)
{
    int right, left;
    right = (num >> shift);
    left = (num << (sizeof(int) *8 - shift));
    printf("After right shift: %d\n", (right + left));
    tobinary(right + left);
}
int main() {
    int num, shift;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("How many shifts do you want?\n ");
    scanf("%d", &shift);
    leftShift(num, shift);
    rightShift(num, shift);
    return 0;
}
