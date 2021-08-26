#include <iostream>
#include <string>
#include <unistd.h>

using std::cin;
using std::cout;
using std::string;

unsigned shift_num(unsigned num, unsigned alphabet_size, int delta) {
  return (num + delta) % alphabet_size;
}

std::string ceasar(std::string text, std::string alphabet, int delta) {
  int pos;
  for (auto &c : text) {
    if ((pos = (int)alphabet.find(c)) == -1)
      continue;
    c = alphabet[shift_num(pos, alphabet.size(), delta)];
  }
  return text;
}

std::string ceasar_encode(std::string text, std::string alphabet,
                          int delta = 3) {
  return ceasar(text, alphabet, delta);
}

std::string ceasar_decode(std::string text, std::string alphabet,
                          int delta = 3) {
  return ceasar(text, alphabet, -delta);
}

int main(int argc, char const *argv[]) {
  std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
  unsigned delta = 3;

  // Read and encode line by line
  for (std::string line; std::getline(std::cin, line);) {
   std::cout << ceasar_encode(line, alphabet) << "\n";
  }

  return 0;
}
