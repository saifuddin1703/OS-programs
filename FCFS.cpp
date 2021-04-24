#include<iostream>
using namespace std;

int main (){
    cout<<"Sheikh Saifuddin Ahmed"<<endl;
    cout<<"0832CS191161"<<endl;
    
    int n;
    cout<<"enter no of processes : ";
    cin>>n;
    int bt[n],wt[n],tat[n];
    cout<<"enter burst times "<<endl;
    for (int i=0; i<n; i++){
        cin>>bt[i];
    }
    cout<<""<<endl;
   int totalwt=0,totaltat=0;
   wt[0]=0;
   for (int i =1 ; i < n; i++)
   { 
      wt[i]= wt[i-1]+bt[i-1];
      totalwt+=wt[i];
   }
   
   for (int i = 0; i < n; i++)
   {
       tat[i]= wt[i]+bt[i];
       totaltat+=tat[i];
   }
   
   int awt=totalwt/n,awtat=totaltat/n;

   cout<<"process \t waiting time \t busttime \t TAT"<<endl;
   for (int i = 0; i < n; i++)
   {
cout<<i+1<<"       \t "<<wt[i]<<"            \t "<<bt[i]<<"         \t "<<tat[i]<<endl;
   }
   
   cout<<""<<endl;
   cout<<"average waiting time : "<<awt<<endl;
   cout<<"average TAT : "<<awtat<<endl;
}