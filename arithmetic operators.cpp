#include<iostream>
using namespace std;
int main()
{
	char op;
    float num1, num2;
      
    cout << "enter an arithemetic operator( + , - , * , / ) \n";
    cin >> op;
    
    cout << "enter two numbers as operands \n";
    cin >> num1 >> num2;
  
    switch(op) 
	{
        case '+': 
                cout << num1 << " + " << num2 << " = " << num1+num2 ;
                break;
        case '-':
                cout << num1 << " - " << num2 << " = " << num1-num2 ;
                break;
        case '*':
                cout << num1 << " * " << num2 << " = " << num1*num2 ;
                break;
        case '/':
                cout << num1 << " / " << num2 << " = " << num1/num2 ;
                break;
        default: 
               cout<< "ERROR: Unsupported Operation" ;
    }
      
	return 0;
	
}
