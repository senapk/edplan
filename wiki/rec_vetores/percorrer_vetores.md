# Formas de percorrer vetores recursivamente

## Percorrendo um vector ou array utilizando ponteiros

- Vamos ver três casos de como percorrer um vetor ou vector de forma recursiva.
- O primeiro caso é passando o "início" do vetor e a quantidade de elementos.
- O segundo caso é passando o início do vetor, o tamanho do vetor e o índice que está sendo acessado.
- O terceiro caso é passando o "início" e o "fim" do vetor.

<!-- load percorrer.cpp fenced -->

```cpp
#include <iostream>
#include <vector>


// passamos o "inicio" do vetor e a quantidade de elementos
void percorre_usando_contagem(int *v, int n) {
    if (n == 0) { // se o tamanho for 0, chegou ao final
        return;
    }
    std::cout << *v << " ";
    percorre_usando_contagem(v + 1, n - 1); // avança o ponteiro e diminui o tamanho
}

// passamos o "inicio" do vetor, o tamanho do vetor e o índice
void percorre_usando_indice(int *v, int n, int i) {
    if (i == n) { // se o índice for igual ao tamanho do vetor, chegou ao final
        return;
    }
    std::cout << v[i] << " ";
    percorre_usando_indice(v, n, i + 1); // avança o índice apenas
}

void percorre_usando_ponteiros(int *inicio, int *fim) {
    if (inicio == fim) { // se o ponteiro de início for igual ao ponteiro de fim, chegou ao final
        return;
    }
    std::cout << *inicio << " ";
    percorre_usando_ponteiros(inicio + 1, fim); // avança o ponteiro
}

int main() {
    { // usando um array
        int v[] = {1, 2, 3, 4, 5};
        percorre_usando_contagem(v, 5);
        std::cout << std::endl;

        percorre_usando_indice(v, 5, 0);
        std::cout << std::endl;
        
        percorre_usando_ponteiros(v, v + 5);
        std::cout << std::endl;
    }
    {
        // usando um vector
        std::vector<int> v = {1, 2, 3, 4, 5};
        percorre_usando_contagem(v.data(), v.size());
        std::cout << std::endl;

        percorre_usando_indice(v.data(), v.size(), 0);
        std::cout << std::endl;
        
        percorre_usando_ponteiros(v.data(), v.data() + v.size());
        std::cout << std::endl;
    }
    return 0;
}
```

<!-- load -->

___

## Como percorrer recursivamente para gerar uma string

- Vamos utilizar um stringstream para gerar uma string com os elementos do vetor.
- Teremos uma função recursiva que irá percorrer o vetor e enviar os elementos para o stringstream.
- E uma função que o usuário chama que cria o stringstream e chama a função recursiva.
- No final, a função retira a vírgula e o espaço do começo da string e empacota o resultado nos colchetes.

<!-- load str.cpp fenced -->

```cpp
#include <iostream>
#include <sstream>
#include <vector>


// Essa será nossa função recursiva "interna"
// Ela que de fato faz a recursão
void __percorrer(std::stringstream &ss, int * begin, int * end) { 
    if (begin == end)
        return;
    ss << ", " << *begin; // envio pro fluxo ao invés de enviar pro cout
    __percorrer(ss, begin + 1, end);
}

// Essa é a função que o usuário chama
// Ela cria um stringstream e chama a função recursiva
// Quando a função recursiva termina, ela retira o , final e empacota o resultado
std::string to_string(int * begin, int * end) {
    if (begin == end) { // nao tem nenhum elemento
        return "[]";
    }
    std::stringstream ss;
    __percorrer(ss, begin, end);
    
    // a função .substr(2) remove a ", " do começo pegando a substring a partir do segundo caractere
    return "[" + ss.str().substr(2) + "]";    
}

int main() {
    { // usando um array
        int v[] = {1, 2, 3, 4, 5};
        int v_size = sizeof(v) / sizeof(v[0]);
        std::cout << to_string(v, v + v_size) << std::endl;
    }
    {
        // usando um vector
        std::vector<int> v = {1, 2, 3, 4, 5};
        std::cout << to_string(v.data(), v.data() + v.size()) << std::endl;
    }
    return 0;
}
```

<!-- load -->
