#include <stdio.h>
float  CelciTOFahren(float c);
int main() {
     printf("enter  the temperature in celcius:");
     float c;
    scanf("%f",&c);
    float  f= CelciTOFahren(c);
    printf("Temperature in Fahrenheit is %.2f F", f);

    return 0;
}
float  CelciTOFahren(float c){
    float f=c*9/5+32;
    return f;

}