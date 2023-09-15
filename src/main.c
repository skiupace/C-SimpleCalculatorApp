#include <stdio.h>
#include "../headers/calculator_menu.h"
#include "../headers/operations_list.h"
#include "../headers/calculator_interface.h"

int main() {

    calculator_menu();
    enum operations operation_number;
    scanf("%d", (int*)&operation_number);
    if (operation_number == EXIT) return 0;

    float result = calculator_interface(operation_number);
    printf("The Operation Result = %1.2f", result);

    return 0;
}