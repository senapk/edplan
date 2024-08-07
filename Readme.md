
# Repositório de exercícios para Estrutura de Dados

## Intro <!-- group -->

Esse é um repositório que integra o conteúdo das atividades de Estrutura de Dados (ES) para os cursos:

- Ciência da Computação
- Engenharia de Computação
- Sistemas de Informação
- Engenharia de Software

Esse curso apresenta os fundamentos teóricos e atividades práticas para a compreensão de como funcionam as estruturas de dados básicas e como utilizá-las para resolver problemas computacionais.

A linguagem escolhida para o curso é o C++, pois permite uma compreensão melhor das estruturas de baixo nível, como gestão da memória e um nível de controle que permite controlar e compreender a complexidade dos algoritmos.

O prérequisito para o curso é ter conhecimento básico de programação e lógica de programação, em linguagem C, C++, ou Python.

Cada grande bloco é composto de várias grupos, chamados de missões. Uma missão representa a aquisição de um conhecimento ou habilidade específica. Cada missão é composta de várias atividades, chamadas de tarefas. Uma tarefa pode ser uma leitura, vídeo, exercício teórico ou prática. Algumas atividades de código estão no modelo de maratona, com casos de testes que avaliam se o código resolve o problema proposto.

Para baixar as atividades, marcar as atividades feitas e executar os códigos de teste, você pode utilizar o aplicativo [tko](https://github.com/senapk/tko).

O próprio aplicativo vai orientar a sequência sugerida na qual as atividades devem ser realizadas e o mínimo a ser obtido para avançar para as próximas missões.

Bom trabalho.

### Introdução ao C++ <!-- @intro -->

Nesse primeiro bloco, vamos aprender ou relembrar os conceitos básicos da linguagem C++. Antes de iniciarmos com exercícios próprios da disciplina de ED, precisamos fixar conceitos e a semântica de como trabalhar com:

- Entrada e Saída
- Seleção e Repetição
- Funções
- Ponteiros e Referência
- Arrays e Vectors
- [ ] [Sintaxe da linguagem](wiki/cpp_intro/introducao.md)
- [ ] [Ponteiros](wiki/cpp_intro/pointers.md)
- [ ] [Referência](wiki/cpp_intro/reference.md)
- [ ] [Ponteiros VS referência](wiki/cpp_intro/pointers_and_references.md)

### Bloco 2 de linguagem <!-- @cpp r:intro -->

- [ ] [Alocação dinâmica](wiki/cpp_intro/dynamic_allocation.md)
- [ ] [Templates](wiki/cpp_intro/templates.md)
- [ ] [Sobrecarga](wiki/cpp_intro/overload.md)
- [ ] [map e set](wiki/map_set.md)
- [ ] [templates](wiki/templates.md)

### Lambda, Iteradores, Algorithm <!-- @stl r:complexity opt -->

- [ ] [funções lambda](wiki/lambda.md)
  - como definir funções lambda para utilizar com funções como sort da stl
  - como definir funções lambda que enxergam variáveis do escopo
- [ ] [Iteradores](wiki/cpp_intro/iterators.md)
  - Utilizar iteradores para fazer e retornar resultado de busca
  - Utilizar iteradores para navegar no for
  - Utilizar iteradores junto com o std::next e std::prev
- [ ] [algorithm](wiki/algorithm.md)
  - Utilizar std::find, std::sort, std::find_if

### Biblioteca map e set <!-- @map_set r:stl opt -->

- [ ] [seu tad for-range](tad-for)
- [ ] [set e unordered_set](set.md)
- [ ] [map e unordered_map](map.md)

### TAD <!-- @tad r:complexity -->

- [ ] [Como fazer sobrecarga de cópia e referencia para métodos get](wiki/tad/sobrecarga.md)
- [ ] [L2 - @ponto - Implemente a classe ponto](https://github.com/qxcodeed/arcade/blob/master/base/ponto/Readme.md)
- [ ] [Sobrecarga de operadores em classes](wiki/tad/sobrecarga_operadores.md)
- [ ] [L3 - @fracao - Implemente a classe fração reduzida](https://github.com/qxcodeed/arcade/blob/master/base/fracao/Readme.md)

## Análise de Algoritmos <!-- @complexity r:intro -->

A análise de algoritmos é essencial para entender e avaliar a eficiência das soluções computacionais. Ela permite medir o desempenho dos algoritmos em termos de tempo e espaço, facilitando a comparação entre diferentes abordagens para a mesma tarefa. Compreender a complexidade computacional ajuda a tomar decisões informadas sobre qual algoritmo utilizar, otimizando recursos e melhorando a performance do sistema.

Estudar análise de algoritmos também revela os limites e aplicabilidades de cada solução, evitando o uso inadequado e promovendo a criação de algoritmos mais eficientes e inovadores. Esse conhecimento é crucial não apenas para a resolução de problemas reais, mas também para o desenvolvimento de software otimizado e para a preparação em entrevistas técnicas, onde a análise de algoritmos é frequentemente testada.

- [ ] [Complexidade de algoritmos](wiki/complexidade/complexidade.md)

## Recursão <!-- group -->

Nesse bloco, abordaremos o conceito de recursividade, uma técnica de programação que permite que uma função chame a si mesma para resolver problemas de forma mais elegante e eficiente. Entender recursividade pode ajudar a simplificar problemas complicados e tornar a programação mais fácil e eficaz.

### Recursão Base <!-- @recursion r:intro -->

- [ ] [Recursão](wiki/recursao/recursao.md)
- [ ] [L0 - @binomiais - Calculando coeficientes](https://github.com/qxcodeed/arcade/blob/master/base/binomiais/Readme.md)
- [ ] [L0 - @escada - De quantas maneiras podemos subir](https://github.com/qxcodeed/arcade/blob/master/base/escada/Readme.md)
- [ ] [L1 - @diagonal - Imprimindo um char por linha](https://github.com/qxcodeed/arcade/blob/master/base/diagonal/Readme.md)
- [ ] [L1 - @padroes1 - Descobrindo quantos bloquinhos](https://github.com/qxcodeed/arcade/blob/master/base/padroes1/Readme.md)
- [ ] [L1 - @sufixos - Imprimindo palavra em pedaços](https://github.com/qxcodeed/arcade/blob/master/base/sufixos/Readme.md)
- [ ] [L1 - @empilhamento de divisões](https://github.com/qxcodeed/arcade/blob/master/base/empilhamento/Readme.md)
- [ ] [L2 - @padroes2 - Descobrindo quantas pecinhas](https://github.com/qxcodeed/arcade/blob/master/base/padroes2/Readme.md)
- [ ] [L2 - @santo JM - O milagre de ficar pobre](https://github.com/qxcodeed/arcade/blob/master/base/santo/Readme.md)

### Recursão Extra <!-- @recursion_extra r:recursion -->
  
- [ ] [L2 - @fibonacci - Procriando coelhos](https://github.com/qxcodeed/arcade/blob/master/base/fibonacci/Readme.md)
- [ ] [L2 - @quadrado - Aragão calculando n ao quadrado](https://github.com/qxcodeed/arcade/blob/master/base/quadrado/Readme.md)
- [ ] [L2 - @bitcoin - Investindo em ativos digitais](https://github.com/qxcodeed/arcade/blob/master/base/bitcoin/Readme.md)
- [ ] [L3 - @fibonacci2 - Fazendo filhos e morrendo](https://github.com/qxcodeed/arcade/blob/master/base/fibonacci2/Readme.md)
- [ ] [L3 - @padroes3 - Contando pontos](https://github.com/qxcodeed/arcade/blob/master/base/padroes3/Readme.md)
- [ ] [L1 - @triangulo - Imprimindo ao contrário](https://github.com/qxcodeed/arcade/blob/master/base/triangulo/Readme.md)
- [ ] [L1 - @eh_primo - Retorna se é ou não é](https://github.com/qxcodeed/arcade/blob/master/base/eh_primo/Readme.md)
- [ ] [L2 - @enesimo - Gere o enesimo primo](https://github.com/qxcodeed/arcade/blob/master/base/enesimo/Readme.md)
- [ ] [L2 - @priminhos - Carrega a lista de primos](https://github.com/qxcodeed/arcade/blob/master/base/priminhos/Readme.md)

### Recursão com Vetores <!-- @recursion_vector r:recursion_extra -->

- [ ] [Como percorrer vetores recursivamente](wiki/rec_vetores/percorrer_vetores.md)
- [ ] [L2 - @treinando recursão com vetores](https://github.com/qxcodeed/arcade/blob/master/base/treinando/Readme.md)

### Recursão Visual <!-- @recursion_visual r:recursion opt -->

- [ ] [L2 - @queimada - Tocando fogo na floresta](https://github.com/qxcodeed/arcade/blob/master/base/queimada/Readme.md)
- [ ] [@fractais](wiki/fractais.md)

### Backtracking <!-- @backtracking r:recursion opt-->

- [ ] [L2 - @labirinto](https://github.com/qxcodeed/arcade/blob/master/base/labirinto/Readme.md)
- [ ] [L2 - @distancia](https://github.com/qxcodeed/arcade/blob/master/base/distancia/Readme.md)
- [ ] [L3 - @sudoku](https://github.com/qxcodeed/arcade/blob/master/base/sudoku/Readme.md)

## Ordenação <!-- group -->

Nesse bloco, abordaremos os algoritmos de busca e ordenação, duas técnicas essenciais na programação. Os algoritmos de busca são usados para encontrar elementos específicos dentro de uma estrutura de dados (localizar um nome específico em uma lista de contatos, por exemplo), enquanto os algoritmos de ordenação organizam esses elementos em uma sequência desejada (como organizar uma lista de livros por título em ordem alfabética). Compreender essas técnicas é crucial para manipular e acessar dados de forma eficiente em seus programas.

### Busca e Ordenação <!-- @sort r:recursion_extra -->

- [ ] [Algoritmos de busca](wiki/busca_ordenacao/busca.md)
- [ ] [Algoritmos básicos de ordenação](wiki/busca_ordenacao/ordenacao.md)

### Ordenação Recursiva <!-- @sort2 r:sort -->

- [ ] [Quick e Merge](wiki/ordenacao_recursiva/ordenacao_rec.md)
- [ ] [L2 - @merge - Criando um vetor simples e fazendo um merge $alpha](https://github.com/qxcodeed/arcade/blob/master/base/mergevet/Readme.md)

## Array <!-- group -->

Os vetores são estruturas de dados fundamentais que permitem acesso direto e rápido a qualquer elemento, tornando operações de leitura e escrita extremamente eficientes. Compreender como os vetores gerenciam a memória e os custos associados ao redimensionamento é essencial para tomar decisões informadas sobre seu uso. Além disso, os vetores são amplamente utilizados em diversas aplicações e são nativamente suportados por muitas linguagens de programação, o que facilita sua integração com outras partes do sistema. Para entender melhor o funcionamento da estrutura vamos trabalhar sua:

- Construção
- Utilização

## Array - Construindo <!-- @array r:tad -->

- [ ] [L2 - implementando vector com @ponteiros](https://github.com/qxcodeed/arcade/blob/master/base/ponteiros/Readme.md)
- [ ] [L2 - implementando vector com @classes](https://github.com/qxcodeed/arcade/blob/master/base/classes/Readme.md)

## Array - Problemas simples <!-- @array_basic r:intro opt -->

- [ ] [L1 - @buscas de strings](https://github.com/qxcodeed/arcade/blob/master/base/buscas/Readme.md)
- [ ] [L1 - @rotacoes em uma lista](https://github.com/qxcodeed/arcade/blob/master/base/rotacoes/Readme.md)
- [ ] [L2 - @princesa v1](https://github.com/qxcodeed/arcade/blob/master/base/princesa/Readme.md)
- [ ] [L2 - princesa @alternando](https://github.com/qxcodeed/arcade/blob/master/base/alternando/Readme.md)

## Array - Otimizando <!-- @array_advanced opt r:map_set -->

- [ ] [estressados 3 e 4](stress.md)
- [ ] [L2 - @apagando elementos de forma eficiente](https://github.com/qxcodeed/arcade/blob/master/base/apagando/Readme.md)

## List <!-- group -->

Agora estudaremos as listas encadeadas, estruturas de dados flexíveis e eficientes que podem crescer e diminuir de tamanho facilmente, adaptando-se às necessidades de armazenamento dos elementos. Diferentemente dos vetores, que têm um tamanho fixo ou precisam ser redimensionados de forma custosa, as listas encadeadas não utilizam um espaço de armazenamento contínuo na memória. Elas são representadas por uma sequência de elementos ligados entre si, podendo ser simplesmente ou duplamente encadeadas, lineares ou circulares. Além disso, as listas encadeadas servem como base para a implementação de diversas outras estruturas de dados, como pilhas, filas e grafos. Para entender melhor o funcionamento da estrutura vamos trabalhar sua:

- Construção
- Utilização

### List - Construindo <!-- @list r:recursion r:tad -->

- [ ] [L1 - implementando lista @ligada simples sem cabeça e rabo](https://github.com/qxcodeed/arcade/blob/master/base/ligada/Readme.md)

### List - Problemas simples <!-- @list_basic r:stl opt -->

- [ ] [L2 - @princesa-lista](https://github.com/qxcodeed/arcade/blob/master/base/princesa-lista/Readme.md)
- [ ] [L2 - @princesa-lista-2 princesa alternando com lista](https://github.com/qxcodeed/arcade/blob/master/base/princesa-lista-2/Readme.md)

### List - Problemas avançados  <!-- @list_advanced r:list_basic opt -->

- [ ] [L3 - Gerenciando a fila do @banco](https://github.com/qxcodeed/arcade/blob/master/base/banco/Readme.md)
- [ ] [L2 - @editor de texto](https://github.com/qxcodeed/arcade/blob/master/base/editor/Readme.md)
- [ ] [L4 - editor com @controlz](https://github.com/qxcodeed/arcade/blob/master/base/controlz/Readme.md)

## Pilha e Fila <!-- group -->

### Pilha - Resolvendo <!-- @stack r:array_basic r:recursion_extra opt -->

- [ ] [L2 - @queimando árvores usando pilha](https://github.com/qxcodeed/arcade/blob/master/base/queimando/Readme.md)
- [ ] [L2 - fugindo do labirinto @pilhado](https://github.com/qxcodeed/arcade/blob/master/base/pilhado/Readme.md)
- [ ] [L1 - @polonesa - Transforme da notação padrão para polonesa reversa](https://github.com/qxcodeed/arcade/blob/master/base/polonesa/Readme.md)

### Fila - Construindo  <!-- @queue r:array -->

- [ ] [L1 - @fila como duas pilhas](https://github.com/qxcodeed/arcade/blob/master/base/fila/Readme.md)

### Fila - Resolvendo <!-- @queue_use r:stack opt -->

- [ ] [L1 - Gerenciando @chaves de disputas usando uma fila](https://github.com/qxcodeed/arcade/blob/master/base/chaves/Readme.md)
- [ ] [L2 - @caminhao abastecendo](https://github.com/qxcodeed/arcade/blob/master/base/caminhao/Readme.md)
- [ ] [L3 - menor @caminho entre dois pontos - floodfill pathfinding](https://github.com/qxcodeed/arcade/blob/master/base/caminho/Readme.md)

## Árvores <!-- group -->

### Tree - Construindo <!-- @tree r:list -->

- [ ] [L2 - lendo uma árvore a partir de um @serial](https://github.com/qxcodeed/arcade/blob/master/base/serial/Readme.md)
- [ ] [L2 - mostrando a árvore @formatada](https://github.com/qxcodeed/arcade/blob/master/base/formatada/Readme.md)
- [ ] [L2 - @soma dos nós da árvore](https://github.com/qxcodeed/arcade/blob/master/base/soma/Readme.md)
- [ ] [L2 - @altura e profundidade da árvore](https://github.com/qxcodeed/arcade/blob/master/base/altura/Readme.md)
- [ ] [L2 - @arvore-path](https://github.com/qxcodeed/arcade/blob/master/base/arvore-path/Readme.md)
- [ ] [L2 - serialização @dividido](https://github.com/qxcodeed/arcade/blob/master/base/dividido/Readme.md)

### BST - Contruindo <!-- @bst r:tree r:sort2 -->

- [ ] [BST](bst.md)

### Em manutenção <!-- @maintenance r:tree -->

- [ ] [L2 - @matriz Soma e Multiplicação (em manutenção) | draft](https://github.com/qxcodeed/arcade/blob/master/base/matriz/Readme.md)
- [ ] [@subconjuntos](https://github.com/qxcodeed/arcade/blob/master/base/subconjuntos/Readme.md)
- [ ] [L1 - @rodando recursão com vetores | student](https://github.com/qxcodeed/arcade/blob/master/base/rodando/Readme.md)
- [ ] [@escada2](https://github.com/qxcodeed/arcade/blob/master/base/escada2/Readme.md)
- [ ] [Implemente o @mdc recursivo](https://github.com/qxcodeed/arcade/blob/master/base/mdc/Readme.md)
