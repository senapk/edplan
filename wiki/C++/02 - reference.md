## Referência

<div align = "center">
<img src = "assets/references-in-cpp.png" width="600" height="350" />
</div>

<br/>

Em C++, referências são um <b>tipo de variável que atua como um apelido para outra variável</b>. Elas são uma característica fundamental da linguagem e têm várias aplicações práticas, incluindo a melhoria da eficiência e a manipulação de dados sem cópia adicional.

### Definição e declaração

Uma referência é declarada usando o símbolo ```&``` após o tipo da variável:

```cpp
int a = 5;
int& ref = a; // ref é uma referência para a variável a
```

Neste exemplo, <i>ref</i> é uma referência para a variável <i>a</i>, ou seja, qualquer operação realizada em <i>ref</i> afeta diretamente <i>a</i>.