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
   std::cin >> text;
   std::cout << std::endl;
   std::cout << "Input the shift: ";
   std::cin >> shift;

   std::cout << encrypt_caesar(text, shift);

}
