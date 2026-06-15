#include <iostream>
#define SIZE 10

int main() {
    printf("Tablice \n");
    int numbers[SIZE];
    printf("Wprowadz %d liczb do tablicy:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Podaj liczbe [%d]: ", i);
        scanf("%d", numbers + i);
    }
    for (int i = 0; i < SIZE; i++) {
        printf("numbers[%d] = %d \n",i,*(numbers + i));
    }

    int max = *numbers;
    for (int i = 0; i < SIZE; i++) {
        if (*(numbers + i) > max) {
            max = *(numbers + i);
        }
    }
    printf("max = %d \n",max);

    int min = *numbers;
    for (int i = 0; i < SIZE; i++) {
        if (*(numbers + i) < min) {
            min = *(numbers + i);
        }
    }
    printf("min = %d \n",min);

    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += *(numbers + i);
    }
    float average = (float)sum / SIZE;
    printf("average = %.2f \n", average);


    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (*(numbers + j) > *(numbers + j + 1)) {
                int temp = *(numbers + j);
                *(numbers + j) = *(numbers + j+1);
                *(numbers + j+1) = temp;
            }
        }
    }
    float median = (float)(numbers[SIZE / 2 - 1] + numbers[SIZE / 2]) / 2;
    printf("median = %.2f\n", median);


    return 0;
}













//#include <iostream>
//#define SIZE 10
//
//int main() {
//    int number1 = 1;
//    int *ptr1 = &number1;
//    int number2 = 1;
//    int *ptr2 = &number2;
//    while (*ptr1 != 0 || *ptr2 != 0) {
//        printf("Podaj pierwsza liczbe:  \n");
//        scanf_s("%d", ptr1);
//        printf("Podaj druga liczbe:  \n");
//        scanf_s("%d", ptr2);
//        if (*ptr1 == 0 || *ptr2 == 0) {
//            break;
//        }
//        else if (*ptr1 != 0 && *ptr2 != 0) {
//            printf("%d+%d = %d \n",*ptr1,*ptr2,*ptr1 + *ptr2);
//            printf("%d-%d = %d \n",*ptr1,*ptr2,*ptr1 - *ptr2);
//            printf("%d*%d = %d \n",*ptr1,*ptr2,*ptr1 * *ptr2);
//            printf("%d/%d = %d \n",*ptr1,*ptr2,*ptr1 / *ptr2);
//            printf("%d modulo %d = %d \n",*ptr1,*ptr2,*ptr1 % *ptr2);
//        }
//    }
//
//
//    return 0;
//}
//
//
//
//
//
//
//
//
//
