/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number ,guess,nguess=1;
    srand(time(0));
    number=rand()%100+1;
    
   // printf("the number is %d",number);
    do {
        printf("guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if (guess>number)
        {
        printf("lower number pls\n");
        }
        else if(guess<number)
        {
            printf("higher numbwr pls\n");
            
        }
        else{
            printf("you guess it in %d attempts", nguess);
        }
        nguess= nguess+1;
    }while(guess!=number);

    return 0;
}


