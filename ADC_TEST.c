#include "ADC_TEST.h"
#include <stdlib.h>
#include <float.h>

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
  float OutputMagnitudeValue=0;
   for(int index=0; size > index ; index++)
    {
       OutputMagnitudeValue= ((Max_Magnitude * SensorValue[index]) / 1023);       
       OutputMagnitudeValue -=(Max_Magnitude/2);
       MagnitudeOutput[index] = abs(OutputMagnitudeValue);
    }
}
