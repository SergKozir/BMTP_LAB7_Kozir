
#include <stdio.h>

int main() {
    printf ("\n\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
 printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",179,130,168,170,174,173,160,162,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,179);
 printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",195,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,180);
 printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",179,138,174,167,168,224,236,255,145,165,224,163,105,169,255,255,255,255,255,255,255,255,255,179);//i 105
 printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",179,130,225,105,255,175,224,160,162,160,255,167,160,229,168,233,165,173,105,33,33,33,255,179);
 printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);

    int num, sumEven = 0, productOdd = 1, countNegative = 0;

    for (int i = 0; i < 10; i++) {//���� ��� ������ 10 �����
        printf("Enter a number: ");
        scanf("%d", &num);

        if(num % 2 == 0){ // ���������� ���� ������ ��������
            sumEven += num;
        }
        else {
            productOdd *= num; //���������� ������� �������� ��������
        }

        if (num < 0) {
            countNegative++; //�������� ������ ������ ����� �������� � ������
        }
    }

    printf("Sum of even numbers: %d\n", sumEven);// ���� ������
    printf("Product of odd numbers: %d\n", productOdd);// ������� ��������
    printf("Count of negative numbers: %d\n", countNegative);// ������� ������ �����

    return 0;
}

