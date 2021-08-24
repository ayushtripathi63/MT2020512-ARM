#include <stdio.h>

int main() {
int a,b,c;
printf("Enter the three no.");
scanf("%d %d %d",&a,&b,&c);
if(a>b)
{
	if(a>c)
		printf("\na is the greatest");
	else
		printf("\nc is the greatest");
}

else
{
	if(b>c)
		printf("\nb is the greatest");
	else
		printf("\nc is the greatest");
}

    
    return 0;
}