/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 
int main()
{
  int Number, Sum, Reminder;
 
  printf("\n Please Enter any number\n");
  scanf("%d", &Number);
 
  while(Number >= 10)
  {
    for (Sum=0; Number > 0; Number= Number/10)
    {
      Reminder = Number % 10;
      Sum=Sum + Reminder;  
    }
    if(Sum >= 10)
    {
      Number = Sum;
    }
    else
    {
      printf("\n The Generic Root of a Given Number = %d", Sum);
      return 0;
    }
  } 
}
