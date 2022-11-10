int power(int base, int n);

int power(int base, int n) {
  int i, p;

  p = 1;
  for (i = 1; i <= n; i = i + 1) {
    p = p * base;
  } 
  return p;
}
