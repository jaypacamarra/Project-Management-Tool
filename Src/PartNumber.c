#include "../Inc/main.h"
#include "../Inc/PartNumber.h"

unsigned long generatePartNumber()
{
    // Read GeneratedPartNumbers.txt
    // Read latest part number (should be the biggest value)
    // placeholder - generate based on GeneratedPartNumbers.txt
    static unsigned long partNumber = 201112;
    // add generated partNumber into GeneratedPartNumbers.txt
    // close file
    return partNumber++;
}
