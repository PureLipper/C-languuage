#include<iostream>
#include<string>
using namespace std;

struct node{
	int data = 0;
	node* next = NULL;
};

int main(){
	
	node* head = new node;
	node* tail = new node;
	head->data = 0;
	tail->data = 0;
	head->next = tail;
	tail->next = head;
	
	for(int i = 1;i <= 10;i++){
		node* temp = new node;
		cin >> temp->data;
		tail->next = temp;
		tail = temp;
		temp->next = head;		
	}
	
	node* curNode = head->next;
	
	while(curNode){
		cout << curNode->data << " ";
		curNode = curNode->next;
	}
	
	
}