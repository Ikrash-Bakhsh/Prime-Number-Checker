#include<iostream>
using namespace std;
int main()
{
    int num;
    
    cout<<"Enter a number: ";
    cin>>num;

    if(num<=1) 
	{
        cout << "Not a prime number." << endl;
    }
	 else 
	 {
        int i;
        for (i=2;i<=num/2;++i)
		 {
            if(num%i==0)
			 {
                cout<<num<<" is not a prime number";
                return 1;
            }
        }

        if (i>num/2)
		 {
            cout<<num<<" is a prime number";
        }
    }

    return 0;
}

