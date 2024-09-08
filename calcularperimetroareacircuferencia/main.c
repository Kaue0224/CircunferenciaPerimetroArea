#include <stdio.h>

typedef struct varchar varchar;

typedef struct string string;

int main(void) {

    float raio;
    float pi = 3.14159265359;
    float perimetro,area;

    printf("digite o raio: ");
    scanf("%f",&raio);

    perimetro = 2*pi*raio;
    area = pi*(raio*raio);

    printf("\nperimetro: %0.3f",perimetro);
    printf("\narea: %0.3f",area);


    return 0;
}