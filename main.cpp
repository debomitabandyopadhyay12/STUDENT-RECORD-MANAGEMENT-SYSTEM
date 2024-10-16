#include <bits/stdc++.h>

using namespace std;

//making a class called node

class Node{
    public:
    int roll;
    string Name;
    string Dept;
    int Marks;
    Node *next;
};

//making a head of the list

Node *head = new Node();

//check function to check wether the record already exist or not and we chode roll as the key 

bool check(int x){
    //base case
    if(head==NULL){
        return false;
    }
    Node *t = head;
    while(t!=NULL){
        if(t->roll==x){
            return true;
        }
        t=t->next;
    }
    return false;
}

//function to insert the record

void Insert_Record(int roll,string Name,string Dept,int Marks){
    //check if the record is already present
    if(check(roll)==true){
        cout<<"Student with this roll number already exists\n";
        return;
    }
    //making a new node
    Node *t=new Node();
    t->roll=roll;
    t->Dept=Dept;
    t->Marks=Marks;
    t->Name=Name;
    t->next=NULL;
    //inserteing at the starting
    if(head==NULL || (t->roll>=head->roll)){
        t->next=head;
        head=t;
    }
    //inserting at the middle or end
    else{
        Node *c=head;
        while(c->next!=NULL && (c->next->roll<t->roll)){
            c=c->next;
        }
        t->next=c->next;
        c->next=t;

    }
    cout<<"Record inserted succesfully\n";
}

//function to search the record
void Search_Record(int roll){
    if(head==NULL){
        cout<<"No such record available\n";
        return;
    }
    Node *p=head;
    while(p!=NULL){
        if(p->roll==roll){
            cout << "Roll Number\t"
					<< p->roll << endl;
				cout << "Name\t\t"
					<< p->Name << endl;
				cout << "Department\t"
					<< p->Dept << endl;
				cout << "Marks\t\t"
					<< p->Marks << endl;
				return;
        }
        p=p->next;
    }
    if(p==NULL){
        cout<<"Nosuch record available\n";
    }
}

//deleting a record if it is present

int Delete_Record(int roll){
    Node *t=head;
    Node *p=NULL;
    //deleting at the starting
    if(t!=NULL && t->roll==roll){
        head=t->next;
        delete t;
        cout<<"Record deleted successfully\n";
        return 0;
    }
    //deleting in between
    while(t!=NULL && t->roll!=roll){
        p=t;
        t=t->next;
    }
    if(t==NULL){
        cout<<"No such record available\n";
        return -1;
    }
    p->next=t->next;
    delete t;
    cout<<"Record deleted successfully\n";
    return 0;
}

//function to display all students record

void Show_Record(){
    Node *p=head;
    if(p==NULL){
        cout<<"No records Available\n";
        return;
    }
    cout << "Index\tName\tCourse"
			<< "\tMarks\n";
    while(p!=NULL){
        cout << p->roll << " \t"
				<< p->Name << "\t"
				<< p->Dept << "\t"
				<< p->Marks << endl;
			p = p->next;
    }
    return;
}

int main(){
    Node *head=NULL;
    string Name,Course;
    int Roll,Marks;
    while(true){
        cout << "\n\t\tWelcome to Student Record "
				"Management System\n\n\tPress\n\t1 to "
				"create a new Record\n\t2 to delete a "
				"student record\n\t3 to Search a Student "
				"Record\n\t4 to view all students "
				"record\n\t5 to Exit\n";
		cout << "\nEnter your Choice\n";
        int Choice;
        cin>>Choice;
        if(Choice==1){
            cout << "Enter Name of Student\n";
			cin>>Name;
			cout << "Enter Roll Number of Student\n";
			cin >> Roll;
			cout << "Enter Department of Student \n";
			cin>>Course;
			cout << "Enter Total Marks of Student\n";
			cin >> Marks;
			Insert_Record(Roll, Name, Course, Marks);
        }
        else if(Choice==2){
            cout << "Enter Roll Number of Student whose "
					"record is to be deleted\n";
			cin >> Roll;
			Delete_Record(Roll);
        }
        else if(Choice==3){
            cout << "Enter Roll Number of Student whose "
					"record you want to Search\n";
			cin >> Roll;
			Search_Record(Roll);
        }
        else if(Choice==4){
            Show_Record();
        }
        else if(Choice==5){
            exit(0);
        }
        else{
            cout << "Invalid Choice "
				<< "Try Again\n";
        }
    }
    return 0;
}
