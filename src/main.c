#include "pico/stdlib.h"

int main(void) {
    // Setup led
    const uint led = PICO_DEFAULT_LED_PIN;
    gpio_init(led);
    gpio_set_dir(led, GPIO_OUT);

    // Blink led forever
    while(true) {
        printf("Hello World!\n");
        uint state = gpio_get(led);
        gpio_put(led, !state);
        sleep_ms(500);
    }


    return 0;
}