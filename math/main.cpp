#include <vector>
#include <string>
#include <iostream>
#include <sstream>

std::vector<std::string> Tokens = {};

class Lexer
{
    enum Operation
    {
        ADD = '+',
        SUB = '-',
        MULTI = '*',
        DIV = '/'
    };

public:
    static void heart(std::vector<std::string> tok)
    {
        std::string output;
        if (tok.empty())
        {
            output = "Empty Code";
        }
        else if (tok[0] == "so" && tok[2] == "=")
        {
            output = tok[1] + " : " + tok[3];
        }

        // Math coding

        else if (tok.size() == 3)
        {
            if (tok[1] == "+")
            {
                output = std::stoi(tok[0]) + std::stoi(tok[2]);
            }
            else if (tok[1] == "-")
            {
                output = std::stoi(tok[0]) - std::stoi(tok[2]);
            }
            else if (tok[1] == "*")
            {
                output = std::stoi(tok[0]) - std::stoi(tok[2]);
            }
            else
            {
                output = "Unrecognied Math";
            }

            std::cout << output << std::endl;
        }
        else
        {
            std::cout << "Undefined Error" << std::endl;
        }
    }
};

int main()
{
    std::string inputCode;
    std::cout << "Lexer Program" << std::endl;
    std::getline(std::cin, inputCode);

    std::stringstream stream(inputCode);

    std::string code;

    while (stream >> code)
    {
        Tokens.push_back(code);
    }

    Lexer::heart(Tokens);
}