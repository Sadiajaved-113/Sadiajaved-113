#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class Node{

private:
	 int data;
	 Node *next;
public:
	  Node *head;
	  
	  Node(){
	  	head=NULL;
	  }
	  
	  void insert(int n){
	  	
	  	if(head==NULL){
	  		
	  		//cout<<"Linked list is empty: "<<endl;
		  
		  head=new Node;
		  head->data=n;
		  head->next=NULL;
		  }
	
	  
	  else{
	  	
	       Node *p, *ptr;
	       ptr=head; 
	       while(ptr->next!=NULL){
	       	ptr=ptr->next;
		   }
	       p=new Node();
	       p->data=n;
	       p->next=NULL;
	       ptr->next=p;
	  }
}

    void insert_beg(int n){
		
		if(head==NULL)
		{
	
		 head=new Node();
		 head->data=n;
		 head->next=NULL;	
			
		}
		
		else
		
		{
			
		  Node *p;
		  p=new Node();
		  p->data=n;
		  p->next= head;
		  head=p;
		   	
		}		
	}
	
	void insert_at_val(int pos,int n){
		
		if(head==NULL)
		{
	
		 head=new Node();
		 head->data=n;
		 head->next=NULL;	
			
		}
			else
		
		{
		  Node *ptr;
		  ptr=head;
		  while(ptr->data!=pos)
		  { 
		  ptr=ptr->next;
		
		  	}
		  Node *p;
		  p=new Node();
		  p->data=n;
		  p->next= ptr->next;
		  ptr->next=p;
		  }
		    	
		}
		
		
		void insert_last(int n){
		
		if(head==NULL)
		{head=new Node();
		 head->data=n;
		 head->next=NULL;	
			
		}
		
		else
		
		{
			Node *p,*ptr;
			ptr=head;
			while(ptr->next!=NULL){
				ptr=ptr->next;
			}
			p=new Node();
			p->data=n;
			p->next=NULL;
			ptr->next=p;
			p->next=NULL;
			
		}
	}
	  
	  
	  void del_beg(int n)
	  {
	  	if(head==NULL)
	  	{
	  		cout<<"Linked list is Empty: "<<endl;
		  }
		  else
		  {
		  	Node *ptr;
		  	ptr=head;
		  	head=ptr->next;
		  	delete ptr;
		  	ptr=NULL;
		  }
	  
	  }
	  void del_end(int n){
		
		if(head==NULL){
	    head=new Node();
		 head->data=n;
		 head->next=NULL;	
			
		}
		
	  else
		
		{
			Node *ptr;
			ptr=head;
			while(ptr->next->next!=NULL){
				ptr=ptr->next;
			}
			Node *p;
			p=ptr->next;
			ptr->next=NULL;
			delete p;
			p=NULL;
		}
	}
			void display(){
		
		Node *ptr;
		ptr=head;
		if(ptr==NULL){
			cout<<"No data in the linked list: "<<endl;
		}
		else{
			
			while(ptr!=NULL){
				cout<<ptr->data<<endl;
				ptr=ptr->next;
			}
		}
	}
};
		
		int main(){
			
			Node n;
			int ch;
			do{
				
				cout<<endl;
				cout<<"Press 1 for insert a nodes: "<<endl;
				cout<<"Press 2 for insert node at begining: "<<endl;
				cout<<"Press 3 for insert at specific val: "<<endl;
				cout<<"Press 4 for insert node at last: "<<endl;
				cout<<"Press 5 for display: "<<endl;
				cout<<"Press 6 for deletion at begining: "<<endl;
				cout<<"Press 7 for deletion at end: "<<endl;
				cout<<"Press 8 for exit "<<endl;
				cout<<"Enter your choice: "<<endl;
				cin>>ch;
				
				if(ch==1){
					
					cout<<"Insert nodes: "<<endl;
					n.insert(1);
					n.insert(2);
					n.insert(3);
					n.insert(4);
					
				}
				
				else if(ch==2){
					cout<<"Insert nodes at begining: "<<endl;
					n.insert_beg(6);
				}
				else if(ch==3){
					cout<<"Insert nodes at Specific value: "<<endl;
					n.insert_at_val(5,7);
			}
			else if(ch==4){
					cout<<"Insert nodes at last: "<<endl;
					n.insert_last(9);
			}
			else if(ch==5){
					cout<<"For display "<<endl;
					n.display();
			}
			else if(ch==6){
					cout<<"For deletion at begining: "<<endl;
					n.del_beg(3);
		}
		else if(ch==7){
					cout<<"For deletion at end: "<<endl;
					n.del_beg(4);
		
		}
		else{
			
			cout<<"Invalid choice: ";
		}
	}
	while(ch!=8);
	cout<<endl;
	return 0;
}

//doubly linked list

