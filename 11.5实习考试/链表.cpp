#include<iostream>
#include<string>
using namespace std;

struct node {
	int num = 0;
	node* next = NULL;
};

int main() {
	int n, m, insert = 0;
	cin >> n;
	node* head = new node;
	head->num = 0;
	head->next = NULL;

	node* tail = head;
	for (int i = 1; i <= n; i++) {
		node* temp = new node;
		cin >> temp->num;
		temp->next = NULL;
		tail->next = temp;
		tail = temp;
	}

	cin >> m >> insert;
	node* curNode = head->next;
	while (curNode) {
		cout << curNode->num << " ";
		curNode = curNode->next;
	}

	cout << endl;
	
	curNode = head;
	for (int i = 1; i < m; i++) {
		curNode = curNode->next;
	}
	node* temp = new node;
	temp->num = insert;
	temp->next = curNode->next;
	curNode->next = temp;
	
 curNode = head->next;
	while (curNode) {
		cout << curNode->num << " ";
		curNode = curNode->next;
	}
}