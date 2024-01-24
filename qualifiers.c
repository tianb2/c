int main() {
  const int i = 1;

  // compiler must generate instructions
  // to read the value from port and then write this
  // value back
  volatile int port;
  port = port;
}

// the compoiler can assume that an object accessed through one
// of the pointer parameters is not also accessed through
// the other
void copy(unsigned int n, int *restrict p, int *restrict q) {
  while (n-- > 0) {
    *p++ = *q++;
  }
}
