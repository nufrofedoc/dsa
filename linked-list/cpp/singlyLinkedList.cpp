#include <iostream>

using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    Node* head;
public:
    // Constructor to create an empty LinkedList
    LinkedList() {
        head = NULL;
    }

    // Display the content of the list
    void printList() {
        Node* temp = head;
        if (temp != NULL) {
            cout << "\nThe list contains: ";
            while (temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
        } else {
            cout << "\nThe list is empty";
        }
    }
};

// Test the code
int main()
{
    // Create an empty LinkedList
    LinkedList myList;

    // Add first node
    Node* first = new Node();
    first->data = 10;
    first->next = NULL;

    // Linking with head node
    myList.head = first;

    // Add second node
    Node* second = new Node();
    second->data = 20;
    second->next = NULL;

    // Linking with head node
    first->next = second;

    // Add third node
    Node* third = new Node();
    third->data = 30;
    third->next = NULL;

    // Linking with head node
    second->next = third;

    // Print the content of list
    myList.printList();

    return 0;
}
