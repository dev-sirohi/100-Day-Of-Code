#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node(int data) {
		this->data = data;
		this->next = NULL;
	}
};

void show(Node* node) {
	Node* trav = node;
	while (trav) {
		cout << trav->data << " -> ";
		trav = trav->next;
	}
}

void findY(Node* node1, Node* node2) {
	Node* trav = node1;
	int count1 = 0;

	while (trav) {
		count1++;
		trav = trav->next;
	}

	trav = node2;
	int count2 = 0;

	while (trav) {
		count2++;
		trav = trav->next;
	}

	Node* trav2;
	int diff = count1 - count2;

	if (diff > 0) {
		trav = node1;
		while (diff--) {
			trav = trav->next;
		}
		trav2 = node2;
	} else if (diff < 0) {
		trav = node2;
		diff *= -1;
		while (diff--) {
			trav = trav->next;
		}
		trav2 = node1;
	} else {
		trav = node1;
		trav2 = node2;
	}

	while (trav != trav2) {
		trav = trav->next;
		trav2 = trav2->next;
	}

	if (!trav || !trav2) {
		cout << "Trains do not meet!" << endl;
	} else {
		cout << "Trains do meet! At point " << trav->data << endl;
	}
}

int main() {

	ios_base::sync_with_stdio(false);

	Node* list1 = new Node(1);
	Node* list2 = new Node(7);

	list1->next = new Node(2);
	list1->next->next = new Node(3);
	list1->next->next->next = new Node(4);
	list1->next->next->next->next = new Node(5);

	list2->next = new Node(6);
	list2->next->next = list1->next->next;

	show(list1);
	show(list2);

	cout << endl;

	findY(list1, list2);

	return 0;
}
