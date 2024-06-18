#include<iostream>
using namespace std;

class parent{
    private:
    int x;

    public:
    void print(){
        cout<<x<<endl;
    }

    parent(int x){
        this->x=x;
    }
    friend void getAcess(parent& obj);

};

void getAcess(parent& obj){
    obj.print();
}

int main(){
    parent obj(21);
    getAcess(obj);
}