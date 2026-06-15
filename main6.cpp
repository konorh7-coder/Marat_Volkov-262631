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

void saveArray(int numbers[],char *file_name){
    FILE *fptr = fopen("saved.txt","w");
    if (fptr == 0){
        printf("Wystapil blad podczas otwierania pliku.\n");
        exit(1);
    }
    for(int i=0;i<SIZE;i++){
        fprintf(fptr,"%d\n",numbers[i]);
    }
    fclose(fptr);
}

void loadArray(int numbers[],char *file_name){
    FILE *fptr = fopen("plik1.txt","r");
    if (fptr == 0){
        printf("Wystapil blad podczas otwierania pliku.\n");
        exit(1);
    }
    for(int i=0;i<SIZE;i++){
        fscanf(fptr,"%d\n",numbers[i]);
    }
    fclose(fptr);
}





int main() {
    printf("Tablice \n");
    int numbers[SIZE];
    char *file_name="plik1.txt";
    printf("Wprowadz %d liczb do tablicy:\n", SIZE);
    scanArray(numbers, SIZE);
    loadArray(numbers,file_name);
    printf("max = %d \n", findMax(numbers, SIZE));
    printf("min = %d \n", findMin(numbers, SIZE));
    printf("average = %.2f \n", calculateAverage(numbers, SIZE));
    printf("median = %.2f\n", calculateMedian(numbers, SIZE));
    saveArray(numbers,file_name);
    return 0;
}
