#include <iostream>
using namespace std;

int main()
{
	cout << "enter some int:\n";
	
	int count = 0;
	int curValue = 0;
	int tempValue = 0;
	
	if( cin>>curValue)
	{
		count = 1;
		while( cin>>tempValue)
		{
			if(curValue == tempValue)
			{
				++count;
			}
			else
			{
				cout << curValue << " occured " << count << " times."<<endl;
				curValue = tempValue;
				count = 1;
			}
		}
		cout << curValue << " occured " << count << " times."<<endl;
	}
	else
	{
		cout << "error input" << endl;
	}

	return 0;
}
