#include <iostream>

using namespace std;

struct Tree
{
    int data;
    Tree *left, *right;
};

void showTree(Tree *&);
void addTree(int, Tree *&);

int main() {
    Tree *myTree = NULL;

    srand(time(NULL));

    for (int i = 0; i < 15; i++) addTree(rand() % 100, myTree);
    showTree(myTree);

    return 0;
}

void showTree(Tree *&tree)
{
    if (NULL != tree)
    {
        showTree(tree->left);
        cout << tree->data << ' ';
        showTree(tree->right);
    }
}

void addTree(int data, Tree *&tree)
{
    if (NULL == tree)
    {
        tree = new Tree;
        tree->data = data;
        tree->left = tree->right = NULL;
    }
    if (data < tree->data)
    {
        if (tree->left != NULL) addTree(data,tree -> left);
        else
        {
            tree->left = new Tree;
            tree->data = data;
            tree->left->left= tree->left->right = NULL;
        }
    }
    if (data > tree->data)
    {
        if (tree->right != NULL) addTree(data, tree->right);
        else
        {
            tree->right = new Tree;
            tree->data = data;
            tree->right->left = tree->right->right = NULL;
        }
    }
}
