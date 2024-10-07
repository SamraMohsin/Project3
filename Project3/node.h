

class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};
class LinkedList {
private:
    Node* head;  

public:
    LinkedList();                   
    void insertAtBeginning(int value);
    void insertAtEnd(int value);    
    void insertAtPosition(int value, int k); 
    void display();                
};

