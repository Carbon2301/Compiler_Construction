/* 
 * @copyright (c) 2008, Hedspi, Hanoi University of Technology
 * @author Huu-Duc Nguyen
 * @version 1.0
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "reader.h"
#include "parser.h"
#include "codegen.h"


int dumpCode = 0;

void printUsage(void) {
  printf("Usage: kplc input [output] [-dump]\n");
  printf("   input: input kpl program (required)\n");
  printf("   output: executable file (optional)\n");
  printf("   -dump: code dump\n");
  printf("\n");
  printf("If output file is not provided, code will only be printed to stdout.\n");
}

int analyseParam(char* param) {
  if (strcmp(param, "-dump") == 0) {
    dumpCode = 1;
    return 1;
  } 
  return 0;
}


/******************************************************************/

int main(int argc, char *argv[]) {
  int i; 

  if (argc <= 1) {
    printf("kplc: no input file.\n");
    printUsage();
    return -1;
  }

  // Parse parameters
  int hasOutputFile = 0;
  char* outputFile = NULL;
  
  for (i = 2; i < argc; i++) {
    if (strcmp(argv[i], "-dump") == 0) {
      analyseParam(argv[i]);
    } else if (!hasOutputFile) {
      // First non-"-dump" argument after input is output file
      outputFile = argv[i];
      hasOutputFile = 1;
    }
  }

  initCodeBuffer();

  if (compile(argv[1]) == IO_ERROR) {
    printf("Can\'t read input file!\n");
    return -1;
  }

  // Output file is optional
  if (hasOutputFile && outputFile != NULL) {
    if (serialize(outputFile) == IO_ERROR) {
      printf("Can\'t write output file!\n");
      return -1;
    }
  }

  // Always print code buffer
  printCodeBuffer();
    
  cleanCodeBuffer();

  return 0;
}
