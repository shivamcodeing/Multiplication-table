#include <stdio.h> // include header file

int main()
{
    char input;
    int num;
    printf("Multiplication Table C Language Program\n"); //Show program name
    printf("Enter the input character.\n q to quit\n 1.For Multiplication\n");
    printf("Select any one number: ");
    scanf("%c", &input);

    switch (input)
    {
        // press q or any key for quitting the program
    case 'q':
        printf("Quitting the program...\n");
        goto end;
        break;
    case '1':
    // press key 1 for multiplication table 
        printf("Enter the number you want in the Multiplication table\n");
        printf("Enter number here: ");
        scanf("%d", &num);
        printf("The number you need is the multiolication table %d", num);

        //create a for loop for print multiplication table
        for (int i = 0; i < 10; i++)
        {
            printf("%d X %d = %d\n", num, i, num * i);
        }
        printf("Your multiplication table ready\n");
        break;
    default:
        break;
    }
end:
    return 0;
}