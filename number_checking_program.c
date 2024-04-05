#include<stdio.h>
#include<stdlib.h>

void checkOddEvenNumber(int parameter) {
    int n;
    n=parameter;
    if (n%2==0) {
        printf(">>> %d is even number", n);
    }
    else{
        printf(">>> %d is odd number", n);
    }
}

void checkLeap(int parameter) {
    int y;
    y=parameter;
    if(y%100==0 && y%400!=0){
        printf(">>> %d isn't Leap year", y);
    }
    else if(y%4!=0){
        printf(">>> %d isn't Leap year", y);
    }
    else {
        printf(">>> %d is Leap year", y);
    }
}

void checkPrimeNumber(int parameter) {
    int n, i, stats=0;
    n=parameter;
    if(n<=0||n==1) {
        stats=1;
    }
    for(i=2; i<=n/2; i++) {
        if(n%i==0) {
            stats=1;
            break;
        }
    }
    if(stats==0) {
        printf(">>> %d is a prime number", n);
    }
    else {
        printf(">>> %d isn't a prime number", n);
    }
}

int main() {
    int num, year;
    char menu, mainLoop='y', loop;
    while(mainLoop=='y'||mainLoop=='Y') {
        system("clear");
        printf("\n-------------(MENU)-------------");
        printf("\n1. Check Odd or Even number");
        printf("\n2. Check Leap year");
        printf("\n3. Check prime number");
        printf("\n0. Close program");
        printf("\nEnter menu number : ");
        scanf("%s", &menu);

        switch(menu) {
        case '1':
            printf("\n-----(Check Odd Even number)----");

            oddEven:
            printf("\nEnter an integer number : ");
            scanf("%d", &num);
            checkOddEvenNumber(num);

            recheckNum:
            printf("\nCheck another number?");
            printf("\n(Y/N) : ");
            scanf("%s", &loop);

            switch(loop) {
            case 'y': case 'Y' :
                goto oddEven;
                break;
            case 'n': case 'N' :
                goto mainLoop;
                break;
            default:
                printf("\nUnknown selection");
                goto recheckNum;
                break;
            }
            break;
        case '2':
            printf("\n--------(Check Leap year)-------");

            leapYear:
            year=0;
            printf("\nEnter the year : ");
            scanf("%d", &year);
            checkLeap(year);

            recheckYear:
            printf("\nCheck another year?");
            printf("\n(Y/N) : ");
            scanf("%s", &loop);

            switch(loop) {
            case 'y': case 'Y':
                goto leapYear;
                break;
            case 'n':case 'N' :
                goto mainLoop;
                break;
            default:
                printf("\nUnknown selection");
                goto recheckYear;
                break;
            }
            break;
        case '3':
            printf("\n------(Check Prime Number)------");

            primeNumber:
            printf("\nEnter an integer number : ");
            scanf("%d", &num);
            checkPrimeNumber(num);

            recheckPrime:
            printf("\nCheck another number?");
            printf("\n(Y/N) : ");
            scanf("%s", &loop);

            switch(loop) {
            case 'y':case 'Y' :
                goto primeNumber;
                break;
            case 'n':case 'N' :
                goto mainLoop;
                break;
            default:
                printf("\nUnknown selection");
                goto recheckPrime;
                break;
            }
            break;
        case '0':
            goto end;
        default:
            printf("\nUnknown selection");
        }
        mainLoop:
        printf("\nChoose another menu?");
        printf("\n(Y/N) : ");
        scanf("%s", &mainLoop);
    }
    end:
    printf("\nThe program will be terminated immediately");
    printf("\nThank you for using this program");
    return 0;
}
