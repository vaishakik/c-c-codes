
#include <stdio.h>
#include <stdlib.h>

struct bt
{
    int data;
    struct bt *left,*right;
};
typedef struct bt node;

/*
 *
 */

void insert(node **tree,int val)
{
    node *temp;
    if(!(*tree))
    {
        temp=(node*)malloc(sizeof(node));
        temp->left=temp->right=NULL;
        temp->data=val;
        *tree=temp;
        return ;

    }
    if(val<((*tree)->data))
    {
        insert(&((*tree)->left),val);

    }
    else if(val>((*tree)->data))
    {
      insert((&(*tree)->right),val);
    }
}


void preorder(node *tree)
{
    if(tree)
    {

        printf("%d\t",tree->data);
        preorder(tree->left);
        preorder(tree->right);


    }
}

void inorder(node *tree)
{

    if(tree)
    {


        inorder(tree->left);
        printf("%d\t",tree->data);
        inorder(tree->right);


    }
}

void postorder(node *tree)
{
    if(tree)
    {


        postorder(tree->left);

        postorder(tree->right);
         printf("%d\t",tree->data);


    }
}
void search(node *tree,int val)
{
    if(tree){

    if(val<(tree->data))
    {
        search((tree->left),val);
    }
    else if(val>(tree->data))
    {
      search((tree->right),val);
    }
    else if(val==(tree->data))
    {
         printf("enter no is found");
    }
    else
         printf("enter no is not found");
    }}

int main(int argc, char** argv) {
    node *root =NULL;
    insert(&root,5);
    insert(&root,3);
    insert(&root,10);
    insert(&root,15);
    insert(&root,11);
    insert(&root,33);
    printf("\n preorder is\n");
    preorder(root);
    printf("\n inorder is\n");
    inorder(root);
    printf("\n postorder is\n");
    postorder(root);
    printf("\nenter the no to be searched\n");
    int n;
    scanf("%d",&n);
    search(root,n);
    printf("\ndepth is %d\n",depth(root)-1);

    return (EXIT_SUCCESS);
}
int depth(node *tree){
    int lmax,rmax;
    if(tree)
    {
        lmax=depth(tree->left);
        rmax=depth(tree->right);

    }
    if(lmax>rmax)
    {
        return(lmax+1);

    }
    else
        return(rmax+1);
}

