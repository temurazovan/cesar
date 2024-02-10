#include <iostream>

std::string encrypt_caesar(std::string text, int shift) {
    std::string result;

    for (char symbol: text) {
        if (!(isupper(symbol) || islower(symbol))) {
            result += symbol;
            continue;
        }

        char l = isupper(symbol) ? 'A' : 'a';
        result += char((symbol - l + shift) % 26) + l;
    }

    return result;
}

int main() {
    std::string text;
    int shift;

    std::cout << "Input the text: ";
    std::getline(std::cin, text);


    std::cout << std::endl;
    std::cout << "Input the shift: ";
    std::cin >> shift;
    std::cout << std::endl;
    std::cout << encrypt_caesar(text, shift);

}
