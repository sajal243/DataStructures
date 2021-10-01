#include<iostream>
using namespace std;
class student{
    string likes;
    public:
    string name;
    int age;
    bool gender;

    student(){
        cout << "I am a default constructor"<<endl;
    } // default constructor

    student(string s, int a, int g, string l){      // constructor ---> automatically called 
        name = s;                                   // whenever any new instance of class is created
        age  = a; 
        gender = 1;
        likes = l;
        cout << "parameterised constructor" << endl;
    }// parameterised constructor 

    student(student &a){
        cout << "copy constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    ~student(){
        cout << "Destructor called" << endl;
    }// destructor 

    bool operator == (student &a){           // operator defining 
        if(name == a.name && age == a.age && gender == a.gender){
            return true;
        }
        return false;
    }

    void setLikes(string s){
        likes = s;
    }

    void getInfo(){
        cout << name<< endl;
        cout << age << endl;
        cout << gender << endl;
        cout << likes <<endl;
    }
};

int main(){
    /*student a[3];
    for(int i =0; i<3; i++){
        cin >> a[i].gender;   
    }*/

    student a("sajal", 21, 1,"");
    //a.setLikes("DairyMilk");
    //a[2].setLikes("Dairy Milk");
    student b;
    student c =a;
    //a.getInfo();
    if(c == a){   // operator overloading --- "==" operator
        cout << "Same" << endl;
    }
    else{
        cout << "Not Same" << endl;
    }
    //for(int i=0; i<3; i++){
      //  a[i].getInfo();
    //}
    
    return 0;
}