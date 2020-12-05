#include <rxdisplay7.h> // Importação da biblioteca.


pinSegment display1 (2, 3, 4, 5, 6, 7, 8, 9); // Definindo os pinos na ordem (A, B, C, D, E, F, G, pD)

void setup() {
  
}

void loop() {
  display1.setNum(6); // Definindo qual número é para aparecer no display
}
