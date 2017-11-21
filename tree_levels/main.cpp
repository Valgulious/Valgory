#include <iostream>

using namespace std;

struct Tree
{
    string data;
    Tree *left, *right;
};

int n(-1),count(0);

void showTree(Tree *&);
void addTree(string, Tree *&);
void countLevels(int, Tree *&);

int main() {
    Tree *myTree = NULL;
    int m;

    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    for (int i = 0; i < 30; i++) addTree(to_string(rand() % 100), myTree);
    showTree(myTree);
    cout << endl;
    cout << "Введите уровень ветвей, которые вы хотите посчитать" << endl;
    cin >> m;
    countLevels(m, myTree);
    cout << "Количество ветвей уровня " << m << " = " << count;
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

void addTree(string data, Tree *&tree)
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

void countLevels(int level, Tree *&tree)
{
    if ((level > n) && (NULL != tree))
    {
        n++;
        if (level == n) count++;
        countLevels(level, tree->left);
        countLevels(level, tree->right);
        n--;
    }

}
