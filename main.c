/*Author:  Jonathan Ingram
  Date: 4/9/17
  Description:  First program for class.  Converts inches to centimeters
                and then converts centimeters to inches.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double in_cm;
    double cm_in;
    double inches;
    double centi;

    printf("Convert inches to centimeters. Enter the inches: ");
    scanf(" %d", &inches);

    //check to see if input is good
    printf("Inches entered: %d", inches);

    in_cm = (inches)*2.54;

    //output of conversion
    printf("\n%d inch(es) converted to centimeters is: %d centi", inches, in_cm);

    printf("\nConvert centimeters to inches. Enter the centimeters: ");
    scanf(" %d", &centi);

    //check to see if input is good
    printf("Centimeters entered: %d", centi);

    cm_in = (centi)/2.54;

    //output of conversion
    printf("\n%d centimeters converted to inches is: %d inches", centi, cm_in);

    return (0);
}
