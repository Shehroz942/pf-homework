#include <iostream>
using namespace std;
int main()
{
	int question;
	cout << "select question number from 1 to 11: " << endl;
	cin >> question;
	if (question == 1)
	{
		float bmi, weight, height;
		cout << "enter person's weight :" << endl;
		cin >> weight;
		cout << "enter person's height :" << endl;
		cin >> height;
		bmi = weight / (height * height);
		if (bmi < 18.5)
			cout << "underweight" << endl;
		else if (bmi >= 18.5 && bmi <= 24.9)
			cout << "normal" << endl;
		else if (bmi >= 25 && bmi <= 29.9)
			cout << "overweight" << endl;
		else
			cout << "obese" << endl;
	}

	else if (question == 2)
	{
		int n;
		cout << "enter an integer :";
		cin >> n;
		if (n % 2 == 0)
			cout << "Eneterd number is even :" << endl;
		else
			cout << "entered number is odd :" << endl;
	}
	else if (question == 3)
	{
		int marks1, marks2, marks3;
		float avg;
		cout << "enter marks 1 :";
		cin >> marks1;
		cout << "enter marks 2 :";
		cin >> marks2;
		cout << "enter marks 3 :";
		cin >> marks3;
		avg = ((float)marks1 + marks2 + marks3) / 3;
		if (avg >= 80)
			cout << "A" << endl;
		else if (avg >= 70 && avg < 80)
			cout << "B" << endl;
		else if (avg >= 60 && avg < 70)
			cout << "C" << endl;
		else if (avg >= 50 && avg < 60)
			cout << "D" << endl;
		else
			cout << "F" << endl;
	}
	else if (question == 4)
	{
		int a, b, c;
		cout << "enetr first number :" << endl;
		cin >> a;
		cout << "enetr second number :" << endl;
		cin >> b;
		cout << "enetr third number :" << endl;
		cin >> c;
		if (a > b && a > c)
			cout << "Largest number is A which is : " << a << endl;
		else if (b > a && b > c)
			cout << "Largest number is B which is : " << b << endl;
		else
			cout << "Largest number is C which is : " << c << endl;
	}
	else if (question == 5)
	{
		char ab;
		cout << "Enter character :";
		cin >> ab;
		if (ab == 'A' || ab == 'a' || ab == 'E' || ab == 'e' || ab == 'I' || ab == 'i' || ab == 'O' || ab == 'o' || ab == 'U' || ab == 'u')
			cout << "Entered character is vowel :" << endl;
		else
			cout << "Entered character is consonent :" << endl;
	}
	else if (question == 6)
	{
		int a;
		cout << "Enter number : ";
		cin >> a;
		if (a % 3 == 0 && a % 5 == 0)
			cout << "Divsible by both 3 and 5 " << endl;
		else if (a % 3 == 0)
			cout << "Divsible by 3 only " << endl;
		else if (a % 5 == 0)
			cout << "Divsible by 5 only " << endl;
		else
			cout << "Not Divsible by both 3 or 5 " << endl;
	}
	else if (question == 7)
	{
		char ch;
		cout << "Enter character :";
		cin >> ch;
		int a = (int)ch;
		if (a == 'A' || a == 'B' || a == 'C' || a == 'D')
			cout << "pass" << endl;
		else
			cout << "Fail " << endl;
	}
	else if (question == 8)
	{
		float s1, s2, s3;
		cout << "Enter length of side 1 :";
		cin >> s1;
		cout << "Enter length of side 2 :";
		cin >> s2;
		cout << "Enter length of side 3 :";
		cin >> s3;
		if (s1 + s2 > s3 && s2 + s3 > s1 && s1 + s3 > s2)
		{
			cout << "valid triangle can be formed :" << endl;
			if (s1 == s2 == s3)

				cout << "Equilateral triangle is formed :" << endl;
			else if (s1 == s2 || s1 == s3 || s2 == s3)
				cout << "Isosceles triangle is formed :" << endl;

			else
				cout << "scalene is formed :" << endl;
			{

				if (s1 * s1 == (s2 * s2) + (s3 * s3) || s2 * s2 == (s1 * s1) + (s3 * s3) || s3 * s3 == (s1 * s1) + (s2 * s2))
					cout << "Triangle is right-angled :" << endl;
				else
					cout << "Not a right triangle is formed :" << endl;
			}
		}
		else
			cout << "Not a valid traingle is formed :";
	}
	else if (question == 9)
	{
		int a, b;
		char op;
		cout << "Enter value of a :" << endl;
		cin >> a;
		cout << "Enter value of b :" << endl;
		cin >> b;
		cout << "Enter oprator :" << endl;
		cin >> op;
		if (op == '+')
			cout << "Adittion of two numbers is :" << a + b << endl;
		else if (op == '-')
			cout << "Subtraction of two numbers is :" << a - b << endl;
		else if (op == '*')
			cout << "Multiplication of two numbers is :" << a * b << endl;
		else if (op == '/')
		{
			if (b == 0)
				cout << "Division is undefined";
			else
				cout << "Division of two numbers is :" << a / b << endl;
		}
		else
			cout << "Entered Invalid Operator :" << endl;

	}
	else if (question == 10)
	{
		int accbalance, withdrawalamount, newbalance;
		cout << "Enter account present balance :" << endl;
		cin >> accbalance;
		cout << "Enter Withdrawal amount :" << endl;
		cin >> withdrawalamount;
		if (withdrawalamount > accbalance)
			cout << "insufficient funds :" << endl;
		else if (withdrawalamount % 100 != 0)
			cout << "Invalid amount :" << endl;
		else
		{
			newbalance = accbalance - withdrawalamount;
			cout << "New balance is :" << newbalance << endl;
		}
	}

	else if (question == 11)
	{
		float celcius, fahrenheit;
		cout << "Enter temperature in celcius :" << endl;
		cin >> celcius;
		fahrenheit = (celcius * 9 / 5) + 32;
		if (fahrenheit < 50)
			cout << "Cold " << endl;
		else if (fahrenheit >= 50 && fahrenheit <= 86)
			cout << "Moderate" << endl;
		else
			cout << "Hot" << endl;
	}

	else
		cout << "Entered question number is not in range from 1 to 11 :" << endl;



}




















