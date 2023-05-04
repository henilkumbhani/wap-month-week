#include<stdio.h>
main()
{
	int c;
	printf("\npress 1 for 1");
	printf("\npress 2 for 2");
	printf("\npress 3 for 3");
	printf("\npress 4 for 4");
	printf("\npress 5 for 5");
	printf("\npress 6 for 6");
	printf("\npress 7 for 7");
	printf("\npress 8 for 8");
	printf("\npress 9 for 9");
	printf("\npress 10 for 10");
	printf("\npress 11 for 11");
	printf("\npress 12 for 12");
	printf("\nenter number among this:-");
	scanf("%d",&c);
	switch(c)
	{
		case 1 :
			    printf("1=january"); 
			    break;
		case 2 :
			    printf("2=february"); 
				break;
		case 3 :
			    printf("3=march"); 
				break;		
		case 4 :
			    printf("4=april"); 
				break;
		case 5 :
			    printf("5=May"); 
				break;
		case 6 :
			    printf("6=june"); 
				break;	
		case 7 :
			    printf("7=july"); 
				break;
		case 8 :
			    printf("8=august"); 
				break;		
		case 9 :
			    printf("9=september"); 
				break;
		case 10 :
			    printf("10=october"); 
				break;
		case 11 :
			    printf("11=november"); 
				break;
		case 12 :
			    printf("12=december"); 
				break;										
		default :
		         printf("plz enter valid choice!");								    
	}
}

