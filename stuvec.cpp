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
void display(vector<T> x){
     
         for( auto ptr=x.begin();ptr!=x.end();ptr++){
            cout<<*ptr;
    }
}
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
    display(slist);
    
}