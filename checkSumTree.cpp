// sum tree
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->right = NULL;
        this->left = NULL;
    }
};
node *buildtree(node *root)
{
    int data;
    cout << "Enter the data " << endl;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for left of " << data << endl;
    root->left = buildtree(root->left);
    cout << "Enter data for right of " << data << endl;
    root->right = buildtree(root->right);
    return root;
}
pair<bool, int> tree(node *root)
{
    if (root == NULL)
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }
    if (root->left == NULL && root->right == NULL)
    {
        pair<bool, int> p1 = make_pair(true, root->data);
        return p1;
    }
    pair<bool, int> left = tree(root->left);
    pair<bool, int> right = tree(root->right);
    pair<bool, int> ans;
    bool leftans = left.first;
    bool rightans = right.first;
    bool sum = (left.second + right.second) == root->data;
    ans.second = 2 * root->data;
    if (leftans && rightans && sum)
    {
        ans.first = true;
    }

    else
    {
        ans.first = false;
    }
    return ans;
}

bool isSumTree(node *root)
{

    return tree(root).first;
}
int main()
{
    node *root = NULL;

    buildtree(root);

    if (isSumTree(root))
    {
        cout << "Given binary tree is a sum tree" << endl;
    }
    else
    {
        cout << "Given binary tree is not a sum tree" << endl;
    }
}