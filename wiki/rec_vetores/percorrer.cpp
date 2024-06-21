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
