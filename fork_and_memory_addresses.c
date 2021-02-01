#include <stdio.h>
#include <unistd.h>

int main()

{
	int a;
	if (fork() == 0)
	{
		a = a + 5;
		printf("%d, %d\n", a, &a);
	}
	else
	{
		a = a - 5;
		printf("%d, %d\n", a, &a);
	}
}



/* fork() returns 0 in child process and process ID of child process in parent process.
In Child (x), a = a + 5
In Parent (u), a = a – 5;
Therefore x = u + 10.
The physical addresses of ‘a’ in parent and child must be different. But our program accesses virtual addresses (assuming we are running on an OS that uses virtual memory). The child process gets an exact copy of parent process and virtual address of ‘a’ doesn’t change in child process. Therefore, we get same addresses in both parent and child. But in python3 v and y will not be equal. */
