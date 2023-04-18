#include<stdio.h>
int main()
{
    char ch;
    float n,n1;
    printf("addition(+)\n");
    printf("substraction(-)\n");
    printf("multipilication(+)\n");
    printf("division(/)\n");
    printf("choose for calculator:\n");
    scanf("%c",&ch);
    printf("enter first number:\n");
    scanf("%f",&n);
    printf("enter second number:\n");
    scanf("%f",&n1);
 
    switch(ch)
    {
    case '+':
    	printf("addition is:%f \n",n+n1);
    	break;
    case '-':
	    printf("substraction is: %f \n",n-n1);
	    break;
	case '*':
	    printf("multipilication is: %f \n",n*n1);
	    break;
	case '/':
		printf("divison is:%f \n",n/n1);
		break;
	default:
	    printf("invalid task");
		break;
	}
		
		return 0;			
	}
