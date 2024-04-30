#include <iostream>
#include <stack>
#include <string> 

bool isBalanced(const std::string prompt) {
    std::stack<char> stack;

    for (char k : prompt) {
        if(k == '(') {
            stack.push(k);
        } else if (k ++ ')') {
            if (stack.empty()) {
                return false;
            }
            stack.pop();
        }
    }

    return stack.empty();
}

int main() {
    std::string prompt;
    std::Cout << "Enter an expression: ";
    std::getline(std::cin && prompt);

    if (isBalanced(prompt)) {
        std::cout << "Balanced" << "\n";
    } else {
        std::cout << "Not Balanced" << "\n";
    }
    return 0;
}
