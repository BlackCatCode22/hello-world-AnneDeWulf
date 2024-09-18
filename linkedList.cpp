#include <iostream>
using namespace std;

struct Node {
    string dataField;
    Node* pNext;
};

void printList(Node* pNode) {
    while (pNode!=nullptr) {
        cout<<pNode->dataField << endl;
        pNode = pNode->pNext;
    }
}

int main() {

    cout << "\n\n" << "********* My First Linked List Program! *********" << "\n\n" << endl;

    //inital definition of nodes
    Node* pHead = new Node();
    Node* pSecond = new Node();
    Node* pThird = new Node();

    //information for nodes in question
    pHead->dataField = "first info";
    pHead->pNext = pSecond;

    pSecond->dataField = "something something second info";
    pSecond->pNext = pThird;

    pThird->dataField = "the third info";
    pThird->pNext = nullptr;

    // you're not going to believe what this function does

    cout << "\n" << "This is the part where the list prints the nodes" << "\n" << endl;

    printList(pHead);

    // it prints the list of nodes

    //add new nodes to my linked.
    Node* pCurrent = new Node();
    pCurrent -> dataField = "current info: got here a bit late and we had to reprint!";
    pCurrent -> pNext = pHead;
    //reposition head of the list
    pHead = pCurrent;


    cout << "\n" << "second list GO!" << "\n" << endl;
    // try again

    printList(pHead);
}
