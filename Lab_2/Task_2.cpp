#include <iostream>

class Node {
public:
    int value;
    Node* previous;
    Node* nextNode; 

    Node(int val) : value(val), previous(nullptr), nextNode(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    // Method to insert a new node with value 'val' after a node with the given 'target' value
    void insertNode(int val, int target) {
        Node* newNode = new Node(val);

        if (!head) {
            // If the list is empty, the new node becomes the only element
            head = newNode;
            tail = newNode;
        } else {
            Node* current = head;

            while (current) {
                if (current->value == target) {
                    // Found a node with the target value
                    if (current->nextNode) {
                        // If the node is not the last one, update the pointers
                        newNode->nextNode = current->nextNode;
                        current->nextNode->previous = newNode;
                    } else {
                        // If the node is the last one, update the tail
                        tail = newNode;
                    }

                    newNode->previous = current;
                    current->nextNode = newNode;
                    break; // Exit the loop after insertion
                }

                current = current->nextNode;
            }

            if (!current) {
                std::cout << "Target not found in the list." << std::endl;
            }
        }
    }

    // Other methods of the DoublyLinkedList class

    // Method to print the list
    void printList() {
        Node* current = head;
        while (current) {
            std::cout << current->value << " ";
            current = current->nextNode;
        }
        std::cout << std::endl;
    }
};

int main() {
    DoublyLinkedList myList;

    myList.insertNode(1, 0); // Insert a node with value 1 after a node with value 0
    myList.insertNode(2, 1); // Insert a node with value 2 after a node with value 1
    myList.insertNode(3, 2); // Insert a node with value 3 after a node with value 2

    // Print the list
    myList.printList();

    return 0;
}
