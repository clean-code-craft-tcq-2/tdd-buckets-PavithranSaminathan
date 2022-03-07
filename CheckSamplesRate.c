#include "CheckSamplesRate.h"

int ReadNoofSamples(int FromRange , int ToRange , int TotalSamples)
{
  int TotalCurrentSamples = sizeof(CurrentSamples)/CurrentSamples[0];
  for(int i=0;i<TotalCurrentSamples;i++)
  {
    if(FromRange <= CurrentSamples[i] && ToRange >= CurrentSamples[i])
    {
      TotalSamples++;
    }
  }
  return TotalSamples;
}
