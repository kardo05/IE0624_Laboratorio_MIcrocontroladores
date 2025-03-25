#include <pic14/pic12f683.h>

void delay(unsigned int time);
unsigned char RandomNum();
//Funcion MAIN
void main(void) {
    TRISIO = 0b00010000;                    // COnfigurar como entrada el pin 4 e inicializarlo.
    GPIO = 0x00;

    unsigned char valor;

    while (1) {
        if (GP4 == 0) {                     // Condición de inicio donde al presionar boton
            valor = RandomNum();            // tome el numero random y este de acuerdo a su valor encienda la
            GPIO = 0x00;                    //salida correspondiente.

            switch (valor) {
                case 1:
                    GP0 = 1;
                    break;

                case 2:
                    GP1 = 1;
                    break;

                case 3:
                    GP2 = 1;
                    break;

                case 4:
                    GP0 = 1;
                    GP2 = 1;
                    break;

                case 5:
                    GP1 = 1;
                    GP2 = 1;
                    break;

                case 6:
                    GP0 = 1;
                    GP1 = 1;
                    GP2 = 1;
                    break;
            }

            delay(400);               // Delay para mostrar valor y limpiar registros.
            GPIO = 0x00;
        }
    }
}
// Funcion para retrasar la respuesta del sistema.
// Tomar el valor de time en milisegundos.
void delay(unsigned int time) {
    unsigned int i;
    unsigned int j;

    // Bucle para controlar el tiempo de retardo.
    for (i = 0; i < time; i++) {
        for (j = 0; j < 1400; j++); // Tiempo para observar comportamiento.
    }
}

// Funcion generadora de números pseudoaleatorios de desplazamiento de registro de retroalimentación lineal (LFSR) del 1 al 6.
unsigned char RandomNum() {
    static unsigned char lfsr = 0x07;
    unsigned char random_b;

    do {
        random_b = ((lfsr >> 0) ^ (lfsr >> 1)) & 1;
        lfsr = (lfsr >> 1) | (random_b << 2);
    } while (lfsr > 6);

    return lfsr;
}

