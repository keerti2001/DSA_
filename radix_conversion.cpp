    #include <stdio.h>
    #include <math.h>
    int convert(long n,int r);
    int main()
    {
        long n;
        int r;
        printf("enter the radix:");
        scanf("%d",&r);
        printf("Enter a number of 4 digit radix x: ");
        scanf("%4d", &n);
       
        printf("%lld in radix x = %d in decimal", n, convert(n,r));
        return 0;
    }
    int convert(long n,int r)
    {
        int decimalNumber = 0, i = 0, remainder;
        
        while (n!=0)
        {
            remainder = n%10;
            n /= 10;
            if(i!=3)
            decimalNumber += remainder*pow(r,i);
            else 
            decimalNumber -= remainder*pow(r,i);
            ++i;
        }
        return decimalNumber;
    }
