#include <stdio.h>
int main() {
    int num;
    printf("enter a number:");
    scanf("%d", &num);
    switch(num) {
        case 1:
        printf("january days: 31");
        break;
        case 2:
        printf("february days: 28/29");
        break;
        case 3:
        printf("march days: 31");
        break; 
        case 4:
        printf("april days: 30");
        break;
        case 5:
        printf("may days: 31");
        break;
        case 6:
        printf("june days: 30");
        break;
        case 7:
        printf("july days: 31");
        break;
        case 8:
        printf("august days: 31");
        break;
        case 9:
        printf("september days: 30");
        break;
        case 10:
        printf("october days: 31");
        break;
        case 11:
        printf("november days: 30");
        break;
        case 12:
        printf("december days: 31");
        break;
        default:
        printf("invalid number");
    }
    return 0;
}