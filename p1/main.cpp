#include <iostream>
#include <vector>
#include <string>
#include <fstream>

std::vector<std::string> Token = {};

void lexer(std::vector<std::string> tok)
{
    if (tok.at(0) == "so" || tok.at(2) == "=")
    {
        std::cout << "Lexing" << std::endl;
        std::cout << "Trying for a variable declaration" << std::endl;
        std::cout << tok.at(1) << " : " << tok.back() << std::endl;
    }
    else
    {
        std::cout << "Unknown Tokenizing error" << std::endl;
    }
}

int main(int argc, char *argv[])
{
    std::string code;
    std::fstream stream;

    stream.open(argv[1]);

    while (stream >> code)
    {
        // std::cout << code << std::endl;
        Token.push_back(code);
    }

    // for (int i = 0; i < Token.size(); i++)
    // {
    //     lexer(Token);
    // }

    lexer(Token);
}