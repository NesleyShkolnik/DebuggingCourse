#include <iostream>
#include <cstring>

struct Password
{
    char value[16];
    bool incorrect;
    Password() : value(""), incorrect(true)
    {
    }
};

int main()
{
    std::cout << "Enter your password to continue:" << std::endl;
    Password pwd;

    std::cin.getline(pwd.value, sizeof(pwd.value));

    if (!strcmp(pwd.value, "********"))
        pwd.incorrect = false;
    else
    {
        pwd.incorrect = true;
    }

    if (!pwd.incorrect)
    {
        std::cout << "Congratulations\n";
        std::cout << "The bug occurs because `strcmp` compares two strings of equal length, "
            "and if the entered string is exactly `********` (8 characters), the comparison works as expected. "
            "However, if the input string is different, the comparison fails, which allows the system to bypass the password check."
            << std::endl;
    }
    else
    {
        std::cout << "Incorrect password\n";
    }

    return 0;
}
