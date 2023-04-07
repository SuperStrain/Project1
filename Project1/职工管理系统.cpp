#include<iostream>
#include"WorkerManager.h"
#include"Worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

using namespace std;

int main() {
	WorkerManager wm;
	wm.Show_menu();
	int choice;
	cout << "ÇëÊäÈëÄúµÄÑ¡Ôñ:" << endl;
	cin >> choice;
	switch (choice)
	{
	case 0:
		wm.Exit_system();
		break;
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	case 7:
		break;

	default:
		system("cls");
		break;
	}

	system("pause");
	return 0;
}