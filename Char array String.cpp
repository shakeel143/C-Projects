#include<stdio.h>
#include<conio.h>


main( )
{


char name[ ] = "Shakeel" ;
	int array_size = sizeof(name)/sizeof(char);
int i = 0 ;
while ( i <= array_size )
 {
printf ( "%c", name[i] ) ;
 i++ ;
 }
}
