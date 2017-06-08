#include <stdio.h>
#include <limits.h>
int main()
{
	char char_min = CHAR_MIN;
	short shrt_min = SHRT_MIN;
	int int_min = INT_MIN;
	long long_min = LONG_MIN;
	long long llong_min = LLONG_MIN;
	printf("%d %d %d %ld %lld\n",char_min,shrt_min,int_min,long_min,llong_min);
	
	char char_overflow = CHAR_MAX+1;
	short shrt_overflow = SHRT_MAX+1;
	int int_overflow = INT_MAX+1;
	long long llong_overflow = LLONG_MAX+1;
	printf("%d %d %d %lld\n",char_overflow,shrt_overflow,int_overflow,llong_overflow);
	
	char uchar_overflow = UCHAR_MAX+1;
	short ushrt_overflow = USHRT_MAX+1;
	int uint_overflow = UINT_MAX+1;
	long long ullong_overflow = ULLONG_MAX+1;
	printf("%u %u %u %llu\n",uchar_overflow,ushrt_overflow,uint_overflow,ullong_overflow);
	
	char char_underflow = CHAR_MIN-1;
	short shrt_underflow = SHRT_MIN-1;
	int int_undeflow = INT_MIN-1;
	long long_undeflow = LONG_MIN-1;
	long long llong_underflow = LLONG_MIN-1;
	printf("%d %d %d %ld %lld\n",char_underflow,shrt_underflow,int_undeflow,long_undeflow,llong_underflow);
	
	char uchar_underflow = 0-1;
	short ushrt_underflow = 0-1;
	int uint_undeflow = 0-1;
	long ulong_undeflow = 0-1;
	long long ullong_underflow = 0-1;
	printf("%d %d %d %ld %lld\n",uchar_underflow,ushrt_underflow,uint_undeflow,ulong_undeflow,ullong_underflow);
	return 0;
}