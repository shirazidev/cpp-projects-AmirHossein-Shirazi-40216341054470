#include <iostream>
#include <cmath>

int convertToDecimal(int number, int base) {
    int decimalNumber = 0;
    int power = 0;

    while (number != 0) {
        int digit = number % 10; // raqam kamine ra migirad
        decimalNumber += digit * pow(base, power);
        power++;
        number /= 10; // hazfe raghame kamine az adad
    }
    return decimalNumber;
}


int main() {
    int number, base;

    // daryafte adad va mabnaye an az user

    std::cout << "adadi bar mabnaye N vared konid:  ";
    std::cin >> number;

    std::cout << "mabna ra vared konid <N>";
    std::cin >> base;

    // tabdil be mabnaye 10 va show result

    int decimalNumber = convertToDecimal(number, base);
    std::cout << "adade shoma dar mabnaye 10 barabar ast ba :   " << decimalNumber << std::endl;

    return 0;
}