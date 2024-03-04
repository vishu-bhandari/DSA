#include<iostream>
#include <queue>
#include "treenode.hpp"
using namespace std;

treenode<int>* takeInputlevelWise(){
    int rootData;
    cout<<"Enter root Data"<<endl;
    cin>>rootData;

    treenode<int>* root= new treenode<int>(rootData);

    queue<treenode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() !=0){
        treenode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout<<"enter no. of children of"<<front-> data<<endl;

        int numchild;
        cin>>numchild;
        for(int i=0 ;i<numchild ;i++){
            int childdata;
            cout<<"enter"<<i<<"th child of "<<front->data<<endl;
            cin>>childdata;
            treenode<int>*  child = new treenode<int>(childdata);
            front->children.push_back(child);
            pendingNodes.push(child);

        }

    }
    return root;

}
treenode<int> *takeinput()
{
    int rootdata;
    cout << "enter data" << endl;
    cin >> rootdata;
    treenode<int> *root = new treenode<int>(rootdata);

    int n;
    cout << "enter no. of childrens of root data" << rootdata << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        treenode<int> *child = takeinput();
        root->children.push_back(child);
    }
    return root;

}

void printtree(treenode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ":";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printtree(root->children[i]);
    }
}

int numnodes(treenode<int>* root){
    if(root==NULL){
        return 0;
    }
    int ans=1;
    for(int i=0;i<root->children.size();i++){
        ans+=numnodes(root->children[i]);
    }
    return ans;
}

void printatlevelk(treenode<int>* root,int k){
    if(root==NULL){
        return;
    }
    if(k==0){
        cout<<root->data<<endl;
        return;
    }
    for(int i=0;i<root->children.size();i++){
        printatlevelk(root->children[i],k-1);
            }
}

void preorder(treenode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    for(int i=0;i<root->children.size();i++){
        preorder(root->children[i]);
    }
}

void deletetree(treenode<int>* root){
    for(int i=0;i<root->children.size();i++){
        deletetree(root->children[i]);
    }
    delete root;
}




// 1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0
int main()
{
    // treenode<int> *root = new treenode<int>(1);
    // treenode<int> *node1 = new treenode<int>(2);
    // treenode<int> *node2 = new treenode<int>(3);
    // root->children.push_back(node1);
    // root->children.push_back(node2);

    treenode<int>* root=takeInputlevelWise();
    printtree(root);
    cout<<"num:"<<numnodes(root)<<endl;
    cout<<"level 2:"<<endl;
    printatlevelk(root,2);
    preorder(root);
    deletetree(root);
}