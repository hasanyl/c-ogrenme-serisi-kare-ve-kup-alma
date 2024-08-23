#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*dairenin cevresini ve alanini bulan program
    1- İhtiyacımız olan variables ve tanımla
    2- Variables type bul
    3- Formülü tanımla
    Alan = PI*r*r
    Çevre = 2*PI*r
    4- Kullanıcıdan verileri al
    5- islem yap
    6- Cikti ver
    */

//    float r,circumference, area;
//    // Degismeyen sabit icin const kullanabiliriz. constant = sabit
//    const float PI = 3.1415;
//    printf("Dairenin yaricapini girin :");
//    scanf("%f", &r);
//    circumference = 2*PI*r;
//    area = PI*r*r;
//
//    printf("Circumference of circle :%f\n", circumference);
//    printf("Area of circle:%f", area);

    float myNumber1, myNumber2, myNumber3, myNumber4;
    myNumber1 = 0.0;
    myNumber2 = 0.0;
    myNumber3 = 0.0;
    myNumber4 = 0.0;

    printf("Enter four numbers:");
    scanf("%f %f %f %f", &myNumber1,&myNumber2,&myNumber3,&myNumber4);

    printf("The number\t\t");
    printf("Square of number\t\t");
    printf("Cube of number\t\t\n");

    printf("----------\t\t");
    printf("----------\t\t\t");
    printf("----------\t\t\n");

    //Variables tanimlama
    float squareNumber1,squareNumber2,squareNumber3,squareNumber4;
    float cubeNumber1,cubeNumber2,cubeNumber3,cubeNumber4;

    //Variables deger atama
    //Kare alma ve atama
    squareNumber1 = myNumber1*myNumber1;
    squareNumber2 = myNumber2*myNumber2;
    squareNumber3 = myNumber3*myNumber3;
    squareNumber4 = myNumber4*myNumber4;

    //Kup alma ve atama
    cubeNumber1 = myNumber1*myNumber1*myNumber1;
    cubeNumber2 = myNumber2*myNumber2*myNumber2;
    cubeNumber3 = myNumber3*myNumber3*myNumber3;
    cubeNumber4 = myNumber4*myNumber4*myNumber4;

    // Sonuclari yazdirma
    printf("%f\t\t", myNumber1);
    printf("%f\t\t\t", squareNumber1);
    printf("%f\t\t\n", cubeNumber1);

    printf("%f\t\t", myNumber2);
    printf("%f\t\t\t", squareNumber2);
    printf("%f\t\t\n", cubeNumber2);

    printf("%f\t\t", myNumber3);
    printf("%f\t\t\t", squareNumber3);
    printf("%f\t\t\n", cubeNumber3);

    printf("%f\t\t", myNumber4);
    printf("%f\t\t\t", squareNumber4);
    printf("%f\t\t\n", cubeNumber4);

    printf("\n\n");


    return 0;
}
