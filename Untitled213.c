//creating the bst tree
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*left;
struct node*right;


}*node;
struct node*insert(struct node*,int);
struct node*display(struct node*);
int main()
{
node=insert(node,80);
insert(node,60);
insert(node,40);
insert(node,20);
insert(node,10);
display(node);

}
struct node*insert(struct node*node,int num)
{
struct node*temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=num;
temp->left=temp->right=NULL;
if(node==NULL)
{
node=temp;
return node;


}
else if(node->data>num)
{

node->left=insert(node->left,num);

}
else if(node->data<num)
{
node->right=insert(node->right,num);

}








}
struct node*display(struct node*node)
{
if(node){display(node->left);
printf("%d",node->data);
display(node->right);}
//linkedlist






}
