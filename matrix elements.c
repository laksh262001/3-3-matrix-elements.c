#include<stdio.h>
#include<malloc.h>
main()
{
	int a[3][3];
	int *b=&a;
	int i,j,t=0;
	printf("Enter the elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",(b+i*3+j));
		}
}
		printf("The data is as follows:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",*(b+i*3+j));
	}
	printf("\n");
}
for(i=0;i<3;i++)
for(j=0;j<3;j++)
if(i==j)
t=t+*(b+i*3+j);
printf("The sum of diagonal elements is:%d",t);	
}
