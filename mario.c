#include<stdio.h>
#include<cs50.h>

int main(){
    int main(void)
{
    int i=0;
    int n=0;

    do
    {
        printf("Height:");
        n=GetInt();
    } while (n<0 || n>8);

    for (i=0; i<n; i++)
    {
        printf(" ");
        for (int x=0; x<i+2; x++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
}
