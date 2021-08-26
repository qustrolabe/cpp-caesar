#include <iostream>
#include <string>
#include <unistd.h>

using std::cin;
using std::cout;
using std::string;

unsigned shift_num(unsigned num, unsigned alphabet_size, unsigned delta)
{
    return (num + delta) % alphabet_size;
}

std::string ceasar(std::string text, std::string alphabet, unsigned delta)
{
    int pos;
    for (auto &c : text)
    {
        if ((pos = (int)alphabet.find(c)) == -1) continue;
        c = alphabet[shift_num(pos, alphabet.size(), delta)];
    }
    return text;
}

int main(int argc, char const *argv[])
{
    std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    unsigned delta = 3;

    std::string text;
    // text =  = "Hello World123Hello 123 Hell ABC sdq";
    std::cin>>text;
    std::cout << text << "\n";
    std::cout << ceasar(text, alphabet, delta) << "\n";

    return 0;
}
