#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

void ACCESS(int);
const int n = 6;
int S[n] = {10,20,30,40,50,60};

int main()
{
int x;
for (int i = 0 ; i<6 ;i++ ) cout<<"THESI ["<< i << "]:" <<S[i]<<endl; 
cout<<endl<<"Dwse x = ";
cin>>x;
ACCESS(x);

system("pause");
}

void ACCESS(int x)
{

int left,right,next,size,i;

left = 0;
right=n-1;
size=right-left+1;
next= size*(x-S[left])/(S[right]-S[left]);
while (x!=S[next])
{

i=0;
size=right-left+1;
if (x>=S[next])
{
while (x>S[next+i*int(sqrt(size))-1]) i++;
right=next+i*int(sqrt(size));
left=next+(i-1)*int(sqrt(size));
}
else if(x<S[next])
{
while (x<S[next-i*int(sqrt(size))+1]) i++;
right=next-(i-1)*int(sqrt(size));
left=next-i*int(sqrt(size));
}
next=left+((right-left+1)*(x-S[left])/(S[right]-S[left]))-1;
}
if (x=S[next])	cout<<"found at position:"<<next<<endl;
else cout<<"not found"<<endl;
}
