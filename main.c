#include <stdio.h>

int f0(int n)
{
	return n;
}

int f1(int n)
{
	return n * n;
}

void swap(int(**a)(), int(**b)())
{
	int(*temp)() = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int(*p)() = f0;
	int(*q)() = f1;
	void* pp = p;
	void* qq = q;
	printf("%d\n", p(5));
	printf("%d\n", q(5));
	swap(&pp, &qq);
	printf("%d\n", p(5));
	printf("%d\n", q(5));
	return 0;
}

