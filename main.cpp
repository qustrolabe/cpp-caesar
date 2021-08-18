#include <iostream>
#include <string>
#include <unistd.h>

int main(int argc, char const *argv[]) {
  char alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
                     'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
                     'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                     'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
                     's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
  unsigned delta = 3;
  std::string text = "Hello World";

  signed int fd[2];
  static char buf[50];

  std::string lineInput;
  while (std::cin >> lineInput) {
	  std::cout << lineInput;
  }

  return 0;
}
