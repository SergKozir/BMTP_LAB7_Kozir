
#include <stdio.h>

int main() {
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

