#include <iostream>

bool isRightTringle(int a, int b, int c){
    // ghzie bitagora
    return (a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a);
}

int main() {
    int a, b, c;

    // daryafte azlaee mosalas
    std::cout << "Azlaa'e mosalas ra vared konid (a, b, c): ";
    std::cin >> a >> b >> c;

    // aya ghaem olzavie ast?

    if (isRightTringle(a, b, c)) {
        std::cout << "in mosalas ghaem olzavie ast!" << std::endl;
    }   else {
            std::cout << "in mosalas ghaem olzavie niiist!!!" << std::endl;
        }
    }
