#include <iostream>

int main()
{
    int number;

    std::cout << "Digite um número para verificar se ele pertence à sequẽncia de Fibonacci: ";
    std::cin >> number;

    int i{0}, j{1};
    while (j < number)
    {
        int newNumber = i + j;
        i = j;
        j = newNumber;
    }

    if (number == 0 || j == number)
    {
        std::cout << "O número inserido faz parte da sequência de Fibonacci!" << std::endl;
        return 0;
    }

    std::cout << "O número inserido não faz parte da sequência de Fibonacci!" << std::endl;
    return 0;
}
