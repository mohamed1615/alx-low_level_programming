#!/bin/bash
gcc -Wall -o output -xc - <<EOF && ./output >&2 || echo "Compilation Failed"
#include <unistd.h>
int main(void) { write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59); return 1; }
EOF
