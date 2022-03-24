/* Part - A: 
 * Program 2:
 * Develop a program to solve simple computational problems using 
 * arithmetic expressions and use of each operator leading to 
 * simulation of a commercial calculator. (No built-in math function)
 */

 // Include the required header files
 #include<stdio.h>
 	
 // Define main function
 int main()
 {	// Beginning of main()
 
 	// Declare the variables
 	int num1,num2;
 	
 	int result;
 	char op;
 	
 	// Accept input/data from the user
 	printf("Enter two integers :");
 	scanf("%d%d", &num1,&num2);
 	
 	printf("Enter an arithmetic operator : ");
 	scanf(" %c",&op);// Space and %c to accept a character		

	// compute the arithmetic operation 	
 	if(op == '+')		// if operator is '+'
 	{
 		result = num1 + num2;
 	}
 	else if(op == '-')	// if operator is '-'
 	{
 		result = num1 - num2;
 	}
 	else if(op == '*')	// if operator is '*'
 	{
 		result = num1 * num2;
 	}
 	else if(op == '/')	// if operator is '/'
 	{
 		if (num2 == 0)
 		{
 			printf("Divide by zero error\n");
 			printf("Denominator cannot be zero in division operation\n");
 			printf("Retry with valid input....\n");
 			return 1;
 		}
 		else
 		{
 			result = num1 / num2;
 		}
 		
 	}
 	else if(op == '%')	// if operator is '%'
 	{
 		if (num2 == 0)
 		{
 			printf("Divide by zero error\n");
 			printf("Denominator cannot be zero in modulus operation\n");
 			printf("Retry with valid input....\n");
 			return 2;
 		}
 		else	
 		{
 			result = num1 % num2;
 		}
 	}
 	else	// if operator is none of the arithmetic operators
 	{
 		printf("Invalid operator...\n");
 		return 3;
 	}
 	
 	printf("Result: %d %c %d = %d\n",num1, op, num2, result);
 	return 0;
}	// End of main ()
 
 /*
 Execution:
 
 $ cc prog2.c
 $ ./a.out
Enter two integers :4 9
Enter the operator :+
Result: 4 + 9 = 13

$ ./a.out
Enter two integers :12 45
Enter the operator :-
Result: 12 - 45 = -33

$ ./a.out
Enter two integers :56 87
Enter the operator :*
Result: 56 * 87 = 4872

$ ./a.out
Enter two integers :23 67
Enter the operator :/
Result: 23 / 67 = 0

$ ./a.out
Enter two integers :3 5
Enter the operator :%
Result: 3 % 5 = 3

$ ./a.out
Enter two integers :3
0
Enter an arithmetic operator : /
Divide by zero error
Denominator cannot be zero in division operation
Retry with valid input....

$ ./a.out
Enter two integers :3  
0
Enter an arithmetic operator : %
Divide by zero error
Denominator cannot be zero in modulus operation
Retry with valid input....

$ ./a.out
Enter two integers :3
5
Enter an arithmetic operator : $
Invalid operator...

*/
 	 
