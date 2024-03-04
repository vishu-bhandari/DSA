#include <iostream>
#include "treenode.hpp"
using namespace std;

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

int main()
{
    // treenode<int> *root = new treenode<int>(1);
    // treenode<int> *node1 = new treenode<int>(2);
    // treenode<int> *node2 = new treenode<int>(3);
    // root->children.push_back(node1);
    // root->children.push_back(node2);

    treenode<int>* root=takeinput();
    printtree(root);
}