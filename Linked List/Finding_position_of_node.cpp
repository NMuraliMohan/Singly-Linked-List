#include <iostream>

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

int findNode(Node* head, int n) {
	// Write your code here.
	int temp_number = 0;
	Node* temp_head = head;
	while (temp_head != NULL) {
		if (temp_head->data == n) {
			return temp_number;
		}
		temp_number++;
		temp_head = temp_head->next;

	}
	return -1;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node* head = takeinput();
		int val;
		cin >> val;
		cout << findNode(head, val) << endl;
	}
}