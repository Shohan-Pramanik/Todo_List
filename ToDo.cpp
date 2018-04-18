#include<iostream>
using namespace std;

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

int main()
{

    return 0;
}