#include<bits/stdc++.h>
using namespace std;
int g = 0;
struct node
{
int d;node*l,*r;
}*root = NULL;
node* newnode(int d)
{
node*n = new node;
n->d = d;
n->l = n->r = NULL;

}
void ex(node*r)
{
if(r!=NULL)
{
if(r->d == p || r->d == q)
{g=1;return;
}
ex(r->l);
ex(r->r);

}
}
void p(node*r)
{
if(r!=NULL)
{
cout<<r->d<<" ";
ex(r->l);
int l = g;
g=0;
ex(r->r);
int r = g;g = 0;
if(l&r)
{

}
p(r->l);
p(r->r);
}

}
int main()
{
root= newnode(1);
root->l = newnode(2);
root->r = newnode(3);
root->l->l = newnode(4);
root->l->r = newnode(5);
root->r->l = newnode(6);
root->r->r = newnode(7);
p(root);
}
