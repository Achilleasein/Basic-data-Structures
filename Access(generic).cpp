#include <iostream>
#include <ctime>
#include <cstdlib>

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
int left,right,next;


left =0;
right=n-1;

next=/*left;      (right+left)/2 */ (x-S[left])*(right-left)/(S[right]-S[left]);
cout<<"next ="<<next<<",right ="<<right<<",left ="<<left<<endl;
while(x!=S[next] && left<right)
{
if (x<=S[next]) right=next-1; 
else left=next+1;
next =/* left  (right+left)/2 */    (x-S[left])*(right-left)/(S[right]-S[left]);
cout<<"next ="<<next<<",right ="<<right<<",left ="<<left<<endl;

}
if (x==S[next]) cout<<"FOUND AT POS:"<<next<<endl;
else cout<<"NOT FOUND"<<endl;
}
