#include<bits/stdc++.h>
using namespace std;

class student{
    string name;
    int roll_no;
    public:
    student(string name1,int roll):name(name1),roll_no(roll){
    }
    // void print(){
    //     cout<<"The student name="<<name<<".student roll no="<<roll_no<<endl;
    // }
     friend ostream& operator<<(ostream& os, const student& s);
};
ostream& operator<<(ostream& os, const student& s)
{
     os<<"The student name="<<s.name<<".student roll no="<<s.roll_no<<endl;
    return os;
}
template<typename T>
void display(T x){
    auto itr=x.begin();
    while(itr != x.end()){
        cout<<*itr;
        itr++;
    }
}
int main(){
    set<int> intset{2,3,1,4,5};
    set<student> stuset{student("asutosh",14),student("advay",2),student("avinash",15)};
    display(intset);
}