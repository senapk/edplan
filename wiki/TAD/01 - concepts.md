## Principais conceitos em TADs (encapsulamento, modularidade e interface)

### Encapsulamento

Encapsulamento é a prática de <b>esconder os detalhes internos de uma classe e expor apenas o que é necessário</b> através de métodos públicos. Isso protege os dados e evita acesso indevido ou modificação direta.

```c++

class Encapsulamento {
private:
    int dadoPrivado; // Variável de membro privada, não pode ser acessada diretamente de fora da classe

public:
    // Método público para definir o valor de 'dadoPrivado'
    void setDado(int valor) {
        dadoPrivado = valor;
    }

    // Método público para obter o valor de 'dadoPrivado'
    int getDado() {
        return dadoPrivado;
    }
};

int main() {
    Encapsulamento obj;
    obj.setDado(10); // Define o valor usando o método set
    std::cout << "Dado: " << obj.getDado() << std::endl; // Obtém o valor usando o método get
    return 0;
}
```

### Modularidade

Modularidade é a <b>divisão de um programa em módulos independentes que podem ser desenvolvidos, testados e mantidos separadamente</b>. Cada módulo possui uma funcionalidade específica e comunica-se com outros módulos através de interfaces bem definidas.

#### Modulo1.h

```c++

#ifndef MODULO1_H
#define MODULO1_H

// Declaração da função do módulo
void funcaoModulo1();

#endif // MODULO1_H

// Arquivo: Modulo1.cpp
#include "Modulo1.h"
#include <iostream>

// Implementação da função do módulo
void funcaoModulo1() {
    std::cout << "Funcao do Modulo 1" << std::endl;
}
```

#### main.cpp

```c++

#include "Modulo1.h"

int main() {
    funcaoModulo1(); // Chama a função do módulo
    return 0;
}
```

### Interface

Interface é a <b>definição dos métodos e propriedades que uma classe ou módulo oferece para interação com outras partes do programa</b>. Em C++, as interfaces são frequentemente definidas usando classes ou funções públicas.

```c++

// Classe abstrata que define a interface
class Interface {
public:
    // Método abstrato, deve ser implementado pelas subclasses
    virtual void metodoAbstrato() = 0;
};

// Classe que implementa a interface
class Implementacao : public Interface {
public:
    // Implementação do método abstrato
    void metodoAbstrato() override {
        std::cout << "Implementacao do metodo abstrato" << std::endl;
    }
};

int main() {
    Implementacao obj;
    obj.metodoAbstrato(); // Chama a implementação do método abstrato
    return 0;
}
```