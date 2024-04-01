
#include <stdio.h>

int main() {
    int num, sumEven = 0, productOdd = 1, countNegative = 0;

    for (int i = 0; i < 10; i++) {//цикл для запиту 10 чисел
        printf("Enter a number: ");
        scanf("%d", &num);

        if(num % 2 == 0){ // обчислення суми парних елементів
            sumEven += num;
        }
        else {
            productOdd *= num; //обчислення добутку непарних елементів
        }

        if (num < 0) {
            countNegative++; //перевіряє скільки вілємних чисел введенно в консолі
        }
    }

    printf("Sum of even numbers: %d\n", sumEven);// сума парних
    printf("Product of odd numbers: %d\n", productOdd);// добуток непарних
    printf("Count of negative numbers: %d\n", countNegative);// кількість відємних чисел

    return 0;
}

