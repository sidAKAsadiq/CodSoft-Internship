/* This is Task no.3 of CodSoft C++ Internship - "TO_DO_LIST"
   Author : Muhammad Sadiq
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class To_do_list{
vector<string> tasks;
vector<bool> status;
public:
void add_task(){
    string input;
    cout<<"Enter task : \n";
    fflush(stdin);
    getline(cin,input);
    tasks.push_back(input);
    status.push_back(false);
    cout<<"Task added successfully\n";
}
void view_tasks(){
    for(int i=0;i<tasks.size();i++){
        cout<<i+1<<" Task : "<<tasks[i]<<"\tStatus : ";
        if(status[i]){
            cout<<"Completed";
        }
        else{
            cout<<"Pending";
        }
        cout<<endl;
    }
}
void delete_task(){
int choice;
cout<<"Select the task to be deleted\n";
view_tasks();
cout<<"Your choice : ";
cin>>choice;
tasks.erase(tasks.begin() + (choice-1));
status.erase(status.begin() + (choice-1));
cout<<"Task deleted successfully\n";
}
void mark_as_completed(){
int choice;
cout<<"Select the task to be Marked as completed\n";
view_tasks();
cout<<"Your choice : ";
cin>>choice;   
status[choice-1] = true; 
}

void User_interface(){
    int choice = 0;
    while(choice!=-1){
        cout<<"Select from following options(-1 to delete)\n1.Add new task\n2.Delete task\n3.View all tasks\n4.Mark task as completed\n";
        cin>>choice;
        switch (choice)
        {
        case 1:
        add_task();
        break;
        case 2:
        delete_task();
        break;
        case 3:
        view_tasks();
        break;
        case 4:
        mark_as_completed();
        break;
        default:
        cout<<"Invalid choice\n";
        break;
        }
    cout<<"Press any number to continue OR -1 to exit\n";
    cin>>choice;
    }
    cout<<"Task manager exited...\n";
}
};

int main() {
    To_do_list t1;
    t1.User_interface();
    return 0;
}