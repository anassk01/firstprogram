#include <iostream>

using namespace std;

void printFoo()
{
     cout<<"Foo"<<endl;
     cout<<"End of printFoo() function"<<endl;
}

void printFooNTimes(int numberOfPrints)
{
    for (int i = 0; i < numberOfPrints; i++)
    {
        cout<<"Foo"<<endl;
    }
    cout<<"End of printFooNTimes() function"<<endl;
}

int main()
{
    int numberOfTimes = 5;
    
    string nameOfPerson = "";
    string adjective = "";
    string entityType = "";
    
    printFoo();
    printFooNTimes(numberOfTimes);
    
    cout<<"Input a person\'s name: "<<endl;
    cin>>nameOfPerson;
    cout<<"Describe this person:"<<endl;
    cin>>adjective;
    
    cout<<nameOfPerson<<" is very "<<adjective;
    return 0;
}

