
#include <stdio.h>

int main() {
int y[14];
int max;
printf("enter 15 numbers");
for(int i=0;i<=14;i++)
{
printf("\nenter no. %d--",i);
scanf("%d",&y[i]);
if(i==0)
max=y[i];
else if(y[i]>=y[i-1])
max=y[i];
}
printf("\ngreatest no. is--%d",max);
return 0;
}