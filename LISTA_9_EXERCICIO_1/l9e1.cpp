#include <iostream>
#include <string>
#include <list>

#include "Lexico.h"
#include "Sintatico.h"

int cont {-1};

int main() {
    std::string line;
    Lexico lex = Lexico();
    Sintatico sin = Sintatico(lex);

    int token {-1};
    // Leitura dos parâmetros
    while(std::getline(std::cin, line)) {
        if(std::cin.good()) line += '\n';
        sin.setInput(line);
        try {
            sin.S();
            if(++cont) std::cout << "\n";
            std::cout << "CADEIA ACEITA";
        } catch
    }
}
