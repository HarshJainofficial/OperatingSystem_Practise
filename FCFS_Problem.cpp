#include <bits/stdc++.h>
using namespace std;
int
main ()
{
  int ArrivalTime[] = { 0, 1, 2, 3, 6 };
  int BurstTime[] = { 2, 6, 4, 9, 12 };
  int CompletionTime[5];
  int TurnAroundTime[5];
  int WaitingTime[5];
  CompletionTime[0] = 2;
  TurnAroundTime[0] = 2;
  WaitingTime[0] = 0;
  int avg = 0 ;


for (int i = 1; i <= 5; i++) {
      CompletionTime[i] = BurstTime[i] + CompletionTime[i - 1];
   
}


  for (int i = 1; i <= 5; i++)
    {
      TurnAroundTime[i] = CompletionTime[i] - ArrivalTime[i];
   
    }


  for (int i = 1; i <= 5; i++)
    {
      WaitingTime[i] = TurnAroundTime[i] - BurstTime[i];
      avg += WaitingTime[i-1] ; 
    }
    
    
    
    
    cout <<'\n' ;
    
     cout << left << setw(5) << "AT" << left << setw(5) << "BT" << left
         << setw(5)<< "CT" << left << setw(5) << "TAT"  << left << setw(5) << "WT" << endl;
         
    for(int i = 1; i <=5 ; i++) {
         cout << left << setw(5) << ArrivalTime[i-1] << left << setw(5) << BurstTime[i-1] << left
         << setw(5)<< CompletionTime[i-1] << left << setw(5) << TurnAroundTime[i-1]  << left << setw(5) << WaitingTime[i-1] << endl;
        
        
    }
    
    
    cout << "Average of WaitingTime is : " << (float) avg/5 ;
   
    

}
