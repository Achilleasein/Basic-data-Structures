#include <iostream>
#include <cstdlib>

using namespace std;
void heapsort(double [],int);


int main()
{
    double A[]={3,8,2,1,4,9,7};
    cout<<"INIT:"<<endl;
    for (int i=0;i<7;i++) cout<<"A["<<i<<"] = "<<A[i]<<endl;
    cout<<endl;
    heapsort(A,7);
    cout<<"AFTER:"<<endl
    ;
    for (int i=0;i<7;i++) cout<<"A["<<i<<"] = "<<A[i]<<endl;
    system("pause");
}   


void heapsort(double S[] ,int n)
{
int l,r,j,k;
double s;
double temp=0;
 
 l = (n/2)+1;

 r = n-1;

 
 while (r>0)
	{
	if (l>0)
		{
		l=l-1;
		j=l;
		}
	else
		{
		temp=S[0];
		S[0]=S[r];
		S[r]=temp;
		r=r-1;
		j=0;
		}
	
	s=S[j];
	while (2*j<=r)
	{
		k=2*j;
		if (k<r && S[k]<S[k+1]) k=k+1;
		if (s<S[k])
		{
			S[j]=S[k];
			j=k;
		}
		else goto E;
	}	
	E:S[j]=s;
}	
} 
