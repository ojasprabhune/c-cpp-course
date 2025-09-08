#include <stdio.h>
#include <stdlib.h>

void print_file(FILE *ftpr) {
  int c;
  rewind(ftpr);
  while ((c = getc(ftpr)) != EOF) {
    putc(c, stdout);
  }
}

void double_space(FILE *ifp, FILE *ofp) {
  int c;
  rewind(ifp);
  while ((c = getc(ifp)) != EOF) {
    putc(c, ofp);
    // for every new line in input file, add another line to output file
    if (c == '\n') {
      putc('\n', ofp);
    }
  }
}

int main(int argc, char *argv[]) {
  FILE *ifp, *ofp;

  if (argc != 3) {
    printf("Need executable input file and output file!\n");
    exit(1);
  }

  // read and write
  ifp = fopen(argv[1], "r+");
  ofp = fopen(argv[2], "w+");

  printf("My %s file as read is:\n\n", argv[1]);
  print_file(ifp);
  printf("\n\n");

  double_space(ifp, ofp);

  printf("My %s file double spaced is:\n\n", argv[2]);
  print_file(ofp);
  printf("\n\n");

  fclose(ifp);
  fclose(ofp);

  return EXIT_SUCCESS;
}
