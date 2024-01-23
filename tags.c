int main() {
  struct s {};

  struct s v; // instance of struct s
  struct s *v_p; // pointer to struct s

  enum day { sun, mon, tue, wed, thu, fri, sat };
  enum day tomorrow = wed; // it is

  enum status { ok, fail };

  typedef struct ss { int x; } t;

  struct ss ss;
  t s2;

  struct tnode {
    int count;
    struct tnode *left;
    struct tnode *right;
  };

  typedef struct node node;
  struct node {
    int count;
    node *left;
    node *right;
  } n;
}

