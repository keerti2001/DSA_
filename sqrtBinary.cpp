#include<stdio.h>
int main()
{
	int number;
	printf("enter the number:");
	scanf("%d",&number);
	int start = 0, end = number; 
    int mid; 
  
    float ans; 
  
    while (start <= end) { 
        mid = (start + end) / 2; 
        if (mid * mid == number) { 
            ans = mid; 
            break; 
        } 
  
        if (mid * mid < number) { 
            start = mid + 1; 
            ans = mid; 
        } 
  
        else { 
            end = mid - 1; 
        } 
    } 
  
    float inc = 0.1; 
    for (int i = 0; i < 4; i++) { 
        while (ans * ans <= number) { 
            ans += inc; 
        } 
  
        ans = ans - inc; 
        inc = inc / 10; 
    } 
    printf("\nSquarert=%.4f",ans);
    return 0;
}
