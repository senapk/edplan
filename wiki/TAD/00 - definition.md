# Tipos Abstratos de Dados (TAD)

<img src="assets/ADT.jpg"/>

## Definição

Tipos Abstratos de Dados (TADs) são uma maneira fundamental de organizar e manipular dados em programação. Eles são uma <b>generalização de estruturas de dados que escondem a implementação e expõem apenas as operações permitidas</b>. O objetivo é separar a interface do usuário da implementação, permitindo que a estrutura de dados seja alterada sem afetar o código que a utiliza.

## Por que são utilizados?

<b>Os TADs são utilizados para abstrair a complexidade da implementação de estruturas de dados</b>, permitindo que os programadores se concentrem em como esses dados são manipulados, sem se preocupar com os detalhes de implementação. Eles definem operações que podem ser realizadas em dados e as propriedades dessas operações, promovendo a modularidade, a reutilização de código e a facilidade de manutenção.

## Exemplo prático: Controle remoto de uma televisão

Imagine que você tem uma televisão e um controle remoto. O controle remoto é uma interface que permite que você interaja com a televisão sem precisar entender os detalhes internos de como ela funciona.

### Interface do controle remoto

A interface do controle remoto pode ser definida com várias operações:

    ligar(): Liga a televisão.
    desligar(): Desliga a televisão.
    aumentarVolume(): Aumenta o volume da televisão.
    diminuirVolume(): Diminui o volume da televisão.
    mudarCanal(int canal): Muda para o canal especificado.

### Interface da televisão

O controle remoto se comunica com a televisão, que possui a implementação dessas operações:

```c++

#include <iostream>
using namespace std;

class Televisao {
public:
    virtual void ligar() = 0;
    virtual void desligar() = 0;
    virtual void aumentarVolume() = 0;
    virtual void diminuirVolume() = 0;
    virtual void mudarCanal(int canal) = 0;
    virtual ~Televisao() {}
};
```

### Implementação da televisão

Agora, vamos imaginar uma possível implementação da televisão. Note que os detalhes de como essas operações são realizadas estão encapsulados na classe <i>Televisao</i> e não são visíveis para o usuário do controle remoto.

```c++

class TelevisaoImplementacao : public Televisao {
private:
    bool ligada;
    int volume;
    int canal;

public:
    TelevisaoImplementacao() : ligada(false), volume(10), canal(1) {}

    void ligar() override {
        if (!ligada) {
            ligada = true;
            cout << "Televisao ligada" << endl;
        }
    }

    void desligar() override {
        if (ligada) {
            ligada = false;
            cout << "Televisao desligada" << endl;
        }
    }

    void aumentarVolume() override {
        if (ligada && volume < 100) {
            volume++;
            cout << "Volume: " << volume << endl;
        }
    }

    void diminuirVolume() override {
        if (ligada && volume > 0) {
            volume--;
            cout << "Volume: " << volume << endl;
        }
    }

    void mudarCanal(int canal) override {
        if (ligada) {
            this->canal = canal;
            cout << "Canal: " << this->canal << endl;
        }
    }
};
```

### Uso da Interface

O usuário interage com a televisão apenas através do controle remoto. Ele não precisa saber como a televisão aumenta o volume, muda o canal ou se liga e desliga. Ele só precisa usar os botões apropriados no controle remoto.

```c++

int main() {
    // Criando uma instância da televisão
    Televisao* tv = new TelevisaoImplementacao();

    // Usando o controle remoto para interagir com a televisão
    tv->ligar();
    tv->aumentarVolume();
    tv->mudarCanal(5);
    tv->diminuirVolume();
    tv->desligar();

    // Limpando a memória
    delete tv;

    return 0;
}
```


Nesse exemplo, o controle remoto representa a interface que define o que pode ser feito com a televisão (as operações disponíveis), e a televisão representa a implementação dessa interface.

Interface (Controle Remoto): Define as operações disponíveis (ligar, desligar, aumentar volume, etc.).
Implementação (Televisão): Define como essas operações são realizadas.

A abstração é a ideia de que você pode usar a interface (controle remoto) sem saber como as operações são implementadas na televisão. A encapsulação é o conceito de esconder os detalhes da implementação, expondo apenas o que é necessário através da interface.