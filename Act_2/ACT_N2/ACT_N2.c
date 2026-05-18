#include <stdio.h>
#include <stdbool.h>
#include "pico/stdlib.h"


/**
 * @brief Programa principal
*/
int main(void) {
  // Inicializo el USB
  stdio_init_all();
  // Demora para esperar la conexion
  sleep_ms(1000);

  // Inicializacion de GPIO con gpio_init()
  gpio_init(27);
  gpio_init(6);
  gpio_set_dir(6, GPIO_OUT);
  gpio_set_dir(27, GPIO_IN);

  gpio_pull_down(27);


  /* Habilito el GPIO25 (LED)
  gpio_init(PICO_DEFAULT_LED_PIN);
  GPIO25 como salida
  gpio_set_dir(PICO_DEFAULT_LED_PIN, GPIO_OUT);
  Configuracion de entrada/salida con gpio_set_dir()

  */

 bool h = 0;
  while (true) {
    h = gpio_get (27);
    //gpio_put(6 , 1);
    if (h==1){
        gpio_put(6,1);
    }
    else if(h==0){
        gpio_put(6,0);
    }
    /* Prendo LED
    gpio_put(PICO_DEFAULT_LED_PIN, 1);

    */

    // Resolver logica para GPIO20 -> GPIO6

    // Resolver logica para GPIO21 -> GPIO7

    // Resolver logica para GPIO22 -> GPIO8

  }
  return 0;
}