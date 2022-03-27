#include "ADC_TEST.h"

int* CalculationADCValue(int * InputSensorValue,int size)
{
  int *ActualADCValue;
  int calculateADCValue;
  
  for(int index=0; size > index ; index++)
  {
     calculateADCValue =  ((10 / 4094) * InputSensorValue[index]) + 0.5;
     ActualADCValue[index]=calculateADCValue;
  }
  
  return ActualADCValue;
}
