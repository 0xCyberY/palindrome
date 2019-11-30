#include <iostream>
using namespace std;
class pal{
	int n, num, digit, rev = 0;
	public:
		void fun(){
			cout << "Enter a positive number: ";
     cin >> num;
     n = num;
     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);
     cout << " The reverse of the number is: " << rev << endl;
     if (n == rev)
         cout << " The number is a palindrome.\n";
     else
         cout << " The number is not a palindrome.\n";
		}
};
int main()
{
     pal num;
     num.fun();
    return 0;
}

