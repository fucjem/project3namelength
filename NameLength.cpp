//wahoo
//comp sci 3a
//Owen Watts
//nn9

#include <iostream>
#include <iomanip>

using namespace std;

const int n=5;

///
struct person{
    string name;
    int nameLen;
    int numVowels;
};

int numberofvowels(string myname)
{
    int numofv=0;
    ///get amount of vowels
    for (int j=0; j<myname.length(); j++)
    {
        //may need to put parenthesis around all of these
        if((myname[j]=='a')||(myname[j]=='e')||(myname[j]=='i')||(myname[j]=='o')||(myname[j]=='u'))
        {
                numofv++;
                //cout<<numofv<<endl;
        }
    }
    return numofv;
}

void myswap()
{
    swap (x,y);
}

void input(person being[])
{
    //int numofv=0;
    ///input five times
    for (int i=0; i<n; i++)
    {
        cout<<"enter name -> ";
        string homeon;
        cin>>homeon;
        being[i].name=homeon;
        //cin>>being[i].name;
    }

    ///get name sizes
    for (int j=0; j<n; j++)
    {
        being[j].nameLen=being[j].name.size();
    }

    //hopefully properly get amount of vowels
    for (int j=0; j<n; j++)
    {
        being[j].numVowels=numberofvowels(being[j].name);
    }

    /*
    ///get amount of vowels
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<being[i].nameLen; j++)
        {
            if (being[j].name=141)
            {
                numofv++;
            }
        }
    }
    */
}



///OUTPUT
void output(person being[])
{
    cout<<"name"<<"\t"<<"length"<<"\t"<<"vowels"<<endl;
    ///OUTPUT
    for(int i=0; i<n; i++)
    {
        //cout<<"name       length       vowels"<<endl;
        cout<<being[i].name;
        cout<<setw(5);
        cout<<being[i].nameLen;
        cout<<setw(5);
        cout<<being[i].numVowels;
        cout<<endl;
    }
}

int main()
{
    //int nv=0;
    ///declaration of struct variable thingy
    person being[n]; //this variable being is multiple persons


    ///input(being); //i am sending it being which is multiple persons
    ///output(being);

    /*
    string no="no";
    string u="u";
    swap(no,u);
    cout<<no<<" "<<u<<endl;
    */

    //NumberOfVowels();
    //mySwap();
    //SortLength();
    //SortVowels();
    //output();



    ///being[j].name==141||

    ///||being[j].name=145||being[j].name=151||being[j].name=157||being[j].name=165)

    ///output(being);

    ///a141 e145 i151 o157 u165
}
