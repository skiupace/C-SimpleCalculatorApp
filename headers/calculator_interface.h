#ifndef H_CALCULATOR_INTERFACE_H
#define H_CALCULATOR_INTERFACE_H

float calculator_interface(enum operations operation_number) {
    float number_one, number_two;
    printf("\nEnter the first number: ");
    scanf("%f", &number_one);

    printf("Enter the second number: ");
    scanf("%f", &number_two);

    switch (operation_number) {
        case ADDITION: return number_one + number_two;
        case SUBTRACTION: return number_one - number_two;
        case MULTIPLICATION: return number_one * number_two;
        case DIVISION: return number_one / number_two;
        case MODULE: return (int)number_one % (int)number_two;
        default: printf("Error: Invalid Input!!!\n");
    }
}

#endif // H_CALCULATOR_INTERFACE_H