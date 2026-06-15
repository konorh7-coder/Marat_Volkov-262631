#include <iostream>
#include <cstring>

void usage(char *programName) {
    printf("Usage: %s number1 operation number\n", programName);
    printf("Available operations:\n");
    printf("\tadd\n");
    printf("\n");
}

int main(int argc, char* argv[]) {

    int number1 = 0;
    int number2 = 0;
    int result = 0;

    if (argc == 4) {
        number1 = atoi(argv[1]);
        number2 = atoi(argv[3]);

        if (!strcmp("add", argv[2])) {
            result = number1 + number2;
            printf("%d + %d = %d\n", number1, number2, result);
            return 0;
        }

        if (!strcmp("subtract", argv[2])) {
            result = number1 - number2;
            printf("%d - %d = %d\n", number1, number2, result);
            return 0;
        }

        if (!strcmp("multiply", argv[2])) {
            result = number1 * number2;
            printf("%d * %d = %d\n", number1, number2, result);
            return 0;
        }

        if (!strcmp("divide", argv[2])) {
            result = number1 / number2;
            printf("%d / %d = %d\n", number1, number2, result);
            return 0;
        }

    }

    usage(argv[0]);

    return 0;
}

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
//int main(int argc, char *argv[]){
//
//    char text[MAX_SIZE] = "";

//}
//
//void toUpper(char *text){
//    while(*text){
//        if(*text>='a'&&*text<='z'){
//            *text -=('a'-'A');









//
//#include <iostream>
//#include <string.h>
//#define MAX_SIZE 1000
//void toLower(char *text){
//    while(*text){
//        if(*text>='A'&& *text<='Z'){
//            *text -=('A'-'a');
//        }
//        text++;
//    }
//    int current_length = 0;
//
//    if(strlen(argv[1])<MAX_SIZE){
//        strcpy(text,argv[1]);
//    }
//
//    for(int i = 2; i<argc;i++){
//        if(strlen(text)+strlen(argv[i])+1<MAX_SIZE){
//            strcat(text," ");
//            strcat(text,argv[i]);
//        }
//    }
//    int final_length = strlen(text);
//    printf(text);
//    printf("\n");
//    toLower(text);
//    printf(text);
//    printf("\n");
//    toUpper(text);
//    printf(text);
//    printf("\n");
//    printf("%d \n",textSize(text));
//
//
//    return 0;
//}
