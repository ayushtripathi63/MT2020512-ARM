#include <stdio.h>

int main() {
int y[15];
int max=0;
printf("enter 15 numbers");
for(int i=0;i<=14;i++)
{
printf("\nenter no. %d--",i);
scanf("%d",&y[i]);
}

max=y[0];

for(int i=0;i<=14;i++)
{
if(y[i]>=max)
max=y[i];
}

printf("\ngreatest no. is--%d",max);
return 0;
}
