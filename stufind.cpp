#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    int roll_no;
    
    student(string name1,int roll):name(name1),roll_no(roll){
    }
    // void print(){
    //     cout<<"The student name="<<name<<".student roll no="<<roll_no<<endl;
    // }
     friend ostream& operator<<(ostream& os, const student& s);
    bool operator==(const student & obj2) const
	{
		if(this->name.compare(obj2.name) == 0)
			return true;
		else
			return false;
	}
};
ostream& operator<<(ostream& os, const student& s)
{
     os<<"The student name="<<s.name<<".student roll no="<<s.roll_no<<endl;
    return os;
}
int main(){
    vector<student> list;
    cout<<"enter no of students="<<endl;
    int num;
    cin>>num;
    while(num--){
        string name;
        int roll;
        cout<<"enter student name="<<endl;
        cin>>name;
        cout<<"enter student roll="<<endl;
        cin>>roll;
        list.push_back(student(name,roll));
    }
    cout<<"Enter the element to be found="<<endl;
    string name;
    cin>>name;
    int roll;
    cin>>roll;
    vector<student>::iterator it;
it = find(list.begin(), list.end(), student(name,roll));
if(it != list.end())
	cout<<"student Found with name ::"<<it->name<<" roll: "<<it->roll_no<<endl;
else
	cout<<"student not found.."<<endl;
}