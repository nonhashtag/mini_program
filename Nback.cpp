#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include <wchar.h>

using namespace std;

int pic();


int pic()
{
	int random;
	random = rand() % 3;

	return random;
}


int main()
{
	//string figure[3] = {"�ڡܡ�", "����", "���Ϣ�"};
	string figure[3] = { "ABC", "XYZ", "IJK" };
	vector <char> listed;
	vector <string> entered;
	int random;  // ���� �׷��� ����
	int idx; // ���õ� ���� �׷쿡�� �ϳ� ����
	int num; // ���� �Է��� ���� �ε���
	char this_turn;
	char typing;
	random = rand() % 3;

	
	for (int i = 0; i < 10; i++)
	{
		idx = rand()% 3;
		this_turn = figure[random][idx];
		listed.push_back(this_turn);
		cout << this_turn << endl;
		Sleep(1000);
		system("cls");
		cout << "";
		Sleep(500);
		if (i>2)
		{
			cin >> typing;
			switch (typing)
			{
			case '4':
				entered.push_back("2-back");
				system("cls");
				break;
			case '6':
				entered.push_back("3-back");
				system("cls");
				break;
			case 'n':
				entered.push_back("Nope");
				system("cls");
				break;
			default:
				entered.push_back("Key Error");
				system("cls");
				break;
			}
		}
		


	}
	for (char c : listed)
	{
		cout << c << " ";
	}


	return 0;
	

}