#include <stdio.h>
#include <libadd/main.h>
#include <stdlib.h>
#include <errno.h>


int main(int argc, char** argv)
{
	if (argc != 3) {
		printf("Usage: %s <number> <number>\n", argv[0]);
		return 1;
	}
	long a, b;

	// clear errno
	errno = 0;

	// TODO: Handle non-numbers. Check for 'str_end'
	a = strtol(argv[1], NULL, 10);
	if (errno != 0){
		printf("ERROR in convert number '%s'\n", argv[1]);
		return 1;
	}

	errno = 0;
	b = strtol(argv[2], NULL, 10);
	if (errno != 0){
		printf("ERROR in convert number '%s'\n", argv[2]);
		return 1;
	}

	// TODO: Handle potential int vs long difference!
	printf("%d\n", libadd_add(a, b));

	return 0;
}
