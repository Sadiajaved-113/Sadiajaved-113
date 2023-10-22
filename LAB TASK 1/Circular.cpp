#include<iostream>
#include<stdlib.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int n) {
    	data=n;
	    next=nullptr;
	} 
};
class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() : head(nullptr) {}

    void insert(int n) {
        Node *p; 
		p=new Node(n);
        if (head == nullptr) {
            head =p;
            head->next = head;
        } 
		else {
            Node *ptr = head;
            while (ptr->next != head) {
                ptr = ptr->next;
            }
            ptr->next = p;
            p->next = head;
            head = p;
        }
    }
    void insert_end(int n) {
        Node *p = new Node(n);
        if (head == nullptr) {
            head = p;
            head->next = head;
        } 
		else {
            Node *ptr = head;
            while (ptr->next != head) {
                ptr= ptr->next;
            }
            ptr->next = p;
            p->next = head;
        }
    }
    void insert_at_value(int pos, int n) {
        Node *p= new Node(n);
        if (head == nullptr) {
            cout << "List is empty. Cannot insert at value." << endl;
            return;
        }
        Node *ptr = head;
        while (ptr->data != pos) {
            ptr = ptr->next;
            if (ptr == head) {
                cout << "Value " << pos << " not found in the list." << endl;
                return;
            }
        }
        p->next = ptr->next;
        ptr->next = p;
    }
    void display() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }
        Node *ptr = head;
        do {
            cout << ptr->data << " ";
            ptr = ptr->next;
        } while (ptr != head);
        cout << endl;
    }
};
int main() {
    CircularLinkedList cll;
    int ch;
	do{
		cout<<endl;
		cout<<"Press 1 for insert a nodes"<<endl;
		cout<<"Press 2 for insert node at end "<<endl;
		cout<<"Press 3 for insert at specific value "<<endl;
		cout<<"Press 4 for display"<<endl;
		cout<<"Press 5 for exit"<<endl;
		cout<<"Enter your choice:"<<endl;
		cin>>ch;	
	if(ch==1){
             cout<<"insert a nodes"<<endl;			
               cll.insert(1);
               cll.insert(2);
               cll.insert(3);
               cll.insert(4);

				 	}
		
		
   else if(ch==2){
	cout<<"insert a nodes at end"<<endl;
	cll.insert_end(5);
			}
    else if(ch==3){
	cout<<"insert at specific value "<<endl;	
	cll.insert_at_value(3, 7);
				}
    else if(ch==4){
cout<<"For display "<<endl;	
cll.display();			}
   else{
   	cout<<"invalid choice";
   }
}
while(ch!=5);
return 0;
}

