## Outros TADs: Map, set e unordered_set

### Map

O map é uma estrutura de dados que armazena pares de chave-valor, similar a um dicionário. Cada chave é única e mapeia para um único valor. A ordenação das chaves não é garantida.

```c++

#include <map>

int main() {
  std::map<std::string, int> nomes_idades;

  nomes_idades["Ana"] = 30;
  nomes_idades["João"] = 25;
  nomes_idades["Pedro"] = 40;

  for (auto par : nomes_idades) {
    std::cout << par.first << ": " << par.second << std::endl;
  }

  return 0;
}
```

#### Custo computacional

* **Complexidade de acesso:** *O(log n)*
* **Complexidade de inserção:** *O(log n)*
* **Complexidade de remoção:** *O(log n)*

### Set

O set é uma estrutura de dados que armazena um conjunto de elementos únicos. A ordenação dos elementos não é garantida.

```c++

#include <set>

int main() {
  std::set<int> numeros = {1, 3, 5, 2, 4};

  for (int numero : numeros) {
    std::cout << numero << " ";
  }

  std::cout << std::endl;

  return 0;
}
```

#### Custo computacional

* **Complexidade de acesso:** *O(log n)*
* **Complexidade de inserção:** *O(log n)*
* **Complexidade de remoção:** *O(log n)*

### Unordered_set

O unordered_set armazena coleções de elementos de forma desordenada e eficiente. Ele se destaca pela velocidade de busca e inserção, tornando-o ideal para cenários onde o acesso rápido a elementos específicos é crucial.

```c++

#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
  // Criando um unordered_set de strings
  unordered_set<string> nomes = {"Ana", "João", "Maria", "Pedro"};

  // Verificando se um elemento existe
  if (nomes.find("Carlos") != nomes.end()) {
    cout << "Carlos está no conjunto!" << endl;
  } else {
    cout << "Carlos não está no conjunto." << endl;
  }

  // Inserindo um novo elemento
  nomes.insert("Bruno");

  // Imprimindo todos os elementos (ordem não definida)
  for (const string& nome : nomes) {
    cout << nome << " ";
  }

  return 0;
}
```

* **Complexidade de busca/inserção/remoção:** *O(1)*