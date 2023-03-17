/* https://github.com/sohitfirs/7.4.git */

#include <iostream>
#include <cstring>
using namespace std;

void izmstr1()
{
	string str1;
	char a;
	char b;
	cout<<"vvedite stroku:";
	getline(cin, str1);
	cout<<"vvedite simvol: ";
	cin>>a;

	str1[0]=str1[str1.length()-1]=a;
	
	cout<< str1<<endl;
	cin.ignore();
}

void izmstr2()
{
	cout<<"\nvvedite stroku:";
	string str1, str2;
    bool t = false,t2=false;
    
    getline(cin, str1);
    
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] == ' ' && t==false)
            continue;
        else
        {
            if (str1[i] == ' ')
            {
                for (int j = i; j < str1.length(); j++)
                {
                    if (str1[j] != ' ')
                    {
                        t2 = false;
                        break;
                    }
                    else
                        t2 = true;
                }
            }
            if (t2 == false)
            {
                str2 = str2 + str1[i];
                t = true;
            }
            else
                break;
        }
    }
    t = false;
    
    cout << str2<<endl;
//	cout << str2.length()<<endl;

    cin.get();
}

int main()
{
    izmstr1();
    izmstr2();

    return 1;
}
