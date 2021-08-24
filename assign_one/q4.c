
#include <stdio.h>

int main() {
int y[19];
int temp;
printf("enter 20 numbers");
for(int i=0;i<=19;i++)
{
printf("\nenter no. %d--",i);
scanf("%d",&y[i]);
}

printf("\nenter array is---");

for(int i=0;i<=19;i++)
{
printf("%d",y[i]);
}

for(int i=0;i<=19;i++)
{
for(int j=i+1;j<=19;j++)
{   
    if(y[i]>y[j])
    {
    temp=y[i];
    y[i]=y[j];
    y[j]=temp;
    }
}
}


printf("\nenter array is---");

for(int i=0;i<=19;i++)
{
printf(" %d",y[i]);
}

return 0;
}