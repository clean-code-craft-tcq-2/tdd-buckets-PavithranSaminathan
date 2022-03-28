#include "ADC_TEST.h"
#include <stdlib.h>
#include  <stdio.h>
#include <float.h>

int* CalculationADCValue(int * InputSensorValue, int *ActualADCValue ,int size)
{
  
  float calculateADCValue;
  
  for(int index=0; size > index ; index++)
  {
    calculateADCValue =  (((float)10* (float)InputSensorValue[index]) / (float)4094 )+ (float)0.5;
    ActualADCValue[index]= (int)calculateADCValue;
    printf("\n %f   ",calculateADCValue);
     printf("%d %d\n",InputSensorValue[index] ,ActualADCValue[index]);
  }
  
  return ActualADCValue;
}
