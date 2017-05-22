#include <iostream>
#include <cstdlib>
#include <new>

#include "list.h"

int main()
{
    
    listnode *nd=new listnode(3);
    listnode *nd1 = new listnode(5,nd);
    listnode *nd2 = new listnode(7,nd1);
    listnode *nd3 = new listnode(9,nd2);

    singlelinkedlist *ls=new singlelinkedlist();
    cout<<"IS_EMPTY TESTING:";
    cout<<ls->isEmpty()<<endl;
    ls->setTail(nd);
    ls->setHead(nd3);
    cout<<"\n\nSET TAIL/HEAD TESTING"<<endl;
    ls->print();
    cout<<"IS_EMPTY TESTING"<<endl;
    cout<<ls->isEmpty();
    cout<<"\n\nINSERT_BACK TESTING(12)"<<endl;
    ls->insertBack(12);
    ls->print();
    cout<<"\nINSERT AFTER TESTING(15 AFTER 5)"<<endl;
    ls->insertAfter(nd1,15);
    ls->print();
    cout<<"\nDELETE TESTING(7)"<<endl;
    ls->ls_delete(nd2);
    ls->print();
    cout<<"SEARCH TESTING(22)"<<endl;
    listnode *nds=ls->search(22);
    nds->print();
    cout<<"\n\nSEARCH TESTING(3)"<<endl;
    nds=ls->search(3);
    nds->print();
    system("pause");

}


