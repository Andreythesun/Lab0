 #include <stdio.h>

int
main()
{
	int a;
	int b;
	printf("Input a divisible:");
	scanf("%d", &a);
	printf("Input a divisor:");
	scanf("%d", &b);
	if (b == 0)
	{
		printf("Can't divide by 0");
		return 1;
	};
	printf("Remainder of division %d by %d is %d \n", a, b, (a % b));
	return 0;
}
