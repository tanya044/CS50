#include<stdio.h>
#include<cs50.h>
#include<math.h>
int main()
{
    int intQuarter;
    int intDime;
    int intNickel;
    int intPenny;
    int changeOutput = 0;
    float changeInput;
    //Prompt user for change input
    do
    {
        changeInput = get_float("Change owed: ");
    }
    while (changeInput < 0);
    //Rounding
    // cents from the dollar input
    int cents = round(changeInput * 100);
    // quarters
    for (intQuarter = 1; cents >= 25; intQuarter++)
    {
        cents -= 25;
        changeOutput += 1;
    }
    //dimes
    for (intDime = 1; cents >= 10; intDime++)
    {
        cents -= 10;
        changeOutput += 1;
    }
    // nickels
    for (intNickel = 1; cents >= 5; intNickel++)
    {
        cents -= 5;
        changeOutput += 1;
    }
    //pennies
    for (intPenny = 1; cents >= 1; intPenny++)
    {
        cents -= 1;
        changeOutput += 1;
    }
    //Print
    printf("%i\n", changeOutput);

}
