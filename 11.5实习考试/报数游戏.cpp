#include<iostream>
#include<string>
using namespace std;

struct node {
	int num;
	node* next = NULL;
};

int main() {
	int n, m;
	cin >> n >> m;
	node* head = new node;
	node* tail = head;
	head->num = 1;
	head->next = NULL;
	for (int i = 2; i <= n; i++) {
		node* temp = new node;
		temp->num = i;
		temp->next = NULL;
		tail->next = temp;
		tail = temp;
	}
	tail->num = n;
	tail->next = head;

	node* curNode = tail;
	for (int j = 1; j <= n; j++) {
		for (int i = 1; i < m; i++) {
			curNode = curNode->next;
		}
		curNode->next = curNode->next->next;
	}
	cout << curNode->next->num << " ";

}