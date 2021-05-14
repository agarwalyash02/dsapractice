#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
	Node(int data)
	{
		this->data = data;
		next = NULL;
	}
};

struct Link{
	Node* head;
	Link()
	{
		head = NULL;
	}
	Node* reverse(Node* head)
	{
		if(head == NULL || head->next == NULL)
		{
			return head;
		}
		Node* rest = reverse(head->next);
		head->next->next = head;
		head->next = NULL;
		
		return rest;
	}
	void print()
	{
		Node* temp = head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp = temp->next;
		}
	}
	void push(int data)
	{
		Node* temp = new Node(data);
		temp->next = head;
		head = temp;
	}
};

int main()
{
	Link ll;
    ll.push(20);
    ll.push(4);
    ll.push(15);
    ll.push(85);
 
    cout << "Given linked list\n";
    ll.print();
 
    ll.head = ll.reverse(ll.head);
 
    cout << "\nReversed Linked list \n";
    ll.print();
    return 0;
}