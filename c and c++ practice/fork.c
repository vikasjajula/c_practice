#include <stdio.h>
#include <unistd.h>
int main()
{
	if(fork()&&fork())
	fork();
	print("hello");
	return 0;
}
