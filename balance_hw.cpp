#include <iostream>
#include <stack>
#include <string> 

bool isBalanced(std::string prompt) {   //function to check if the prompt is balanced
    std::stack<char> stack;             //stack for the parentheses to be held in

    for (char k : prompt) {
        if(k == '(') {                  //check if character is ( if so, push onto stack
            stack.push(k);
        } else if (k == ')') {          //Check if character is ) if so, check if stack is empty
            if (stack.empty()) {        //Check if stack is empty, if so return false, ending loop
                return false;
            }
            stack.pop();                //pop top of stack
        }
    }

    return stack.empty();               //return empty stack
}

int main() {
    std::string prompt;                 //prompt user enters
    std::cout << "Enter an expression: ";
    std::cin >> prompt;                 //Enter prompt

    if (isBalanced(prompt)) {
        std::cout << "Balanced" << "\n";
    } else {
        std::cout << "Not Balanced" << "\n";
    }
    return 0;
}
