#include<stdio.h>

/*
		Function:
		
			- re-usable block of code.
			- (){}
				- ()	: Parameters
				- {}	: Body
			
		Types:
			- pre defined (built-in): printf(), scanf(), ...
			- user defined (udf)	:
				- TNRN
				- TSRN
				- TNRS
				- TSRS	
				
		- Syntax:
		
			ReturnType funName([params]) {
				//Statement(s)
				return value;
			}
			
			ReturnType :
				- if returns		: depends on return value(int, char, float, ...)
				- if not returns	: void			
*/

//TNRN
void sum() {
	int a = 10,b = 54;
	printf("Sum: %d\n",a+b);
}

//TSRN
void sub(int a,int b) {
	printf("Sub: %d\n",a-b);
}

//TNRS
int mul() {
	int a = 5,b = 3;
	return a*b;
}

//TSRS
int div(int a,int b) {
	return a/b;
}

void diagonalMatrix(int a[][],int r,int c) {
	int i,j;
	
	for(i=0; i<r; i++) {
		for(j=0; j<c; j++) {
			if(i==j) {
				printf("%d ",a[i][j]);
			}
			else {
				printf("  ");
			}
		}
	}
	
}

void main() {
	
	int a[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
	
	diagonalMatrix(a,3,3);
}











