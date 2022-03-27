#include "ADC_TEST.h"
#include <STDLIB.H>

int* CalculationADCValue(int * InputSensorValue,int size)
{
  int *ActualADCValue = malloc(8 * sizeof(int));
  int calculateADCValue;
  
  for(int index=0; size > index ; index++)
  {
     calculateADCValue =  ((10 / 4094) * InputSensorValue[index]) + 0.5;
     ActualADCValue[index]=calculateADCValue;
  }
  
  return ActualADCValue;
}
