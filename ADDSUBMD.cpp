#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int dec(int x,int b1)
{
 int i=0,sum=0;
 while(x!=0)
 {
  sum=sum+(x%10)*pow(b1,i);
  x=x/10;
  i++;
 }
 return sum;
}
int base(int sum,int b2)
{
 int i=0,y=0;
 while(sum!=0)
 {
  y=y+(sum%b2)*pow(10,i);
  i++;
  sum=sum/b2;
 }
 return y;
}
int main()
{
 int x,y,b;
 printf("enter the numbers and base respectively\n");
 scanf("%d %d %d",&x,&y,&b);
 x=dec(x,b);
 y=dec(y,b);
 char c[1];
 printf("enter the operend\n");
 scanf("%s",c);
 if(c[0]=='+')
 printf("%d\n",base((x+y),b));
 else if(c[0]=='-')
 printf("%d\n",base((x-y),b));
 else if(c[0]=='*')
 printf("%d\n",base((x*y),b));
 else if((c[0]=='/')&&(y!=00))
 printf("%d\n",base((x/y),b));
}
