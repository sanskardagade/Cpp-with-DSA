// Ques : Create a class ‘book’ with name, price and number of
// pages as its attributes. The class should contain following
// member functions :
// ● countBooks(int price) : This function will return count of all
// the books that have a price less than the given price.
// ● isBookPresent(string title) : This will return a boolean value
// indicating whether any book with the given title exists or not.

#include<iostream>
using namespace std;
class Book{
public:
    char name;
    int price;
    int numberofpages;

    int countbooks(int p){
        if(price<p) return 1;
        else return 0;
    }
    
    bool isbookpresent(char book){
        if(name==book)return true;
        else return false;
    }
};
int main(){
    Book Harrypotter;
    Harrypotter.name = 'H';
    Harrypotter.price = 1000;
    Harrypotter.numberofpages = 500;
    cout<<Harrypotter.countbooks(2000)<<endl;
    cout<<Harrypotter.countbooks(100)<<endl;
}