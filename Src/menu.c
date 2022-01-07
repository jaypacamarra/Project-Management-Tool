#include "../Inc/menu.h"
#include "../Inc/main.h"
#include "../Inc/PartNumber.h"

userInput_t getUserInput()
{
    userInput_t userInput;
    printf("Enter an option: ");
    scanf("%d", &userInput);
    return userInput;
}

void MainMenu()
{
    clrscr(); 
    printf("\nProject Management Tool\n\n");
    printf("Option menu:\n");
    printf(" 1.Project \n");
    printf(" 2.Create Part Number \n");
    printf(" 3.Exit \n\n");
}

void ProjectMenu()
{
    MenuHandle projectMenuHandle;
    projectMenuHandle.userBack = false;

    while( !projectMenuHandle.userBack )
    {
        clrscr(); 
        printf("\nProject Management Tool\n\n");
        printf("option menu:\n");
        printf(" 1.create project\n");
        printf(" 2.list projects\n");
        printf(" 3.view project details\n");
        printf(" 4.edit project\n");
        printf(" 5.delete project\n");
        printf(" 6.back\n\n");

        projectMenuHandle.userInput = getUserInput();

        switch ( projectMenuHandle.userInput )
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                projectMenuHandle.userBack = true;
        }
    }
}

void CreatePartNumberMenu()
{
    MenuHandle CreatePartNumberMenuHandle;
    CreatePartNumberMenuHandle.userBack = false;
    unsigned long partNumber;

    while( !CreatePartNumberMenuHandle.userBack )
    {
        clrscr(); 
        printf("\nproject management tool\n\n");
        printf("option menu:\n");
        printf(" 1.generate part number\n");
        printf(" 2.back\n\n");
        if( CreatePartNumberMenuHandle.userInput == 1)
        {
            printf("Part Number: %ld\n\n", partNumber);
        }

        CreatePartNumberMenuHandle.userInput = getUserInput();

        switch ( CreatePartNumberMenuHandle.userInput )
        {
            case 1:
                partNumber = generatePartNumber();
                break;
            case 2:
                CreatePartNumberMenuHandle.userBack = true;
        }
    }
}
