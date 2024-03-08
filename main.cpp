#include <iostream>
#include <unicode/unistr.h>
#include <unicode/uchar.h>

int main() {
    std::string input;
    std::getline(std::cin, input);

    icu::UnicodeString unicodeInput = icu::UnicodeString::fromUTF8(input);

    for (int32_t i = 0; i < unicodeInput.length(); ++i) {
        UChar32 c = unicodeInput[i];
        icu::UnicodeString originalChar(c);
        std::string originalCharUTF8;
        originalChar.toUTF8String(originalCharUTF8);
        std::cout << "'" << originalCharUTF8 << "' is ";
        if (u_charType(c) == U_UPPERCASE_LETTER || 
            u_charType(c) == U_LOWERCASE_LETTER ||
            u_charType(c) == U_TITLECASE_LETTER || 
            u_charType(c) == U_MODIFIER_LETTER || 
            u_charType(c) == U_OTHER_LETTER)
        {
            std::cout << "Alphabetic" << std::endl;
        } else {
            std::cout << "Not alphabetic" << std::endl;
        }
    }
    return 0;
}