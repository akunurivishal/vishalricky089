/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void main()
{
   printf ("%d\n",sq(4));
   printf ("%d\n",cube(4));
}
int sq(int a)
{
   return a*a;
}
int cube(int a)
{
    return sq(a)*a;
}
