#include<bits/stdc++.h>
using namespace std;
class student{
    string name;
    int roll_no;
    public:
    student(string name1,int roll):name(name1),roll_no(roll){
    }
    void print(){
        cout<<"The student name="<<name<<".student roll no="<<roll_no<<endl;
    }
};
int main(){
    vector<student> slist;
    cout<<"enter no of students="<<endl;
    int num;
    cin>>num;
    while(num--){
        string name;
        int roll;
        cin>>name;
        cin>>roll;
        slist.push_back(student(name,roll));
    }
     vector<student>::iterator ptr; 
    for( ptr=slist.begin();ptr !=slist.end();ptr++){
            ptr->print();
    }
}