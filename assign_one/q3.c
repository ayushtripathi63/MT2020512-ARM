#include <stdio.h>

int main() {
int y[19];
int count=0;
printf("enter 20 numbers");
for(int i=0;i<=19;i++)
{
printf("\nenter no. %d--",i);
scanf("%d",&y[i]);
if(y[i]%2==0)
count=count+1;
}
printf("\ntotal even no. are--%d",count);
return 0;
}