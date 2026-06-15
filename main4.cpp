#include <iostream>

void toLower(char *text){
    while(*text){
        if(*text>='A'&& *text<='Z'){
            *text -=('A'-'a');
        }
        text++;
    }
}

void toUpper(char *text){
    while(*text){
        if(*text>='a'&&*text<='z'){
            *text -=('a'-'A');
        }
        text++;
    }
}

int textSize(char *text){
    int size = 0;
    while(*text){
        size++;
        text++;

    }
    return size;
}

int main(){
    char text[] = "Ala ma kota.";
    printf("%s \n",text);
    toLower(text);
    printf("%s \n",text);
    toUpper(text);
    printf("%s \n",text);
    printf("%d \n",textSize(text));


    return 0;
}


//#include <iostream>
//
//void toLower(char *text){
//    while(*text){
//        if(*text>='A'&& *text<='Z'){
//            *text -=('A'-'a');
//        }
//        text++;
//    }
//}
//
//void toUpper(char *text){
//    while(*text){
//        if(*text>='a'&&*text<='z'){
//            *text -=('a'-'A');
//        }
//        text++;
//    }
//}
//
//int textSize(char *text){
//    int size = 0;
//    while(*text){
//        size++;
//        text++;
//
//    }
//    return size;
//}
//
//void removeNewLine(char *text) {
//    for(int i =0;i<80;i++) {
//        if (text[i] == '\n') {
//            text[i] = '\0';
//        }
//    }
//    text++;
//}
//
//int main(){
//    char text[80];
//
//    while(true){
//        printf("Enter new text: \n");
//        fgets(text, 80, stdin);
//        removeNewLine(text);
//
//        if(text[0]== '\0') break;
//
//        printf("%s \n", text);
//        toLower(text);
//        printf("%s \n", text);
//        toUpper(text);
//        printf("%s \n", text);
//        printf("%d \n",textSize(text));
//
//
//    }
//
//    return 0;
//}
//

















//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include <string.h>
//
//void shuffle(char *array, int n) {
//    if (n > 1) {
//        for (int i = n - 1; i > 0; i--) {
//            int j = rand() % (i + 1);
//            char temp = array[i];
//            array[i] = array[j];
//            array[j] = temp;
//        }
//    }
//}
//
//int main(){
//
//    int upper = 0;
//    int lower = 0;
//    int numbers = 0;
//    int special = 0;
//    char password[80]="";
//    srand(time(NULL));
//    printf("How many upper letters? \n");
//    scanf("%d \n",&upper);
//    printf("How many lower letters? \n");
//    scanf("%d \n",&lower);
//    printf("How many numbers? \n");
//    scanf("%d \n",&numbers);
//    printf("How many special signs? \n");
//    scanf("%d \n",&special);
//    int index = 0;
//    const char special_chars[] = "!@#$%^&*()-_=+[]{}|;:,.<>?";
//    int num_specials = strlen(special_chars);
//
//    for (int i = 0; i < upper; i++) {
//        password[index++] = 'A' + (rand() % 26);
//    }
//    for (int i = 0; i < lower; i++) {
//        password[index++] = 'a' + (rand() % 26);
//    }
//    for (int i = 0; i < numbers; i++) {
//        password[index++] = '0' + (rand() % 10);
//    }
//    for (int i = 0; i < special; i++) {
//        password[index++] = special_chars[rand() % num_specials];
//    }
//
//    int total_length = upper + lower + numbers + special;
//    password[total_length] = '\0';
//    shuffle(password, total_length);
//
//    printf("\nTwoje wygenerowane haslo to: \n");
//    printf("%s\n", password);
//    printf("Dlugosc hasla: %d znakow\n", total_length);
//
//    return 0;
//}