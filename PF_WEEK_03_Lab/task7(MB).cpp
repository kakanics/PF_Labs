#include <iostream>
using namespace std;

main()
{
string CodeBeautifier = "-----------------------------------------------";
int MB;
int KBCoversion = 1024;
int ByteConversion = 1024;
int BitConversion = 8;
int result;
cout << CodeBeautifier << endl;
cout << "Please enter size in MBs: ";
cin >> MB;
result = MB * KBCoversion * ByteConversion * BitConversion;
cout << result << " bits" << endl;
cout << CodeBeautifier << endl;
}