#include<iostream>
using namespace std;

void swap(int a[], int i, int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

int main (){
	    cout<<"Sheikh Saifuddin Ahmed"<<endl;
    cout<<"0832CS191161"<<endl;

    int n;
    cout<<"enter no of processes : ";
    cin>>n;
    int p[n],priority[n],bt[n],wt[n],tat[n];
    cout<<"enter burst times "<<endl;
    for (int i=0; i<n; i++){
        cin>>bt[i];
        p[i]=i+1;
    }
  cout<<"enter priorities "<<endl;
    for (int i=0; i<n; i++){
        cin>>priority[i];
    }
   //selection sort to sort on the basis of priority i.e highest priority first
    for (int i = 0; i < n; i++)
    {
       int max =i;
       for (int j = i+1; j < n; j++)
       {
          if (priority[j]>priority[max])
          {
              max=j;
          }
          
       }
       swap(bt,i,max);
       swap(p,i,max);
       swap(priority,i,max);
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

   cout<<"process \t priority \t waiting time \t busttime \t TAT"<<endl;
   for (int i = 0; i < n; i++)
   {
cout<<p[i]<<"       \t "<<priority[i]<<"        \t "<<wt[i]<<"            \t "<<bt[i]<<"         \t "<<tat[i]<<endl;
   }
   
   cout<<""<<endl;
   cout<<"average waiting time : "<<awt<<endl;
   cout<<"average TAT : "<<awtat<<endl;
}