class Node{
	private:
		int data;
		Node *next, *prev;
		public:
			Node *head;
			Node()
			{
				head=NULL;
			}
			void insert(int n)
			{
				if(head==NULL)
				{
					head=new Node();
					head->data=n;
					head->prev=NULL;
					head->next=NULL;
					
				}
				else
				{
					Node *p, *ptr;
	                ptr=head; 
	                while(ptr->next!=NULL){
	            	ptr=ptr->next;
		           }
	                p=new Node();
	                p->data=n;
	                p->next=NULL;
	                p->prev=ptr->next;
	                ptr->next=p;
	  }
}

                void insert_beg(int n){
		
		if(head==NULL)
		{
	
		 head=new Node();
		 head->data=n;
		 head->next=NULL;	
			
		}
		else
		
		{
			
		  Node *p;
		  p=new Node();
		  p->data=n;
		  p->next= head;
		  head->prev=p;
		  head=p;
		   	
		}		
	}
	
		void insert_at_val(int pos,int n){
		
		if(head==NULL)
		{
	
		 head=new Node();
		 head->data=n;
		 head->next=NULL;	
			
		}
			else{
				
				Node *ptr;
		  ptr=head;
		  while(ptr->data!=pos)
		  { 
		  ptr=ptr->next;
		
		  	}
		  Node *p;
		  p=new Node();
		  p->data=n;
		  p->next= ptr->next;
		  p->prev=ptr->next;
		  ptr->next=p;
		  }
	}
	
	
	void insert_last(int n){
		
		if(head==NULL)
		{head=new Node();
		 head->data=n;
		 head->next=NULL;	
			
		}
		
		else
		
		{
			Node *p,*ptr;
			ptr=head;
			while(ptr->next!=NULL){
				ptr=ptr->next;
			}
			p=new Node();
			p->data=n;
			p->next=NULL;
			ptr->next=p;
			p->prev=ptr;
			
		}
	}
	void del_beg(int n)
	  {
	  	if(head==NULL)
	  	{
	  		cout<<"Linked list is Empty: "<<endl;
		  }
		  else
		  {
		  	Node *ptr;
		  	ptr=head;
		  	head=ptr->next;
		  	delete ptr;
		  	ptr=NULL;
		  }
	}
	void del_end(int n){
		
		if(head==NULL){
	    head=new Node();
		 head->data=n;
		 head->next=NULL;	
			
		}
		
	  else
		
		{
			Node *ptr;
			ptr=head;
			while(ptr->next->next!=NULL){
				ptr=ptr->next;
			}
			Node *p;
			p=ptr->next;
			ptr->next=NULL;
			delete p;
			p=NULL;
		}
	}
			void display(){
		
		Node *ptr;
		ptr=head;
		if(ptr==NULL){
			cout<<"No data in the linked list: "<<endl;
		}
		else{
			
			while(ptr!=NULL){
				cout<<ptr->data<<endl;
				ptr=ptr->next;
			}
		}
		

					}					
};
int main()
{
	Node n;
			int ch;
			do{
				
				cout<<endl;
				cout<<"Press 1 for insert a nodes: "<<endl;
				cout<<"Press 2 for insert node at begining: "<<endl;
				cout<<"Press 3 for insert at specific val: "<<endl;
				cout<<"Press 4 for insert node at last: "<<endl;
				cout<<"Press 5 for display: "<<endl;
				cout<<"Press 6 for deletion at begining: "<<endl;
				cout<<"Press 7 for deletion at end: "<<endl;
				cout<<"Press 8 for exit "<<endl;
				cout<<"Enter your choice: "<<endl;
				cin>>ch;
				
				if(ch==1){
					
					cout<<"Insert nodes: "<<endl;
					n.insert(1);
					n.insert(2);
					n.insert(3);
					n.insert(4);
					
				}
				
				else if(ch==2){
					cout<<"Insert nodes at begining: "<<endl;
					n.insert_beg(6);
				}
				else if(ch==3){
					cout<<"Insert nodes at Specific value: "<<endl;
					n.insert_at_val(5,7);
			}
			else if(ch==4){
					cout<<"Insert nodes at last: "<<endl;
					n.insert_last(9);
			}
			else if(ch==5){
					cout<<"For display "<<endl;
					n.display();
			}
			else if(ch==6){
					cout<<"For deletion at begining: "<<endl;
					n.del_beg(3);
		}
		else if(ch==7){
					cout<<"For deletion at end: "<<endl;
					n.del_beg(4);
		
		}
		else{
			
			cout<<"Invalid choice: ";
		}
	}
	while(ch!=8);
	cout<<endl;
	return 0;
	
	}
	
	

//circular linked list

