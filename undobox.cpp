# include <iostream>
using namespace std;
const int MAX = 5;
string undoBox[MAX];
int top = -1;

void recordAction(string action){
    if(top== MAX-1){
        cout<<"Undo box full"<<endl;
      return;
    }
    undoBox[++top] = action;
     cout<<"Action recorded: "<< action << endl;
}
void undoAction(){
    if (top == -1){
    cout << "Nothing to Undo" << endl;
    return;
}    cout << "Undone Action: " << undoBox[top] << endl;
     top--;
}

int main(){
    int choice;
    cout<<"1. Push"<<endl;
    cout<<"2. Pop"<<endl;
    cout<<"3. Peek"<<endl;
    cin>> choice;
switch (choice)
{
case 1:
cout << "Enter Action: ";
cin >> action;
recordAction(action);
break;
case 2:
undoAction();
break;
case 3:
nextUndo();
break;
case 4:
showHistory();
break;
case 5:
cout << "Exiting..." << endl;
break;
default:
cout << "Invalid Choice" << endl;
}