/*
	Copyright (C) 2022 Heewon Cho
	il.c
*/

#define IL_VERSION "0.1"

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	argc--;
	argv++;
	
	if (argc > 0 && (*argv)[0] == '-' && (*argv)[1] == 'v') {
		printf("il %s (%s, %s)\n", IL_VERSION, __DATE__, __TIME__);
		return 0;
	}

	FILE *fp;
	if ((fp = fopen(*argv, "r")) == NULL) {
		printf("il: %s: Could not open the file\n", *argv);
		return -1;
	}

	return 0;
}