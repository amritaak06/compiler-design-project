
/* This file contians C code with syntax errors.
A description of the error is given as a comment next to the error
*/

int main()
{
	int -abcs;									// variable name cannot start with -
	int 1abc;									// variable name cannot start with a digit
	int double;									// keywords cannot be used as variable names
	double = 100;								
	int a, b, c;
	a = a:c;
	if(a < b):									// : not expected after if condition
		a = 10;
	if a >= a 									// condition should be in parentheses
	{
		a = 4436 + 2045 - 5360 * 8997;
	}
	if(a > b)
	{
		if(a < b)
		{
			if(a == b)
			{
				int a5;
				a5 = 7876 * 1661 +* 146;		//+* is not a valid operator
			}
			else								//else block missing
		}
	}
	while(a <= b)
		while(a <= b)
			while(a >= b)
			{
				int a3;
				a3 = 3323 == 2665 + 297 > 5816;
				int a4;
				a4 = 6423 + 3661 * 1998 * 9083 > 2841;
			}
}