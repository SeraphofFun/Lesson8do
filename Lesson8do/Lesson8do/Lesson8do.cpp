#include <iostream>
using namespace std;
int main()

{
		do
		{
			cout << "edded daxil edin - ";
			double num1;
			cin >> num1;
	
			cout << "edded daxil edin - ";
			double num2;
			cin >> num2;
			cout << "+,-,/,* daxil edin(eger kalkulyatoru qutarmaq isteyirsinizse onda ferqli seye basin) - ";
			char opp;
			cin >> opp;
			double total;
			if (opp == '+') {
				total = num1 + num2;
			}
			else if (opp == '-') {
				total = num1 - num2;
			}
			else if (opp == '*') {
				total = num1 * num2;
	
			}
			else if (opp == '/') {
				total = num1 / num2;
			}
			else {
				cout << "kalkulayator qutardi" << endl;
				break;
			}
			cout << " = " << total << endl;
		} while (true);
	
	
	
	
	
	
	
		do
		{
			double manat;
			cout << "manat elave edin - ";
			cin >> manat;
			unsigned short int cho;
			cout << "rubl(1),dollar(2), euro(3) ve ya funt(4) (eger 4 den cox ve 0 yazilsa praqram dayanacaq) - ";
			cin >> cho;
			if (cho == 1)
			{
				double rubl;
				rubl = manat * 51.9;
				cout << "rubl = " << rubl << endl;
			}
			else if (cho == 2)
			{
				double dollar;
				dollar = manat / 1.7;
				cout << "dollar = " << dollar << endl;
			}
			else if (cho == 3)
			{
				double euro;
				euro = manat / 1.84;
				cout << "euro = " << euro << endl;
			}
			else if (cho == 4)
			{
				double funt;
				funt = manat / 2.19;
				cout << "funt = " << funt << endl;
			}
			else {
				cout << "proqram dayandi" << endl;
				break;
			}
	
	
		} while (true);
		do
		{
			double mil;
			cout << "milli yazin (eger menfi olsa proqram dayanir) - ";
			cin >> mil;
			if (mil < 0)
			{
				cout << "proqram qutardi" << endl;
				break;
			}
			else {
				double km = mil * 1.609;
				cout << mil << " mill = " << km << " km" << endl;
			}
		} while (true);
	
	
		int i = 0;
		int mus = 0;
		int menf = 0;
		int sifir = 0;
		do
		{
			int num;
			cout << "edded daxil edin - ";
			cin >> num;
			if (num > 0)
			{
				mus++;
			}
			else if (num < 0)
			{
				menf++;
			}
			else if (num == 0) {
				sifir++;
			}
			i++;
		} while (i < 10);
		double musf = mus * 100 / 10;
		double menff = menf * 100 / 10;
		double sifirf = sifir * 100 / 10;
	
		cout << "musbetin faizi = " << musf << endl;
		cout << "menfinin faizi = " << menff << endl;
		cout << "sifirin faizi = " << sifirf << endl;
	
	
	

		int r = 0;
		int cut = 0;
		int tek = 0;
		do
		{
			int num3;
			cout << "edded daxil edin - ";
			cin >> num3;
			if (num3 % 2 == 0)
			{
				cut++;
			}
			else if (num3 % 2 == 1)
			{
				tek++;
			}

			r++;
		} while (r < 10);
		double tekf = tek * 100 / 10;
		double cutf = cut * 100 / 10;

		cout << "tekin faizi = " << tekf << endl;
		cout << "cutin faizi = " << cutf << endl;



		cout << "edded daxil edin - ";
		int num4;
		cin >> num4;
		int const ed = num4;
		int uzun = 0;
		do
		{
			num4 /= 10;
			uzun++;
		} while (num4>0);
		cout << "uzun = " << uzun<<endl;
		num4 = ed;
		int const uzun2 = uzun;
		int uz10 = 1;
		do
		{
			uz10 *= 10;
			uzun--;
		} while (uzun>1);
		uzun = uzun2;
		cout << "uz10 ==" << uz10<<endl;
		int ters = 10;
		do
		{
		if(uz10 == 0){
			break;
			}
		else if(num4 / uz10 == num4 % ters){
			int q = num4 / uz10;
			num4 -= q * uz10;
			num4 /= 10;
				uz10 /= 100;
			}
			else {

				break;
			}
		} while (true);

		if (uz10 ==0 )
		{
			cout << "polindromdur";
		}
		else
		{
			cout << uz10;
			cout << "polindrom deyil";
		}

	

	
	cout << "edded daxil edin - ";
	int num5;
	cin >> num5;
	cout << "sola surusmeni daxil edin - ";
	int sur;
	cin >> sur;
	int uzun5 = 0;
	int i5 = num5;
	do
	{
		uzun5++;
		i5 /= 10;
	} while (i5>0);
	int uz5 = 1;
	i5 = uzun5;
	do
	{
		uz5*=10;
		i5 --;
	
	} while (i5 > 1);
	
	do
	{
		int q = num5 / uz5;
		num5 -=q*uz5 ;
		num5 *= 10;
		num5 += q;
		sur--;
	} while (sur>0);
	cout << num5<<endl;


	int num6 = 2;

	if (num6 == 2) cout << "2"<<endl;
	do
	{
		int num6_1 = 2;
		int i = 0;
		bool t = true;
		do
		{
			if (num6 % num6_1 == 0)
			{
				t = false;
				break;
			}
			i++;
			num6_1++;
		} while (num6_1<num6);

		if (t == true)
		{
			cout <<num6 << endl;
		}


		num6++;
	} while (num6 < 100);
}

