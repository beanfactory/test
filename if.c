#include <stdio.h>

int main(int argc, char const *argv[])
{
    int salary,tax;
    printf("please input salary\n");
    scanf("%d", &salary);
    if (salary < 1500) {
        tax = salary * 0.03;
    } else if (salary < 4500) {
        tax = 1500 * 0.03 + (salary - 1500) * 0.1;
    } else if (salary < 9000) {
        tax = 1500 * 0.03 + 3000 * 0.1 + (salary - 4500) * 0.2;
    } else if (salary < 35000) {
        tax = 1500 * 0.03 + 3000 * 0.1 + 4500 * 0.2 + (salary - 9000) * 0.25;
    } else if (salary < 55000) {
        tax = 1500 * 0.03 + 3000 * 0.1 + 4500 * 0.2 + 26000 * 0.25 + (salary - 35000) * 0.3;
    } else {
        tax = 1500 * 0.03 + 3000 * 0.1 + 4500 * 0.2 + 26000 * 0.25 + 20000 * 0.3;
    }
    printf("tax is %d\n", tax);20000 * 0.3
    return 0;
}