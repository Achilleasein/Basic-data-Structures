#include <iostream>
#include <cstdlib>

using namespace std;

void Insert_Sort(int [],int);
const int size = 6;

int main()
{
int Arr[size] = {1,20,6,12,2,3};
cout<<"BEFORE SORTING:"<<endl;
for (int i=0;i<size;i++) cout<<Arr[i]<<",";
cout<<endl;
Insert_Sort(Arr,size);
cout<<"\nAFTER SORTING:"<<endl;
for (int i=0;i<size;i++) cout<<Arr[i]<<",";
system("pause");
}

void Insert_Sort(int S[],int n)
{

int key,i,j;
for (j = 1; j < n; j++)
{
	key = S[j];
	cout<<"\nj = "<<j<<",key = "<<key<<endl;
	i = j-1;
    
	while(i > 0 && key < S[i] )
	{        
 cout<<"while i= "<<i<<">0"<<" and key ="<<key<<"<S[i] = "<<S[i]<<endl;
	S[i+1] = S[i];

	i = i-1;
	cout<<"\n     while:";
    for (int k=0;k<size;k++) cout<<S[k]<<",";
	}
	cout<<"\nS["<<i+1<<"]="<<key<<endl;
	S[i+1] = key ;	
	for (int k=0;k<size;k++) cout<<S[k]<<",";
	cout<<endl;
}

}
