/*
 * @copyright (c) 2008, Hedspi, Hanoi University of Technology
 * @author Huu-Duc Nguyen
 * @version 1.0
 */

#include <stdio.h>
#include <stdlib.h>
#include "reader.h"
#include "parser.h"

 /******************************************************************/

int main(int argc, char* argv[]) {
	char* fileName;
		if (argc > 1) {
		fileName = argv[1];
	} else {
		fileName = "tests/example4.kpl";
	}
	
	if (compile(fileName) == IO_ERROR) {
		printf("Can't read input file: %s\n", fileName);
		return -1;
	}
	return 0;
}
