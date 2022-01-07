#ifndef MENU_H
#define MENU_H

#include <stdbool.h>

// macro to clear screen
#define clrscr() printf("\e[1;1H\e[2J")

typedef int userInput_t;
typedef struct
{
    userInput_t userInput;
    userInput_t prevUserInput;
    bool        userBack;
    bool        userExit;
}MenuHandle;

userInput_t getUserInput();
void MainMenu();
void ProjectMenu();
void CreatePartNumberMenu();


#endif /* MENU_H */
