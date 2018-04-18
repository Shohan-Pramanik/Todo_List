#include<iostream>
using namespace std;

fstream io;
class todo{
    private:
        int tmp;
        string task_name;
        string task_description;
        string task_date;
    public:
        void add();
        void show();
        void delet();
        void t_name();
        void t_description();
        void t_date();
        void manual();
        void check();
};

void  todo :: add(){
        io.open("todo.txt",ios::app);
        t_name();
        getchar();
        getline(cin,task_name);
        t_description();
        getline(cin,task_description);
        t_date();
        getline(cin,task_date);
        io<<task_name<<endl;
        io<<task_description<<endl;
        io<<task_date<<endl;
        io.close();
        manual();

}

void todo :: manual(){
    cout<<"\n\nSelect an option\n";
    cout<<"Enter 1 to Add\n";
    cout<<"Enter 2 to Show\n";
    cout<<"Enter 3 to Delete\n";
    cout<<"Enter 4 to Exit\n";
    check();
}

void todo :: check(){

    cin>>tmp;
    if(tmp==1){
        add();
    }
    if(tmp==2){
        show();
    }
    if(tmp==3){
        delet();
    }
    if(tmp==4){
        exit(1);
    }
}

int main()
{

    return 0;
}