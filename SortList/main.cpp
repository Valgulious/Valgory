#include <iostream>
#include <ctime>

using namespace std;

const int n = 10;

struct Node
{
    int digit;
    Node *next;
    Node *prev;
};

Node * primaryInitialization ();
void addToEnd (Node **pBegin);
void printList(Node *pBegin);
void sortList (Node **pBegin);


int main() {
    srand(time(NULL));
    Node *pBegin = primaryInitialization();

    for (int i = 1; i <= n; i++)
    {
        addToEnd(&pBegin);
    }
    printList(pBegin);
    sortList(&pBegin);
    printList(pBegin);
    return 0;
}

Node * primaryInitialization ()
{
    Node *pV = new Node;
    pV -> digit = rand()%100;
    pV -> next = 0;
    pV -> prev = 0;
    return pV;
}

void addToEnd (Node **pBegin)
{
    Node *pV = new Node;
    pV -> digit = rand()%100;

    Node *pv = *pBegin;
    while (pv -> next != 0)
    {
        pv = pv -> next;
    }
    pv -> next = pV;
    pV -> next = 0;
    pV -> prev = pv;
}
void printList(Node *pBeign)
{
    Node *pV = pBeign;
    while (pV)
    {
        cout << pV -> digit << ' ';
        pV = pV ->next;
    }
    cout << endl;

}

void sortList (Node **pBegin)
{
    Node *pV = *pBegin;
    int a;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n-1; j++)
        {
            if ((pV -> digit) > ((pV -> next) -> digit))
            {
                a = pV -> digit;
                pV -> digit = (pV -> next) -> digit;
                (pV -> next) -> digit = a;
            }
            pV = pV -> next;
        }
    }

}