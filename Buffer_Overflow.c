#include <stdio.h>
#include <string.h>

void main(void)
{
    char Password[15]; // Real Password is here!
    char buff[15];     // User Input Password is here!
    char flag = 'F';   // Litmus Test for buffer overflow!

    printf("\nFlag: %c\n", flag);
    int pass = 0; // verification key for root priv..

    strncpy(Password, "StackSmashed", 15);

    printf("\nWelcome to Secure Server.\n");
    printf("\nEnter the password: ");
    gets(buff); // Our Culprit...

    // strncmp() will return 0 if the strings match. if the strings dont match,
    // it will return value(eg - "-1") < 0 if the input string is of less characters than the original string,
    // else it will return value(eg - "1") > 0 if the input string is of More characters than the original string.

    // int flag = strcmp(buff, "StackSmashed");
    // if (flag == 1 || -1) --> Wrong Pass
    // else (flag == 0) --> Correct Pass

    if (strncmp(buff, Password, 15))
    {
        printf("\nWrong Password\n");
    }

    else
    {
        printf("\nCorrect Password\n");
        pass = 1;
    }

    if (pass == 1)
    {
        // Now Give root or admin rights to User
        printf("\nROOT PRIVILEGES GIVEN TO THE USER!");
        printf("\nWELCOME TO THE SECURE SERVER...\nC:\\Users>\n");
    }

    printf("\nFlag: %c", flag); // Litmus Test pass/fail??
}