class  Node{
	public:
		int data;
		Node *next,*head,*p;
//	Node(int n){
//		data=n;
//		next=NULL;
//	}
	Node()
	{
		head=NULL;
	}
	 void insert(int n) {
        Node* p = new Node();
        p->data=n;

        if (head == NULL) {
            head = p;
            head->next = head; // Make it circular
        } else {
            Node* ptr = head;
            while (ptr->next != head) {
                ptr = ptr->next;
            }
            ptr->next = p;
            p->next = head; // Make it circular
        }
    }

void insert_at_beg(int n1)
{ 
   Node *p=new Node();
   p->data=n1;
	if(head==NULL){
	head=p;
	head->next=head;
}
else{

	    Node* ptr = head;
            while (ptr->next != head) {
                ptr = ptr->next;
            }
            ptr->next = p;
            p->next = head;
            head=p;
} 
}
void insert_at_end(int n2)
{
	Node *p=new Node();
	p->data=n2;
	if (head==NULL)
	{
		head=p;
		head->next=head;
		
	}
	else
	{
		Node *ptr;
		ptr=head;
		while(ptr->next!=head)
		{
			ptr=ptr->next;
		}
	ptr->next=p;
	p->next=head;
}
	}
void insert_at_spec(int n3,int pos)
{
		Node *p=new Node();
	p->data=n3;
	if (head==NULL)
	{
		head=p;
		head->next=head;	
	}
else{
	Node *ptr;
	ptr=head;
	while( ptr->data!=pos)
	{
		ptr=ptr->next;
	}
	p->next=ptr->next;
	ptr->next=p;
}
}

void reverse()
{
	Node *ptr1=head;
	Node *ptr2=head->next;
	while(ptr2!=head)
	{
		Node *ptr=ptr2->next;
		
		ptr2->next=ptr1;

		ptr1=ptr2;
		ptr2=ptr;
	}
	
	head->next=ptr1;
	head=ptr1;
}
	void del_beg()
{
	if(head==NULL)
	{
		cout<<"empty:";
	}
	else if(head->next==head){
		delete head;
		head=NULL;
	}
	else{
	Node *ptr,*p;
	ptr=head;
	while(ptr->next!=head){
		ptr=ptr->next;
	}
		p=head;
		head=head->next;
		ptr->next=head;
		delete p;
		p=NULL;
	}
}
void del_end()
{
	if(head==NULL)
	{
		cout<<"empty:";
	}
	else if(head->next==head){
		delete head;
		head=NULL;
	}
	else{
	Node *ptr,*p;
	ptr=head;
	p=NULL;
	while(ptr->next!=head){
		p=ptr;
		ptr=ptr->next;
	}
		p->next=head;
		delete ptr;
		ptr=NULL;
	}
}
void del_spec(int pos){
	if(head==NULL)
	{
		cout<<"empty:";
	}
	else if(head->next==head){
		delete head;
		head=NULL;
	}
	else{
	Node *ptr,*p;
	ptr=head;
	while(ptr->data!=pos){
	   p=ptr;
		ptr=ptr->next;
	}
	p->next=ptr->next;
	delete ptr;
	ptr=NULL;
}
}
void display()
	{ if(head==NULL)
	{
		cout<<"empty";
	}
	else
       {
	   Node *ptr;
       ptr=head;
      do {
		cout<<ptr->data;
		ptr=ptr->next;
}while(ptr!=head);
}
	}
};
int main ()
{
	
	Node no; 
	int c;
	do
	{   
	   cout<<endl<<"press 1 for insert a node:"<<endl;
	   cout<<"press 2 for insertion at begining:"<<endl;
	   cout<<"press 3 for insertion at te end:"<<endl;
	   cout<<"press 4 for insert at specific condition:"<<endl;
	   cout<<"press 5 for reverse:"<<endl;
	   cout<<"press 6 for deletion at begining:"<<endl;
	   cout<<"press 7 for deletion at te end:"<<endl;
	   cout<<"press 8 for deletion at specific condition:"<<endl;
	   cout<<"press 9 exit:"<<endl;
		cout<<"enter the choice:"<<endl;
		cin>>c;
	if(c==1){	
	cout<<endl<<"insert a node:";
	no.insert(1);
	no.insert(2);
	no.insert(3);
	no.insert(4);
	no.display();
}
    else if(c==2){
	cout<<endl<<"after inserting node at beg:";
	no.insert_at_beg(5);
	no.display();
}
    else if(c==3){
	cout<<endl<<"after inserting node at end:";
	no.insert_at_end(7);
	no.display();
}
else if(c==4){
	cout<<endl<<"after inserting node at specific:";
    no.insert_at_spec(8,4);
	no.display();
}
else if(c==5){
	cout<<endl<<"after reverse:";
	no.reverse();
	no.display();
}
else if(c==6){
	cout<<endl<<"del at begining:";
	no.del_beg();
	no.display();
}
else if(c==7){
	cout<<endl<<"del at end:";
	no.del_end();
	no.display();
}
else if(c==8){
	cout<<endl<<"del at specific:";
	no.del_spec(3);
	no.display();
}
else {
	cout<<"invalid";
}
}
while(c!=9);
cout<<endl;
return 0;
}	  
	  

































	  
	  