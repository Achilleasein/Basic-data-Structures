#include "node.h"
#include "bin_tree.h"
int main()
{
    cout<<"NODE TEST:"<<endl;
    Node *ndr=new Node(7);
    
    Node *nd1=new Node(5);
    Node *nd1_l=new Node(2);
    Node *nd1_r=new Node(6);
    
    nd1->setLeft(nd1_l);
    nd1->setRight(nd1_r);
    
    
    Node *nd2=new Node(10);
    Node *nd2_l=new Node(8);
    Node *nd2_r=new Node(11);
   
    nd2->setLeft(nd2_l);
    nd2->setRight(nd2_r);
    
    
    
    ndr->setLeft(nd1);
    ndr->setRight(nd2);
    ndr->print();
    cout<<endl;
    nd1->print();
    cout<<endl;
    nd2->print();
    cout<<endl;
    system("pause");
    cout<<"BIN_TREE TEST:"<<endl;
    
    Bin_tree *tree=new Bin_tree();
    tree->setRoot(ndr);
    
    cout<<"SEARCH TEST:"<<endl;
    Node *src = tree->search(6);
    Node *src1 = tree->search(11);
    Node *src2 = tree->search(7);
    Node *src3 = tree->search(10);  
    
    cout<<"INSERT TEST"<<endl;
    tree->insert(4);
    tree->insert(9);
   ndr->print();
    nd1->print();
    nd2->print();
    nd1_l->print();
    nd1_r->print();
    nd2_l->print();
    nd2_r->print();
    //src->print();
    
    system("pause");
    //Bin_tree tree(ndr);
//node swtst ,me dieythinseis deiktwn kati de paeei kala
}

