bool is_vowel(char c);
bool is_cons(char c);

bool is_vowel(char c) {
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
	  c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

bool is_cons(char c) {
  return (!is_vowel(c) && ((c >= 97 && c <= 122) || (c >= 65 && c <= 90)));
}
