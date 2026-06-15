#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int credits = 100;
    int bet = 0;
    int option = 0;
    int slot1, slot2, slot3;
    FILE* fptr;


    fptr = fopen("save.txt", "r");
    if (fptr != 0) {
        fscanf(fptr, "%d", &credits);
        fclose(fptr);

        if (credits <= 0) {
            printf("Zbankrutowaleś!.\n");
        }
        else {
            printf("Wczytano zapis gry.\n");
        }
    }
    else {
        printf("0");
    }




    srand((unsigned int)time(NULL));

    printf("=== WITAJ W KASYNIE ===\n");

    do {
        printf("\nTwoje aktualne saldo: %d kredytow\n", credits);
        if (credits <= 0) {
            printf("Zbankrutowaleś!\n");
            break;
        }

        printf("MENU:\n");
        printf("1. Zagraj w automaty (Sloty)\n");
        printf("0. Wyjdz z kasyna\n");
        printf("Wybor: ");
        scanf_s("%d", &option);

        switch (option) {
        case 1:
            printf("Podaj stawke (masz %d): ", credits);
            scanf_s("%d", &bet);

            if (bet <= 0) {
                printf("Stawka musi byc wieksza od zera!\n");
            }
            else if (bet > credits) {
                printf("Nie masz wystarczajacej ilosci kredytow!\n");
            }
            else {
                credits -= bet;
                slot1 = (rand() % 7) + 1;
                slot2 = (rand() % 7) + 1;
                slot3 = (rand() % 7) + 1;
                printf("\nLosowanie: [ %d ] [ %d ] [ %d ]\n", slot1, slot2, slot3);




                if (slot1 == slot2 && slot2 == slot3) {
                    printf("JACKPOT! Wygrywasz x5!\n");
                    credits += (bet * 5);
                }
                else if (slot1 == slot2 || slot2 == slot3 || slot1 == slot3) {
                    printf("Dwie takie same liczby! Wygrywasz x3!\n");
                    credits += (bet * 3);
                }
                else {
                    printf("Niestety, przegrywasz.\n");
                }
            }
            break;



        //case 0:
        //    printf("opuszczasz kasyno. do widzenia!\n", credits);
        //    break;

        //default:
        //    printf("zla opcja. prosze wybrac prawidlowa opcje.\n");
        //    break;
        //}


        case 0:
            printf("Opuszczasz kasyno z %d kredytami. Do widzenia!\n", credits);
            break;

        default:
            printf("Zla opcja. Prosze wybrac prawidlowa opcje.\n");
            break;
        }
    } while (option != 0);
    fptr = fopen("save.txt", "w");
    if (fptr != 0) {
        fprintf(fptr, "%d\n", credits);
        fclose(fptr);
        printf("Stan konta zostal zapisany (%d kredytow).\n", credits);
    }
    else {
        printf("Blad: Nie udalo sie zapisac stanu konta!\n");
    }
    return 0;
}


//slot1 = (rand() % 7) + 1;
//slot2 = (rand() % 7) + 1;
//slot3 = (rand() % 7) + 1;
//
//printf("\nLosowanie: [ %d ] [ %d ] [ %d ]\n", slot1, slot2, slot3);
//
//if (slot1 == slot2 && slot2 == slot3) {
//    printf("JACKPOT! Wygrywasz x5!\n");
//    credits += (bet * 5);
//}
//else if (slot1 == slot2 || slot2 == slot3 || slot1 == slot3) {
//    printf("Dwie takie same liczby! Wygrywasz x2!\n");
//    credits += (bet * 2);
//}
//else {
//    printf("Niestety, przegrywasz.\n");
//}
//                }
//                break;