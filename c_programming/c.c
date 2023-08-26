#include <stdio.h> 

void main (void)
{
	int *ptr ;
	{
		int x = 5 ;
		ptr = &x ;
		printf("%x   %d\n" , ptr , *ptr ) ;  //هااااااااااااااااااااااااااااااام
 	}
	//	printf("%x   %d" , ptr , *ptr ) ;
	//  printf("%x   %d\n" , &x , x ) ;
	char * a = 'A' ;
	printf("%d\n" , sizeof(*a) , sizeof('A')) ;
}