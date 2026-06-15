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





//#include <stdio.h>
//#include <stdlib.h>
//FILE * fptr;
//int main()
//{
//    char letter;
//    int i;
//    fptr = fopen("letters.txt", "w+");
//    if (fptr == 0)
//    {
//        printf("Wystapil blad podczas otwieraniapliku.\n");
//        exit(1);
//    }
//    for (letter = 'A'; letter <= 'Z'; letter++)
//    {
//        fputc(letter, fptr);
//    }
//    puts("Zapisano litery od A do Z.");
//    fseek(fptr, -1, SEEK_END);
//    printf("Oto zawartosc pliku wydrukowana wstecz:\n");
//    for (i = 26; i > 0; i--)
//    {
//        letter = fgetc(fptr);
//        fseek(fptr, -2, SEEK_CUR);
//        printf("%c", letter);
//    }
//    printf("\n");
//    fclose(fptr);
//    return(0);
//}

//#include <stdio.h>
//#include <stdlib.h>
//FILE * fptr;
//int main()
//{
//    char fileLine[100];
//    fptr = fopen("plik.txt", "r");
//    if (fptr != 0)
//    {
//        while (!feof(fptr))
//        {
//            fgets(fileLine, 100, fptr);
//            if (!feof(fptr))
//            {
//                puts(fileLine);
//            }
//        }
//    }
//    else
//    {
//        printf("\nBlad otwierania pliku!\n");
//    }
//    fclose(fptr);
//    return(0);
//}

//#include <stdio.h>
//#include <stdlib.h>
//FILE * fptr;
//int main()
//{
//    fptr = fopen("plik.txt", "a");
//    if (fptr == 0)
//    {
//        printf("Blad otwierania pliku!\n");
//        exit(1);
//    }
//    fprintf(fptr, "\nNapis dodawany na koncu pliku.\n");
//    fclose(fptr);
//    return(0);
//}







//
//#include <iostream>
//
//#define SIZE 10
//
//int findMax(int numbers[], int size) {
//    int max = numbers[0];
//    for (int i = 0; i < size; i++) {
//        if (numbers[i] > max) {
//            max = numbers[i];
//        }
//    }
//    return max;
//}
//
//int findMin(int numbers[], int size) {
//    int min = numbers[0];
//    for (int i = 0; i < size; i++) {
//        if (numbers[i] < min) {
//            min = numbers[i];
//        }
//    }
//    return min;
//}
//
//float calculateAverage(int numbers[], int size) {
//    int sum = 0;
//    for (int i = 0; i < size; i++) {
//        sum += numbers[i];
//    }
//    float average = (float) sum / size;
//    return average;
//}
//
//float calculateMedian(int numbers[], int size) {
//    for (int i = 0; i < size - 1; i++) {
//        for (int j = 0; j < size - i - 1; j++) {
//            if (numbers[j] > numbers[j + 1]) {
//                int temp = numbers[j];
//                numbers[j] = numbers[j + 1];
//                numbers[j + 1] = temp;
//            }
//        }
//    }
//    float median = (float) (numbers[SIZE / 2 - 1] + numbers[SIZE / 2]) / 2;
//    return median;
//}
//
//void printArray(int numbers[], int size) {
//    for (int i = 0; i < size; i++) {
//        printf("numbers[%d] = %d \n", i, numbers[i]);
//    }
//}
//
//void scanArray(int numbers[], int size) {
//    for (int i = 0; i < size; i++) {
//        printf("Podaj liczbe [%d]: ", i);
//        scanf("%d", &numbers[i]);
//    }
//}
//
//void saveArray(int numbers[],char *file_name){
//    FILE *fptr = fopen("saved.txt","w");
//    if (fptr == 0){
//        printf("Wystapil blad podczas otwierania pliku.\n");
//        exit(1);
//    }
//    for(int i=0;i<SIZE;i++){
//        fprintf(fptr,"%d\n",numbers[i]);
//    }
//    fclose(fptr);
//}
//
//void loadArray(int numbers[],char *file_name){
//    FILE *fptr = fopen("saved.txt","r");
//    if (fptr == 0){
//        printf("Wystapil blad podczas otwierania pliku.\n");
//        exit(1);
//    }
//    for(int i=0;i<SIZE;i++){
//
//        fscanf(fptr,"%d\n",&numbers[i]);
//    }
//    fclose(fptr);
//}
//
//int main() {
//    printf("Tablice \n");
//    int numbers[SIZE];
//    char *file_name="saved.txt";
//    int option;
//    do {
//        printf("\nMENU:\n");
//        printf("1. Wprowadz dane do tablicy \n");
//        printf("2. Wyswietl tablice \n");
//        printf("3. Oblicz wartosc maksymalna \n");
//        printf("4. Oblicz wartosc minimalna \n");
//        printf("5. Oblicz wartosc srednia\n");
//        printf("6. Oblicz mediane  \n");
//        printf("7. Zapisz tablice  \n");
//        printf("8. Wczytaj tablice  \n");
//        printf("0. Wyjdz z programu \n");
//        printf("Wybor: ");
//        scanf_s("%d", &option);
//
//        switch (option){
//
//            case 1: {
//                printf("Wprowadz %d liczb do tablicy:\n", SIZE);
//                scanArray(numbers, SIZE);
//                break;
//            }
//            case 2: {
//                printArray(numbers, SIZE);
//                break;
//            }
//            case 3: {
//                printf("max = %d \n", findMax(numbers, SIZE));
//                break;
//            }
//
//
//            case 4:{
//                printf("min = %d \n", findMin(numbers, SIZE));
//                break;
//            }
//
//
//            case 5: {
//                printf("average = %.2f \n", calculateAverage(numbers, SIZE));
//                break;
//            }
//
//            case 6:{
//                printf("median = %.2f\n", calculateMedian(numbers, SIZE));
//                break;
//            }
//
//            case 7:{
//                saveArray(numbers,file_name);
//                break;
//            }
//
//            case 8:{
//                loadArray(numbers,file_name);
//                break;
//            }
//
//            case 0: {
//                option = 0;
//                break;
//            }
//
//            default: {
//                printf("Zla opcja. Prosze wybrac prawidlowa opcje \n");
//            }
//
//        }
//    }  while (option!=0);
//
//    return 0;
//}











