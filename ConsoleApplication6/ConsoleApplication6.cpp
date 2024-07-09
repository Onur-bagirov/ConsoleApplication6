#include <iostream>

using namespace std;

int main()
{
	cout << "==============================================================";
	cout << "\n\n";
	cout << "Tap - 1";
	cout << "\n\n\n\n";
	unsigned int room;
	unsigned int bin = 1;
	unsigned int scarf = 1;
	const double television = 1;
	cout << "\tEnter room number :";
	cin >> room;
	int answer_1 = room * bin;
	int answer_1_ = room * scarf;
	int answer_1__ = room * television;
	cout << "\n\tBin - " << answer_1;
	cout << "\n\tScarf - " << answer_1_;
	cout << "\n\tTelevision - " << answer_1__;
	cout << "\n\n\n";
	cout << "==============================================================";
	cout << "\n\n";
	cout << "Tap - 2";
	cout << "\n\n\n\n";
	unsigned int hundurluk;
	unsigned int en;
	unsigned int uzunluq;
	cout << "\tEnter hundurluk :";
	cin >> hundurluk;
	cout << "\tEnter en :";
	cin >> en;
	cout << "\tEnter uzunluq :";
	cin >> uzunluq;
	unsigned int answer_2 = 2 * (hundurluk * uzunluq) + 2 * (hundurluk * en);
	cout << "\tAnswer :" << answer_2;
	cout << "\n\n\n";
	cout << "==============================================================";
	cout << "\n\n";
	cout << "Tap - 3";
	cout << "\n\n\n\n";
	unsigned int day_read;
	unsigned int mistake;
	cout << "\tEnter day_read :";
	cin >> day_read;
	cout << "\tEnter mistake :";
	cin >> mistake;
	unsigned int answer_3 = mistake / day_read;
	cout << "\tAnswer :" << answer_3;
	cout << "\n\n\n";
	cout << "==============================================================";
	cout << "\n\n";
	cout << "Tap - 4";
	cout << "\n\n\n\n";
	float yol;
	float litir;
	float qiymet_;
	cout << "\tYolu daxil edin :";
	cin >> yol;
	cout << "\tliiri daxil edin :";
	cin >> litir;
	cout << "\tqiymeti daxil edin :";
	cin >> qiymet_;
	float answer_4 = yol / litir * qiymet_;
	cout << "\tAnswer :" << answer_4;
	cout << "\n\n\n";
	cout << "==============================================================";
	cout << "\n\n";
	cout << "Tap - 5";
	cout << "\n\n\n\n";
	unsigned int on_iki;
	unsigned int on_bir;
	unsigned int on;
	unsigned int doqquz;
	unsigned int sekkiz;
	cout << "\ton iki ballarin sayini daxil edin :";
	cin >> on_iki;
	cout << "\ton bir ballarin sayini daxil edin :";
	cin >> on_bir;
	cout << "\ton ballarin sayini daxil edin :";
	cin >> on;
	cout << "\tdoqquz ballarin sayini daxil edin :";
	cin >> doqquz;
	cout << "\tsekkzi ballarin sayini daxil edin :";
	cin >> sekkiz;
	int answer_5 = (on_iki * 5) + (on_bir * 4) + (on * 3) + (doqquz * 2) + (sekkiz * 1);
	cout << "\tAnswer :" << answer_5;
	cout << "\n\n\n";
	cout << "==============================================================";



}
