#include <stdio.h>

#define TC_DOLAR_GTQ 7.81      //tipo de cambio: 1 USD = 7.81 GTQ
#define TC_EURO_GTQ 8.45       //tipo de cambio: 1 EUR = 8.45 GTQ
#define TC_DOLAR_EURO_GTQ 0.92 //tipo de cambio: 1 USD = 0.92 EUR

int main() {
    int opcion;     //variable de entero
    float cantidad; //variable con punto decimal 

    printf("------- BIENVENIDO AL CONVERSOR DE MONEDA --------\n");
    printf("       1. Convertir de Dolares a Quetzales\n");
    printf("       2. Convertir de Quetzales a Dolares\n");
    printf("       3. Convertir de Quetzales a Euros\n");
    printf("       4. Convertir de Euros a Quetzales\n");
    printf("       5. Convertir de Dolares a Euros\n");
    printf("       6. Convertir de Euros a Dolares\n");
 printf("Ingrese su opcion: ");
    scanf("%d", &opcion);   //para capturar la respuesta del usuario y asignarle el nombre de la variable

    switch(opcion){
        case 1:
            printf("Ingrese la cantidad de Dolares que desea convertir a Quetzales: ");
            scanf("%f", &cantidad);
            printf("%.2f USD equivale a %.2f GTQ\n", cantidad, cantidad * TC_DOLAR_GTQ);
            break;
        case 2:
            printf("Ingrese la cantidad de Quetzales que desea convertir a Dolares: ");
            scanf("%f", &cantidad);
            printf("%.2f GTQ equivale a %.2f USD\n", cantidad, cantidad / TC_DOLAR_GTQ);
            break;
        case 3:
            printf("Ingrese la cantidad de Quetzales que desea convertir a Euros: ");
            scanf("%f", &cantidad);
            printf("%.2f GTQ equivale a %.2f EUR\n", cantidad, cantidad / TC_EURO_GTQ);
            break;
        case 4:
            printf("Ingrese la cantidad de Euros que desea convertir a Quetzales: ");
            scanf("%f", &cantidad);
            printf("%.2f EUR equivale a %.2f GTQ\n", cantidad, cantidad * TC_EURO_GTQ);
            break;
        case 5:
            printf("Ingrese la cantidad de Dolares que desea convertir a Euros: ");
            scanf("%f", &cantidad);
            printf("%.2f USD equivale a %.2f EUR\n", cantidad, cantidad * TC_DOLAR_EURO_GTQ);
            break;
        case 6:
            printf("Ingrese la cantidad de Euros que desea convertir a Dolares: ");
            scanf("%f", &cantidad);
            printf("%.2f EUR equivale a %.2f USD\n", cantidad, cantidad / TC_DOLAR_EURO_GTQ);
            break;
        default:
            printf("opcion invalida!\n");
            break;
    }
    return 0;
}