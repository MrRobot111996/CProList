#include<stdio.h>
#include<conio.h>
int main()
{
	int l;
 printf("Enter the Length of an Array\n");
 scanf("%d", &l);
 int i=0,x=0,j=1;
 int a[l];
 //value input
 for(i=0;i<l;i++)
 {
  printf("Enter The Value of an Array\n");
  scanf("%d", &a[i]);
 }
 //Bubble sorting the array
 for(i=(l-1);i>=j;)
   { 
 	if(a[i-1]>a[i]) 
 	{
	  x=a[i-1];
 	  a[i-1]=a[i];
 	  a[i]=x;
	}i--;
	 if(i==(j-1))
	  {
	  i=(l-1);
	  j++;
	  printf("\n");
      }
  }
 for(i=0;i<l;i++)
 {
 printf("%d\n", a[i]);
 }
 getch();
 return 0;
}
