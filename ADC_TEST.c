#include "ADC_TEST.h"
#include <stdlib.h>
#include  <stdio.h>
#include <float.h>

int* CalculationADCValue(int * InputSensorValue,int size)
{
  int ActualADCValue[size];
  float calculateADCValue;
  
  for(int index=0; size > index ; index++)
  {
    calculateADCValue =  ((10*InputSensorValue[index]) / 4094);
    
    ActualADCValue[index]= calculateADCValue;
    printf("\n %f   ",calculateADCValue);
     printf("%d %d\n",InputSensorValue[index] ,sizeof(int));
  }
  
  return ActualADCValue;
}
