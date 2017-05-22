#ifndef FILE1_H
#define FILE1_H

#include <iostream>

#include <cstdlib>
#include <new>
using namespace std;
class Node{
private:
        int data;
        Node *left;
        Node *right;
public:        
        Node(int val)
        {
        data=val;
        left=NULL;
        right=NULL;
        }
        void setData(int dat){data=dat;}
        void setLeft(Node *lf){left=lf;}
        void setRight(Node *rt){right=rt;}
        int getData(){return data;}
        Node* getLeft(){return left;}
        Node* getRight(){return right;}   
        void print()
        {
               cout<<"\nnode"<<data<<" p:"<<this<<endl;
               if (getLeft()==NULL) cout<<"L=NULL";
               else cout<<"L:"<<getLeft()<<",L.data="<<left->getData()<<endl;
               if (getRight()==NULL) cout<<"R=NULL";
               else cout<<"R:"<<getRight()<<",R.data="<<right->getData();
        }
};

#endif

        
