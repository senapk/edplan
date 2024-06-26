# Algoritmos de Ordenação Recursiva: Merge Sort e Quick Sort

## MergeSort

O Merge Sort é um algoritmo de ordenação baseado na técnica de Divisão e Conquista. A ideia principal é dividir a lista em duas metades, ordenar cada metade recursivamente e, em seguida, combinar (merge) as duas metades ordenadas em uma única lista ordenada.

### Passos do Merge Sort

1. Divida a lista ao meio.
2. Ordene recursivamente cada metade.
3. Intercale (merge) as duas metades ordenadas para obter a lista final ordenada.

### Funcionamento do Merge

![Gif MergeSort](./assets/merge.gif)

### Implementação do Merge em C++

<!-- load ./assets/merge.cpp fenced -->
<!-- load -->

## QuickSort

O Quick Sort é outro algoritmo de ordenação baseado na técnica de Divisão e Conquista. A principal ideia do Quick Sort é escolher um elemento como pivô, particionar a lista de modo que todos os elementos menores que o pivô fiquem à esquerda e todos os elementos maiores que o pivô fiquem à direita, e então ordenar as sublistas recursivamente.

### Passos do Quick Sort

1. Escolha um elemento como pivô.
2. Particione a lista em duas sublistas: uma contendo elementos menores que o pivô e outra contendo elementos maiores que o pivô.
3. Ordene recursivamente as sublistas.

### Funcionamento do Quick

![Gif do QuickSort](./assets/quick.gif)

### Implementação do Quick em C++

<!-- load ./assets/merge.cpp fenced -->
<!-- load -->
