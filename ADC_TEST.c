#include "ADC_TEST.h"
#include <stdlib.h>
#include  <stdio.h>

int* CalculationADCValue(int * InputSensorValue,int size)
{
  int ActualADCValue[size];
  int calculateADCValue;
  
  for(int index=0; size > index ; index++)
  {
     calculateADCValue =  ((10 * InputSensorValue[index])/4094) + 0.5;
     ActualADCValue[index]=calculateADCValue;
    printf("%d\n",calculateADCValue);
     printf("%d\n",InputSensorValue[index]);
  }
  
  return ActualADCValue;
}
