//Programmer Name: Muhammad Danyal
//Reg.NO:4304-BSSE-F21-B
#include<iostream>
constexpr auto MAX = 3;

using namespace std;

class myStack
{
protected:
	int l[MAX];
	int top;
public:
	myStack() :top(-1) {}
	void push(int);
	int pop();	
};
void myStack::push(int data) {
	if (top == MAX - 1) {
		cout << "over flow \n";
		return;
	}
	l[++top] = data;
}
int myStack::pop() {
	if (top == -1) {
		cout << "under flow\n";
		return -1;
	}
	else
	return l[top--];
}
//void myStack::getter() {
//	int data;
//	cout << "how many data you want to store(enter upto 3 data only)?\n";
//	cin >> data;
//	for (int i = 0; i <= data; i++) {
//		cout << l[MAX];
//	}
//}
class derived :public myStack {
public:
	void disp()const;
	int peep();
};
void derived::disp()const {
	cout << "data:\n";
	for (int i = 0; i <= top; i++)
		cout << l[i]<<endl;
	/*cout << top;
	cout << l[top] << endl;*/
}
int derived::peep() {
	if (top == -1) {
		cout << "under flow\n";
		return -1;
	}
	else
	return l[top--];
}
int main() {
	int choice;
	myStack s;
	derived d;
	int value;
	while (true) {
		cout << "------------Main Menu--------------\n\n";
		cout << " 1. push data\n";
		cout << " 2. pop data\n";
		cout << " 3. display data\n";
		cout << " 4. peep\n";
		cout << " 5. Exit\n";
		cout << "what you want to do? \n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			cout << "------------Push Data-------------\n";
			cout << "Enter value to be stored in stack\n";
			cin >> value;
			 s.push(value);
			 break;
		case 2:
			system("cls");
			cout << "------------POP Data-------------\n";			
			s.pop();
			cout << " poped successfully\n";
			break;
		case 3:
			system("cls");
			cout << "------------Display-------------\n";			
			d.disp();
			break;
		case 4:
			system("cls");
			cout << "------------Peep-------------\n";			
			d.peep();
			break;
		case 5:					
			exit(0);
			break;
		default: 
			cout << "select a valid option\n";
			break;
		}
	}
}