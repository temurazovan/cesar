#include <iostream>

std::string encrypt_caesar(std::string text, int shift)  {
    std::string result;
    for (int i = 0; i < text.length(); i++) {
        result += text[i] + shift;
    }
    return result;
}

int main() {
    std::string text;
    int shift;

    std::cout << "Input the text: ";
    std::getline(std::cin, text);

    for (char symbol: text) {
        if (!((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z') || symbol == ' ')) {
            std::cout << "Incorrect text!";
            return 0;
        }

    }

    std::cout << std::endl;
    std::cout << "Input the shift: ";
    std::cin >> shift;
    shift %= 26;
    std::cout << std::endl;
    std::cout << encrypt_caesar(text, shift);

}
