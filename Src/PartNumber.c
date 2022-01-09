#include "../Inc/main.h"
#include "../Inc/PartNumber.h"

unsigned long generatePartNumber()
{
    // Read GeneratedPartNumbers.txt
    FILE * freadptr = fopen("Resources/sample/generatedPartNumbers.txt", "r+");
    if(NULL == freadptr)
    {
        printf("failed to open file\n");
        return -1;
    }

    // Read latest part number (should be the biggest value)
    char buff[1000];
    while( !feof(freadptr) )
    {
        if (NULL == fgets(buff, sizeof(buff)/sizeof(buff[0]), freadptr))
            break;
        sprintf(buff, "%s", buff);
    }
    // get lastPartNumber from GeneratedPartNumbers.txt
    int lastPartNumber = atoi(buff);
     
    // Increment lastPartNumber by 1 for the generatedPartNumber
    unsigned long partNumber = ++lastPartNumber;
     
    fclose(freadptr);
    
    // Reopon GeneratedPartNumbers.txt to append partNumber
    FILE * fappendptr = fopen("Resources/sample/generatedPartNumbers.txt", "a");
    if(NULL == fappendptr)
    {
        printf("failed to open file\n");
        return -1;
    }

    // convert lastPartNumber to string
    char strLastPartNumber[6];
    sprintf(strLastPartNumber, "%d", lastPartNumber);
    char strWithNewLine[7] = { '\n' }; //remaining 6 characters are for strLastPartNumber
    strncat(strWithNewLine, strLastPartNumber, 6);
    
    // append strWithNewLine to GeneratedPartNumbers.txt
    fputs(strWithNewLine, fappendptr);
    
    fclose(fappendptr);
    
    // check partNumber if valid, retur -1 if invalid else partNumber
    return partNumber > 999999 || partNumber < 0 ? -1 : partNumber;
}
