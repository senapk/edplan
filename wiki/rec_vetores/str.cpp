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