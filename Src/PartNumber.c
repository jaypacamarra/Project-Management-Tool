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
    char str[6];
    sprintf(str, "%d", lastPartNumber);
    char strWithNewLine
    
    // append lastPartNumber to GeneratedPartNumbers.txt
    fputs(str, fappendptr);
    
    fclose(fappendptr);
    
    while(1);
    // check partNumber if valid
    return partNumber > 999999 ? -1 : partNumber;
}
