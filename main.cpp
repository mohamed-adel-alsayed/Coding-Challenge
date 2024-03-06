#include <iostream>
#include <cwctype>
#include <locale>

bool isAlphabetic(wchar_t character) {
    return std::iswalpha(character) != 0;
}
int main() {
    setlocale(LC_ALL, "en_US.UTF-8"); // Set the locale to support UTF-8
    
    std::wstring text;
    std::getline(std::wcin, text);

    for (wchar_t i : text)
    {
        if (isAlphabetic(i)) {
            std::wcout << L"The character is alphabetic. : " << i << std::endl;
        } else {
            std::wcout << L"The character is not alphabetic. : " << i << std::endl;
        }
    }
    return 0;
}
