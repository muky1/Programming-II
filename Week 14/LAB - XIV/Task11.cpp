#include <iostream>

void generateParantheses(int open, int close, std::string size) {
    if(close == 0 && open == 0) {
        std::cout << size << std::endl;
    }
    if (open > 0) {
        generateParantheses(open - 1, close, size + "(");
    }
    if (close > open) {
        generateParantheses(open, close - 1, size + ")");
    }
}

int main () {

    int open = 3;
    int close = 3;
    std::string string;

    std::cout << "The possible combinations are: " << std::endl;
    generateParantheses(open, close, string);

    return 0;
}