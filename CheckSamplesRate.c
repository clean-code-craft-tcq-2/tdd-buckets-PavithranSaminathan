#include "CheckSamplesRate.h"
#include <stdio.h>

#define INVALID_RANGE 0xFF
#define STATUS_OK     0x01

int CurrentSamples[7] = {3, 3, 5, 4, 10, 11, 12};
int TotalSamples=sizeof(CurrentSamples)/sizeof(CurrentSamples[0]);

void PrintonConsole(char * InputData)
{
  printf("%s",InputData);
}

char* SendDataToPrint(int FromRange , int ToRange ,int TotalOccurance,char *PrintData )
{
  sprintf(PrintData,"%d-%d,%d",FromRange,ToRange,TotalOccurance);
  PrintonConsole(PrintData);
  return PrintData;
}
int CheckValidRange(int* Status, int FromRange , int ToRange)
{
  if(FromRange>=0 && ToRange >=0)
  {
    if(FromRange < ToRange)
    {
      *Status = (int)STATUS_OK;
    }
    else
    {
      *Status = (int)INVALID_RANGE;  
    }
  }
  else
  {
    *Status = (int)INVALID_RANGE;
  }
}
void CountSamples(int FromRange,int ToRange ,int *NoofOccurance )
{
   for(int i=0;i<TotalSamples;i++)
    {
      if((FromRange <= CurrentSamples[i]) && (ToRange >= CurrentSamples[i]))
      {
     
        (*NoofOccurance)++;
           printf("f %d=\n",*NoofOccurance);
      }
      else
      {
        /*do nothing */
      }
    }
}

char* ReadNoofSamples(int FromRange , int ToRange , char *Output)
{
  int NoofOccurance=0;
  int Status;
  CheckValidRange(&Status,FromRange,ToRange);
   if(Status != INVALID_RANGE)
    {
      CountSamples(FromRange,ToRange ,&NoofOccurance );
    }
   else
    {
      NoofOccurance=(int)INVALID_RANGE;
    }
  SendDataToPrint(FromRange ,ToRange ,NoofOccurance, Output);
  printf("\n ot = %s",Output);
  return Output;
}
