#include<iostream>
using namespace std;
class Being{
    protected:
    int id;
    public:
        Being(int data = 0){
            id = data;
        }
        int whatValue(){
            return getValue();
        }
        virtual int getValue(){
            return id;
        }
        void virtual printMe(){
            cout << "B" << endl;
        }
};
class Animal:
    public Being{
        public:
            Animal(int data=1){
                id = data;
            }
            virtual int getValue(){
                return id*2;
            }
            void virtual printMe(){
                cout << "A" << endl;
            }

    };
class Human:
    public Animal{
        public:
            Human(int data=3){
                id = data;
            }
    };

int main(){
    Being *b = new Being();
    Animal *a = (Animal*) b;
    b -> printMe();
    delete a,b;
    b = new Animal();
    a = (Animal*) b;
    a -> printMe();
    Being &bref = *b;
    bref.printMe();
    Human h(4);
    cout <<b->getValue()<<endl;
    cout <<h.Being::getValue()<<endl;
    cout << a->Animal::whatValue()<<endl;
    return 0;


}
