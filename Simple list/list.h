#ifndef LISTNODE_H
#define LISTNODE_H

#include <iostream>

using namespace std;



class listnode
{
      private:
               int value;
              listnode *next;
      public :
             listnode(int val){value=val;next=NULL;}
             listnode(int val,listnode *nextnode)
             {
                        value=val;
                        next= nextnode;
             }
             int getValue(){return value;}
             listnode* getNext(){return next;}
             void setValue(int val){value=val;}
             void setNext(listnode *nx){next=nx;}
             void print()
             {
                  if (this!=NULL) cout<<"value"<<getValue()<<endl;
                  else cout<<"NULL";
                  }     

};    

class singlelinkedlist
{
private:
listnode *head;
listnode *tail;
int size;

public :
singlelinkedlist()
{
head=NULL;
tail=NULL;
size=0;
}
void setSize(int s){size = s;}
void setHead(listnode* h){head = h;}
void setTail(listnode* t){tail = t;}
int getSize(){return size;}

bool isEmpty()
{
     if (head==NULL) return true;
     else return false;
}

listnode* first(){return head;}
listnode* last(){return tail;}
void insertBack(int val)
     {
     if (isEmpty()){head=tail=new listnode(val); size++;}
     else 
          {
          tail->setNext(new listnode(val));
          size++;
          tail = tail->getNext();
          }
}
void insertAfter(listnode* nd,int val)
{
if (isEmpty()){head = tail=new listnode(val,NULL);size++;}
else	
{
	if (nd==NULL) return;
	listnode *newnd = new listnode(val,nd->getNext());
	nd->setNext(newnd);
	size++;
	if(nd==tail) tail=newnd;
}
}	

void     ls_delete(listnode *nd)
{
if (nd==NULL) return;
listnode* iter =head; 
listnode* iterprev=head;

while(iter!=nd)
{
iterprev = iter ;
iter = iter->getNext();
iterprev->setNext(iter->getNext());////////////////////
size--;
}
}
listnode* search(int val)
{
listnode *iter = head;
while(iter->getValue()!= val) 
{
 iter = iter->getNext();
 if (iter==NULL) return NULL;
}
return iter;
}
void print()
{
     int count=0;
     listnode *tmp;
     tmp=first();
     while (tmp->getNext()!=NULL)
     {
           if (count==0) cout<<"HEAD:";
           tmp->listnode::print();
           tmp=tmp->getNext();
           count++;
     }
     cout<<"TAIL:";
     tmp->print();
     cout<<endl;
}          

};     
#endif
             
