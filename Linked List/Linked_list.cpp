#include <iostream>
/*
class Node
{
public:
	int data;
	Node* next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

using namespace std;

void insert(Node* head, int i, int value) {
	Node* temp = head;
	
	Node* new_node = new Node(value);
	new_node->next = NULL;
	
	for (int j = 0; j < i; j++) {
		
		if (j == i - 1 ) {
			Node* example = temp->next;
			temp->next = new_node;
			
			
			new_node->next = example;
			break;
		}
		else {
			temp = temp->next;
		}
	}
	
	
};

void delete_head_node(Node* head,int pos) {
	Node* temp_head = head;
	head = temp->next;
	delete temp_head;
	return head;
}

Node* deleteNode(Node* head, int pos)
{
	Node* temp = head;
	Node* example = temp;
	for (int j = 0; j <= pos; j++) {
		
		if (pos == 0) {
			Node* temp_head = head;
			head = temp->next;
			delete temp_head;
			return head;
		}
		else if (j == pos - 1) {
			example = temp;
			temp = temp->next;
			example->next = temp->next;
		}
		
		else {
			 temp = temp->next;
		 }
		
	}
	return head;
	// Write your code here.
}


using namespace std;


Node* takeinput()
{
	int data;
	cin >> data;
	Node* head = NULL, * tail = NULL;
	while (data != -1)
	{
		Node* newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;
}

void print(Node* head)
{
	Node* temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node* head = takeinput();
		int pos;
		cin >> pos;
		head = deleteNode(head, pos);
		print(head);
	}

	return 0;
}

*/

#include <iostream>

class Node {
public:
	int data;
	Node* next;
	Node(int data) {
		this->data = data;
		this->next = NULL;
	}
};

using namespace std;


Node* takeinput() {
	int data;
	cin >> data;
	Node* head = NULL, * tail = NULL;
	while (data != -1) {
		Node* newNode = new Node(data);
		if (head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail->next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;
}

void print(Node* head) {
	Node* temp = head;

	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}

	cout << "\n";
}


Node* insertNode(Node* head, int i, int data) {
	// Write your code here
	Node* temp = head;
	if (head == NULL) {
		return new Node(data);
	}
	if (i == 1) {
		Node* new_node = new Node(data);
		head = new_node;
		new_node->next = temp;
		return head;
	}

	else {
		Node* next_node_for_recurtion = head->next;
		
		head->next = insertNode(head->next, i - 1, data);
		return head;
	}
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		Node* head = takeinput();
		int pos, data;
		cin >> pos >> data;
		head = insertNode(head, pos, data);
		print(head);
	}
}