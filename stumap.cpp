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
     os<<"The student name:"<<s.name<<".student roll no="<<s.roll_no<<endl;
    return os;
}
int main(){
    map<string,student> list;
    cout<<"enter no of students="<<endl;
    int num;
    cin>>num;
    while(num--){
        string email;
        string name;
        int roll;
        cout<<"enter email"<<endl;
        cin>>email;
        cout<<"enter student name="<<endl;
        cin>>name;
        cout<<"enter student roll="<<endl;
        cin>>roll;
        list.insert({email,student(name,roll)});
    }
    map<string,student>::iterator p;
    for(p=list.begin();p!=list.end();p++){
		cout<<p->first<<"="<<p->second;
	}
}