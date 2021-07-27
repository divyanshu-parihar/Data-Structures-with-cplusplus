#include <iostream>
using namespace std;

class node {
   public:
    int data;
    node* next;
    node(int val) {
        data = val;
        next = NULL;
    }
};
// <_-------------Searching in linked list ------------->
bool search(node*& head, int val) {
    node* temp = head;
    while (temp) {
        if (temp->data == val) {
            return true;
        }
        temp = temp->next;

        // cout << false;
    }
    return false;
}

// <---------------------searching end _---------------------->
void insertAtHead(node*& head, int val) {
    node* n = new node(val);
    n->next = head;
    head = n;
}
// <---------------insert value at the end of the linked list and at head if
// NULL-------------->
void insertAtTail(node*& head, int val) {
    node* n = new node(val);
    if (head == NULL) {
        head = n;
        return;
    }
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}
// Deletions of nodes in Linked list
void deleteAtHead(node*& head) {
    node* todelete = head;
    head = head->next;
    delete head;
    return;
}
void deleteNthNode(node*& head, int val) {
    node* todelete;
    if (!head) {
        return;
    }
    if (!head->next) {
        todelete = head;
        head = NULL;
        delete todelete;
        return;
    }
    node* temp = head;
    if (temp->data == val) {
        head = temp->next;
        return;
    }

    while (temp) {
        if (temp->next->data == val) {
            todelete = temp->next;
            temp->next = temp->next->next;
            delete todelete;
            return;
        }
        temp = temp->next;
    }
}

// Reversing a linked list
// ITERATIVE METHOD
node* reverseListIterative(node*& head) {
    node* previous = NULL;
    node* current = head;
    node* next;

    while (current) {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    return previous;
}
// Recursive way
node* reverseListRecursive(node*& head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    node* newhead = reverseListRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

// reversing k node groups

node* reversek(node*& head, int k) {
    // base case
    if (!head) return NULL;
    node* current = head;
    node* next = NULL;
    node* prev = NULL;
    int count = 0;

    /*reverse first k nodes of the linked list */
    while (current != NULL && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
    if (next != NULL) head->next = reversek(next, k);

    /* prev is new head of the input list */
    return prev;
}
// Detect Cycle
void makeCycle(node* &head, int pos) {
    node* temp = head;
    node* startNode;
    int count = 1;
    while (temp->next != NULL) {
        if (count == pos) {
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}
bool detectCycle(node* &head) {
    node* slow = head;
    node* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow) {
            return true;
        }
    }
    return false;
}

void removeCycle(node* &head) {
    if (!detectCycle(head)) {
        return;
    }
    node* slow = head;
    node* fast = head;

    do {
        slow = slow->next;
        fast = fast->next;
    } while (slow != fast);

    fast = head;
    while (slow->next != fast->next) {
        slow = slow->next;
        fast = fast->next;
    }

    slow->next = NULL;
}
// <-------util function ------------------>
void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main() {
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    // display(head);
    // insertAtHead(head,10);
    // display(head);
    // // cout << search(head,4);
    // deleteNthNode(head,1);
    // display(head);
    // // deleteAtHead(head);
    // // deleteAtHead(head);
    // // deleteAtHead(head);
    // display(head);
    // node* newhead = reverseListRecursive(head);
    display(head);
    // makeCycle(head, 3);
    cout << detectCycle(head);
    removeCycle(head);

    // display(head);
}