#include "ADC_TEST.h"
#include <stdlib.h>
#include <float.h>
#include <stdio.h>

int* CalculationADCValue(int * InputSensorValue, int *ActualADCValue ,int size)
{
  float calculateADCValue;
  for(int index=0; size > index ; index++)
  {
    calculateADCValue =  (((float)10* (float)InputSensorValue[index]) / (float)4094 )+ (float)0.5;
    ActualADCValue[index]= (int)calculateADCValue;
  }
  return ActualADCValue;
}


void AnalogConvertToCurrentMagnitude(int * SensorValue ,int *MagnitudeOutput ,int size)
{
  int Max_Magnitude=30;
  int OutputMagnitudeValue=0;
   for(int index=0; size > index ; index++)
    {
       OutputMagnitudeValue= ((((Max_Magnitude/1023))*(SensorValue[index])) -(Max_Magnitude/2));
       MagnitudeOutput[index] = abs(OutputMagnitudeValue);
     printf("\ndata= %d  %d", OutputMagnitudeValue ,MagnitudeOutput[index]);
    }
}
