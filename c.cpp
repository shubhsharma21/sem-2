#include <iostream>
using namespace std;
 class student{
    public:
    int sid;
    static int count;
    void initialize(int id){
        sid=id;
        count++;
    }
 };
 int student ::count=0;
int main() {
    student s1,s2;
    s1.initialize(1);
    s2.initialize(2);
    cout<<student::count;

    

    return 0;
}
