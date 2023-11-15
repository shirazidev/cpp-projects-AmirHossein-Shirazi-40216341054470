#include <iostream>

bool isPerfectNum(int num) {
    int sum = 0;

    // barresie maqsom elayh haye kamtar az khodesh
    for (int i = 1; i < num; ++i) {
        if (num % i == 0) {
            sum += i;

        }
    }
    return sum == num;
}

int main() {
    int num;

    // daryafte adad az user:

    std::cout << "Enter a Number:  ";
    std::cin >> num;

    // check if its perfect
    if (isPerfectNum(num)) {
        std::cout << num << "  adadi kamel ast  " << std::endl;
    }   else {
        std::cout << num << " adadi kamel niiiiist!!!" << std::endl;
    }
    return 0;
}