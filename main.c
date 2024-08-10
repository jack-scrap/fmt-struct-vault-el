#include <stdio.h>

const char* name = "vault";

const char postfix = ':';

void err(char* msg) {
	fprintf(stderr, "Error: %s\n", msg);
}

int main(int argc, char* argv[]) {
	if (argc == 1) {
		err("No arguments");

		return 1;
	}

	if (argc != 1 + 1) {
		err("Wrong number of arguments");

		return 1;
	}

	printf("%s%c%s", name, postfix, argv[1]);

	return 0;
}
