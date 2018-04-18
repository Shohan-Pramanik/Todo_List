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

int main()
{

    return 0;
}