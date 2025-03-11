
int main()
{
	int a,b=6;
	char c[5]; // array declaration
	a = 5 + 3;
	b = ++a; // unary op
	for(int i = 0;i<5;++i) // for loop
	{
		for(int j = 10; j > 100; ++j)
		{
			int k = a + b;
			b = b + 100;
		}
	}
}
