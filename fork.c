/* Fork system call is used for creating a new process, which is called child process, which runs concurrently with the process that makes the fork() call (parent process). After a new child process is created, both processes will execute the next instruction following the fork() system call. A child process uses the same pc(program counter), same CPU registers, same open files which use in the parent process.

It takes no parameters and returns an integer value. Below are different values returned by fork().

Negative Value: creation of a child process was unsuccessful.
Zero: Returned to the newly created child process.
Positive value: Returned to parent or caller. The value contains process ID of newly created child process. */

#include <stdio.h>
#include <unistd.h>


void forkexample()
{
	int fork_returned;
	// child process as return value is zero
	fork_returned = fork();
	if (fork_returned == 0)
		printf("Hello from child!\n");

	// parent process as return value is non zero
	else
		printf("Hello from parent!\nThe child process ID is %d.\n", fork_returned);
}

int main()
{
	forkexample();
	return 0;
}
