#include<iostream>
using namespace std;
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