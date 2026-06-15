#include <iostream>

#define SIZE 10

int findMax(int numbers[], int size) {
    int max = numbers[0];
    for (int i = 0; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
}

int findMin(int numbers[], int size) {
    int min = numbers[0];
    for (int i = 0; i < size; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    return min;
}

float calculateAverage(int numbers[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    float average = (float) sum / size;
    return average;
}

float calculateMedian(int numbers[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    float median = (float) (numbers[SIZE / 2 - 1] + numbers[SIZE / 2]) / 2;
    return median;
}

void printArray(int numbers[], int size) {
    for (int i = 0; i < size; i++) {
        printf("numbers[%d] = %d \n", i, numbers[i]);
    }
}

void scanArray(int numbers[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Podaj liczbe [%d]: ", i);
        scanf("%d", &numbers[i]);
    }
}


int main() {
    printf("Tablice \n");
    int numbers[SIZE];
    printf("Wprowadz %d liczb do tablicy:\n", SIZE);
    scanArray(numbers, SIZE);
    printf("max = %d \n", findMax(numbers, SIZE));
    printf("min = %d \n", findMin(numbers, SIZE));
    printf("average = %.2f \n", calculateAverage(numbers, SIZE));
    printf("median = %.2f\n", calculateMedian(numbers, SIZE));

    return 0;
}



#include <iostream>

#define SIZE 10

int findMax(int numbers[], int size) {
    int max = numbers[0];
    for (int i = 0; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
}

int findMin(int numbers[], int size) {
    int min = numbers[0];
    for (int i = 0; i < size; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    return min;
}

float calculateAverage(int numbers[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    float average = (float) sum / size;
    return average;
}

float calculateMedian(int numbers[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    float median = (float) (numbers[SIZE / 2 - 1] + numbers[SIZE / 2]) / 2;
    return median;
}

void printArray(int numbers[], int size) {
    for (int i = 0; i < size; i++) {
        printf("numbers[%d] = %d \n", i, numbers[i]);
    }
}

void scanArray(int numbers[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Podaj liczbe [%d]: ", i);
        scanf("%d", &numbers[i]);
    }
}
