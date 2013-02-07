
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void sorting(string *number)
{
    string jona;

    for(int p=0; p<=100; p++)
    {
        for(int r=0; r<100; r++)
        {
            if(number[r] > number[p])
            {
                jona=number[r];
                number[r]=number[p];
                number[p]=jona;
            }
        }
    }
    for(int p=0; p<100; p++)

    {
        cout << number[p] << endl;
    }


}
int main()
{
    string numbers[100];
    string line;
    string x;
    int z = 0;
    ifstream myfile;
    myfile.open("top_passwords.txt");
    while(myfile.good())
    {
        getline(myfile, line);
        x = line;
        numbers[z]=x;
        z++;
    }

sorting(numbers);


myfile.close();
return 0;
}
