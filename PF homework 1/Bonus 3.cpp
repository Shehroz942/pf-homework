//#include <iostream>
//using namespace std;
//int main()
//{
//	int sum = 0, n, d = 0, l = 0, count=0,ecount = 0;
//	cout << "Enter number :";
//	cin >> n;
//	if (n > 0)
//	{
//		while (n != 0)
//		{
//			d = n % 10;
//			n = n / 10;
//			sum += d;
//			if (n % 2 == 0)
//			{
//				ecount++;
//			}
//			if (l < d)
//			{
//				l = d;
//			}
//			count++;
//		}
//		
//		cout << "Digits :" << d << endl;
//		cout << "Digits sum :" << sum << endl;
//		cout << "Largest digit :" << l << endl;
//		cout << "Even Digit Count :" << ecount << endl;
//		if (n % 3 == 0)
//		{
//			cout << "Divisible by 3: YES " << endl;
//
//		}
//
//
//		if (count >= 4 && sum > 20 && l == 9 && ecount >= 2 && n % 3 == 0)
//		{
//			cout << "TREASURE NUMBER ";
//		}
//
//	}
//}