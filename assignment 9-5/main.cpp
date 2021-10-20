#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

int main() {
    Node *head = NULL;
    int length = 0;
    
    for (int i=0; i<5; i++) {
        int num;
        
        cout << "Enter a value: ";
        cin >> num;
        
        Node* toInsert = new Node;
        toInsert->value = num;
        toInsert->next = NULL;
        
        // if list is empty
        if (head == NULL) head = toInsert;
        else if(toInsert->value <= head->value){
            toInsert->next = head;
            head = toInsert;
        }
        else{
            Node* temp = head;
            while(head->next != NULL){
                if (toInsert->value <= head->next->value) {
                    break;
                }
                else head = head->next;
            }
            toInsert->next = head->next;
            head->next = toInsert;
            head = temp;
            
        }
        
        length++;
        
    }
    
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->value << endl;
        temp = temp->next;
    }
        
    return 0;
}
