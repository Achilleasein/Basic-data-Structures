#ifndef FILE2_H
#define FILE2_H

#include <iostream>
#include "node.h"
#include <cstdlib>
#include <new>
using namespace std;

class Bin_tree
{
 private:     
      Node *root;
 public:
        Bin_tree(){root=NULL;}
        void setRoot(Node *rt){root=rt;}
        Node* search(int value)
        {
              bool flag=false;
             Node *tmp=root;
             Node *tmpParent=NULL;
             while (tmp!=NULL)
             {
                   if(tmp->getData()==value){cout<<"Found value ("<<value<<") at node:"<<tmp<<endl;flag=true; return tmp;}
                   else if (tmp->getData()<value)
                   {   
                       tmpParent=tmp;
                       tmp=tmp->getRight();
                   }
                   else//if (tmp->getData()>value)
                   {
                       
                       tmpParent=tmp;
                       tmp=tmp->getLeft();
                   }
             }
             if (flag==false){cout<<"NOT Found value ("<<value<<")"<<endl;return tmpParent;}
        }
        void insert(int value)
        {
             if (root==NULL) {
                             root=new Node(value);
                             return ;
                             }
             Node *nd=this->search(value);
             if (nd->getData()==value){return ;}
             if (nd->getData()<value)nd->setRight(new Node(value));
             else nd->setLeft(new Node(value));
             return;
        }
};
#endif                                                 
