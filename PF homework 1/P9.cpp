//#include <iostream>
//using namespace std;
//int main()
//{
//	int e, round = 0, er = 0, oddr = 0;
//	cout << "Enter value of energy :";
//	cin >> e;
//	int h = 0;
//	int l = 0;
//	while (e > 0)
//	{
//		if (e % 2 == 0)
//		{
//			e /= 2;
//			er++;
//		}
//		else
//		{
//			e -= 7;
//			oddr ++;
//		}
//
//		if (e % 5 == 0)
//		{
//			e -= 3;
//		}
//
//		if (e > h)
//		{
//			h = e;
//		}
//		if (e < l)
//		{
//			l = e;
//		}
//		round++;
//	}
//	cout << "Rounds: " << round << endl;
//	cout << "Highest Energy: " << h << endl;
//	cout << "Lowest Energy: " << l << endl;
//	cout << "Even Rounds: " << er << endl;
//	cout << "Odd Rounds: " << oddr << endl;
//
//}