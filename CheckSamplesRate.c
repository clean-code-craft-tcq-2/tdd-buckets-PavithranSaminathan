#include "CheckSamplesRate.h"
//const int CurrentSamples[7] = {3, 3, 5, 4, 10, 11, 12};
int ReadNoofSamples(int FromRange , int ToRange,int CurrentSamples[])
{
  int TotalSamples=0;
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
