#include <stdio.h>
void prin(int he);
void spac(int space);
int main(void)
{


    int he;
    int i = 0;
    do
    {
      printf("Enter height: "); //ask for input of the number of rows 
       scanf("%d", &he);

    }

    while (he <= 0);                   //condition for valid input
    for (int k = 0; k < he; k++)
    {
        spac((he - 1) - k);
        prin(k + 1);
        printf("\n");
    }
}



void prin(int he)
{
    for (int x = 0; x < he; x++)
    {
        printf("#");
    }
}
void spac(int space)
{
    for (int f = 0; f < space; f++)
    {
        printf(" ");
    }
}