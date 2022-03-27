#include "ADC_TEST.h"
#include <stdlib.h>
#include  <stdio.h>

int* CalculationADCValue(int * InputSensorValue,int size)
{
  int ActualADCValue[size];
  float calculateADCValue;
  
  for(int index=0; size > index ; index++)
  {
     //calculateADCValue =  ((10 * InputSensorValue[index])/4094) + 0.5;
    calculateADCValue =  ((10*InputSensorValue[index])/4094) + 0.5;
    ActualADCValue[index]=(int)calculateADCValue;
    printf("\n %d   ",calculateADCValue);
     printf("%d\n",InputSensorValue[index]);
  }
  
  return ActualADCValue;
}
