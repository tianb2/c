int main() {
  union {
    struct {
      int type;
    } n;
    struct {
      int type;
      int intnode;
    } ni;
    struct {
      int type;
      double doublenode;
    } nf;
  } u;

  u.nf.type = 1;
  u.nf.doublenode = 3.14;
}
