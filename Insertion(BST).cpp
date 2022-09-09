#include <iostream>
using namespace std;
class node {
    public:
    node*left;
    node*right;
    int info;
};

class BST {
    public:
    node *root;

BST()
{
    root = NULL;
}

void insert(int val){
    node*n,*temp,*par=NULL;
    n= new node;
    n->info =val;
    n->left =n->right=NULL;

if (root == NULL){
    root = n;
    return;
}
else {
    temp = root ;
    while (temp!=NULL)
     {
        if(val < temp ->info)
        {
            par =temp;
            temp=temp->left;
        }
        else {
            par=temp;
            temp=temp->right;
        }
  }
                    if (val>par ->info)
        {
            par->right =n;
        }
        else {
            par->left=n;
        }
    }
}    

void inorder(node *ptr)
{
   if (ptr==NULL)
   return;
   else 
   inorder(ptr->left);
   cout<< ptr->info<<" ";
   inorder(ptr->right);
}
};
int main()
{
    BST b1;
    b1.insert (10);
    b1.insert (8);
    b1.insert (9);
    b1.insert(56);
    b1.inorder(b1.root);
    
}       

    
