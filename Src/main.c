#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../Inc/menu.h"

int main() {

    bool Exit = false;
    userInput_t userInput; 

    while( !Exit )
    {
        MainMenu();
        userInput = getUserInput();

        switch (userInput)
        {
            case 1:
                ProjectMenu();
                break;
            case 2:
                CreatePartNumberMenu();
                break;
            case 3:
                Exit = true;
        }
    }

}


