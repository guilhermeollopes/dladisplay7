# Retlex Diplay 7
![rxdisplay7_logoheader](https://user-images.githubusercontent.com/72569409/101259669-eff4dc80-3708-11eb-97a4-3e672051a6bf.png)
## Para que serve?
 A biblioteca Display 7 da Retlex, foi feita com o intuito de ajudar todos que querem utilizar display de 7 segmentos em seus projetos, com esta biblioteca você pode usar o display de 7 segmentos com quantos digitos desejar de forma facíl e rapída.
## Quais os métodos que posso utilizar?
 Existem alguns metodos que você pode usar, e ela vem se desenvolvendo mais e mais, para você conseguir fazer o que quiser com esta biblioteca de forma simples. Para isto veja os metodos abaixo para ultilizar a biblioteca.

 * **pinSegment:** Para informar ao arduino quais pinos estão conectados cada segmento do display, você terá que usar o pinSegment. Ele informará a biblioteca em qual pino está cada segmento. A ordem para informar os quais são os pinos é: A, B, C, D, E, F, G, PD. Também é com ele que você irá informar a ele qual o nome que você deseja dar para o seu display.
 *Exemplo: pinSegment display1 (2, 3, 4, 5, 6, 7, 8, 9);*

 * **isAnode:** Caso o seu display sejá anodo comum, você deve ultilizar este metodo para informar a biblioteca que o seu display é anodo comum. Este metodo deve ser usando na parte do *void setup* do seu código.
 *Exemplo: display1.isAnode();*

 * **setNum:** Você usa o setNum para informar a biblioteca o que é para ela escrever no display. Com o setNum você irá informar um número para aparecer no display. Você pode usar escolher um número de 0 a 9.
 *Exemplo: display1.setNum(6);*
 
 * **setOff:** O setOff serve para limpar o display, desligando todos os LEDS do display.
 *Exemplo: display1.setOff();*

 * **setPoint:** O setPoint serve para definir se é para ligar ou desligar o ponto decimal do display.
 *Exemplo: led1.setPoint(true);*
