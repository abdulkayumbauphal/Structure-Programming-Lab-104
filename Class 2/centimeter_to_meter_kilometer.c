/*
    Course      : Structure Programming Lab
    Course Code : CSE 104
    Lab       : 02
    Program     : centimeter_to_meter_&_kilometer
*/

#include <stdio.h>

int main() {
    float c;
    printf("Enter length in Centimeter : ");
    scanf("%f",&c);
    float meter=c/100.0;
    float km=meter/1000.0;
    printf("length in Meter : %.2f\n",meter);
    printf("length in KiloMeter : %.2f\n",km);
    return 0;
}