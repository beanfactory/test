#include <stdio.h>

int main(int argc, char const *argv[])
{
    int salary,tax;
    printf("please input salary\n");
    scanf("%d", &salary);

    int condition;

    if (salary < 1500) {
        condition = 1;
    } else if (salary < 4500) {
        condition = 2;
    } else if (salary < 9000) {
        condition = 3;
    } else if (salary < 35000) {
        condition = 4;
    } else if (salary < 55000) {
        condition = 5;
    }

    switch(condition){
        case 1: tax=salary * 0.03;break;
        case 2: tax = 1500 * 0.03 + (salary - 1500) * 0.1;break;
        case 3: tax = 1500 * 0.03 + 3000 * 0.1 + (salary - 4500) * 0.2;break;
        case 4: tax = 1500 * 0.03 + 3000 * 0.1 + 4500 * 0.2 + (salary - 9000) * 0.25;
        case 5: tax = 1500 * 0.03 + 3000 * 0.1 + 4500 * 0.2 + 26000 * 0.25 + (salary - 35000) * 0.3;
        default: tax = 1500 * 0.03 + 3000 * 0.1 + 4500 * 0.2 + 26000 * 0.25 + 20000 * 0.3;
    }
    printf("tax is %d\n", tax);
    return 0;
}