#include<iostream>
using namespace std;
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
	                p->prev=ptr;
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
	
		void insert_at_val(int pos, int n){
		
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
		  p->prev=ptr;
		  ptr->next=p;
		  }
	}
	
	
	void insert_last(int n1){
		
		if(head==NULL)
		{head=new Node();
		 head->data=n1;
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
			p->data=n1;
			p->next=NULL;
			ptr->next=p;
			p->prev=ptr;
			
		}
	}
	void del_beg(int n1)
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
	void del_end(int n1){
		
		if(head==NULL){
	    head=new Node();
		 head->data=n1;
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
				cout<<"Press 8 for deletion at specific value: "<<endl;
				cout<<"Press 9 for exit "<<endl;
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
	
	

	  
	  
