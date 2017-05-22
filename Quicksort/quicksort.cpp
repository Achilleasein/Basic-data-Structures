#include <iostream>
#include <cstdlib>

using namespace std;

const int n=6; 
int S[n]={7,3,5,9,8,1};

void quick_sort(int =0 ,int =0 );

int main()
{
   /* cout<<"dwse times gia ton pinaka\n" ;
    for (int i=0;i<6;i++)
    {
        cout<<"S["<<i+1<<"] = " ;
        cin>>S[i];
        cout<<endl;
    }*/    
    for (int i=0;i<6;i++) cout<<"THESI [" <<i<< "] :"<<S[i]<<endl;
    quick_sort(0,5);
    cout<<"\nAFTER QUICKSORT\n"<<endl;
    for (int i=0;i<6;i++) cout<<"THESI [" <<i<< "] :"<<S[i]<<endl;
    system("pause");
}

void quick_sort(int l ,int r )
{
int i=l;
int k=r+1;
int temp;
int piv = S[0];
while (i<k)
{
      do
      {
           i++;
      }while (S[i]<piv);
      do
      {
           k--;
      }while (S[k]>piv);
      if (k>i) 
      {
               temp=S[k];
               S[k]=S[i];
               S[i]=temp;
      }
}
temp=S[l];
S[l]=S[k];
S[k]=temp;
if (l<k-1) quick_sort(l,k-1);
if (i+1<r) quick_sort(i+1,r); 
}      
                
