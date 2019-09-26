#include<stdio.h>
int main()
{
int N,L,R;
scanf("%d %d %d",&N,&R,&L);
if(L<R)
{
if((N>L)&&(N<R))
  printf("Yes");
else
  printf("No");
}
else 
{
    if((N>R)&&(N<L))
    printf("yes");
    else
    printf("No");
}
return 0;
}
