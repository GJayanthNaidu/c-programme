#include<stdio.h>
#include<stdlib.h>

void main()
{
	auto int j=1;
	{
		auto int j=2;
		{
			auto int j=3;
			printf("%d\n",j);

		}
			printf("%d\n",j);
	}
			printf("%d\n",j);
}
