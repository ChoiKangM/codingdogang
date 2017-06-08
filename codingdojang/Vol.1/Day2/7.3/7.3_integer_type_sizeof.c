#include <stdio.h>

int main()
{
	printf("char: %ld, short: %ld, int: %ld, long: %ld, long long: %ld\n",
		   sizeof(char),
		   sizeof(short),
		   sizeof(int),
		   sizeof(long),
		   sizeof(long long)
	);
	return 0;
}
