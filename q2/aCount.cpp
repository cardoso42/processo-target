#include <iostream>

int main()
{
    std::string string;
    int aCounter{0};

    std::cout << "Insira uma string: ";
    std::getline(std::cin, string);

    for (auto& i : string)
    {
        if (i == 'a' || i == 'A')
        {
            aCounter++;
        }
    }

    if (aCounter == 0)
    {
        std::cout << "A string informada não possui a letra 'a'" << std::endl;
        return 0;
    }

    std::cout << "A string informada possui " << aCounter << " ocorrências da letra 'a'" << std::endl;
    return 0;
}