//
//
//#include <iostream>
//
//#define SIZE 10
//
//int findMax(int numbers[], int size) {
//    int max = numbers[0];
//    for (int i = 0; i < size; i++) {
//        if (numbers[i] > max) {
//            max = numbers[i];
//        }
//    }
//    return max;
//}
//
//int findMin(int numbers[], int size) {
//    int min = numbers[0];
//    for (int i = 0; i < size; i++) {
//        if (numbers[i] < min) {
//            min = numbers[i];
//        }
//    }
//    return min;
//}
//
//float calculateAverage(int numbers[], int size) {
//    int sum = 0;
//    for (int i = 0; i < size; i++) {
//        sum += numbers[i];
//    }
//    float average = (float) sum / size;
//    return average;
//}
//
//float calculateMedian(int numbers[], int size) {
//    for (int i = 0; i < size - 1; i++) {
//        for (int j = 0; j < size - i - 1; j++) {
//            if (numbers[j] > numbers[j + 1]) {
//                int temp = numbers[j];
//                numbers[j] = numbers[j + 1];
//                numbers[j + 1] = temp;
//            }
//        }
//    }
//    float median = (float) (numbers[SIZE / 2 - 1] + numbers[SIZE / 2]) / 2;
//    return median;
//}
//
//void printArray(int numbers[], int size) {
//    for (int i = 0; i < size; i++) {
//        printf("numbers[%d] = %d \n", i, numbers[i]);
//    }
//}
//
//void scanArray(int numbers[], int size) {
//    for (int i = 0; i < size; i++) {
//        printf("Podaj liczbe [%d]: ", i);
//        scanf("%d", &numbers[i]);
//    }
//}
//
//void saveArray(int numbers[],char *file_name){
//    FILE *fptr = fopen("saved.txt","a");
//    if (fptr == 0){
//        printf("Wystapil blad podczas otwierania pliku.\n");
//        exit(1);
//    }
//    for(int i=0;i<SIZE;i++){
//        fprintf(fptr,"%d ",numbers[i]);
//    }
//    fprintf(fptr,"\n");
//    fclose(fptr);
//}
//
//void loadArray(int numbers[],char *file_name, int version){
//    FILE *fptr = fopen("saved.txt","r");
//    if (fptr == 0){
//        printf("Wystapil blad podczas otwierania pliku.\n");
//        exit(1);
//    }
//    int skip =(version-1)*SIZE;
//
//    for(int i=skip;i<SIZE;i++){
//
//        fscanf(fptr,"%d\n",&numbers[i]);
//    }
//    fclose(fptr);
//}
//
//int main() {
//    printf("Tablice \n");
//    int numbers[SIZE];
//    char *file_name="saved.txt";
//    int option;
//    do {
//        printf("\nMENU:\n");
//        printf("1. Wprowadz dane do tablicy \n");
//        printf("2. Wyswietl tablice \n");
//        printf("3. Oblicz wartosc maksymalna \n");
//        printf("4. Oblicz wartosc minimalna \n");
//        printf("5. Oblicz wartosc srednia\n");
//        printf("6. Oblicz mediane  \n");
//        printf("7. Zapisz tablice  \n");
//        printf("8. Wczytaj tablice  \n");
//        printf("0. Wyjdz z programu \n");
//        printf("Wybor: ");
//        scanf_s("%d", &option);
//
//        switch (option){
//
//            case 1: {
//                printf("Wprowadz %d liczb do tablicy:\n", SIZE);
//                scanArray(numbers, SIZE);
//                break;
//            }
//            case 2: {
//                printArray(numbers, SIZE);
//                break;
//            }
//            case 3: {
//                printf("max = %d \n", findMax(numbers, SIZE));
//                break;
//            }
//
//
//            case 4:{
//                printf("min = %d \n", findMin(numbers, SIZE));
//                break;
//            }
//
//
//            case 5: {
//                printf("average = %.2f \n", calculateAverage(numbers, SIZE));
//                break;
//            }
//
//            case 6:{
//                printf("median = %.2f\n", calculateMedian(numbers, SIZE));
//                break;
//            }
//
//            case 7:{
//                saveArray(numbers,file_name);
//                break;
//            }
//
//            case 8:{
//                int version =0;
//                printf("Wprowadz numer wersji ktora chcialbys wczytac \n");
//                scanf("%d", &version);
//                loadArray(numbers,file_name,version);
//                break;
//            }
//
//            case 0: {
//                option = 0;
//                break;
//            }
//
//            default: {
//                printf("Zla opcja. Prosze wybrac prawidlowa opcje \n");
//            }
//
//        }
//    }  while (option!=0);
//
//    return 0;
//}