//problem with return
//correct procedure trouble transfering correct result to main


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <typeinfo>

using namespace std;
int k;
int Find(vector<int> &,int);

int main()
{
    int io=0;
    
    vector <int> vm;
    vm.push_back(2);
    vm.push_back(6);
    vm.push_back(3);
    vm.push_back(10);
    vm.push_back(12);
    vm.push_back(5);
    vm.push_back(4);
    vm.push_back(6);

    for (int i = 0 ; i<vm.size() ;i++ ) cout<<"THESI ["<< i << "]:" <<vm[i]<<endl; 
    
    cout<<"dwse i:";
    cin>>k;
    io=Find(vm,k);
    system("pause");
    }

int Find(vector<int> &v,int i)
{
    int r=0+rand()%v.size();
    int s=v[r];

    vector <int>v1;
    vector <int>v2;
    for (int j=0;j<v.size();j++)
    {
        if (v[j]<s) v1.push_back(v[j]);
        if (v[j]>s) v2.push_back(v[j]);
    }

        if (v1.size()==i-1)
        {cout<<k<<"os kata seira = "<<s; return static_cast <int>  (s);}
        
        else if (v1.size()<i-1)
        Find(v2,i-v1.size()-1);
        else Find(v1,i);       
    
    
}   
