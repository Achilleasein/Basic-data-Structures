#include <iostream>
#include <cstdlib>

using namespace std;

const int size=8 ;
void Bubble_sort(int [],int);
int main()
{
    int N[8] = {3,6,1,11,32,13,16,15};
    cout<<"before sorting:"<<endl;
    for(int i=0;i<size;i++) cout<<N[i]<<",";
    Bubble_sort(N,size);
    cout<<"after sorting:"<<endl;
    for(int i=0;i<size;i++) cout<<N[i]<<",";
    system("pause");
}

void Bubble_sort(int S[],int n)
{  

int temp,i,j;
int up = n;

	while (up>0)
	{
	j=0;
	for (i=0;i<=up-1;i++)
	{
		if (S[i]>S[i+1])
		{
			temp=S[i];
			S[i]=S[i+1];
			S[i+1]=temp;
			j++;
		}
	}
	if (j==0) return;
	up--;
	}
}  
