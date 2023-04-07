#pragma once
#include"Worker.h"

class boss :public Worker {
public:
	boss(int id, string name, int depid);
	~boss();
	void showInfo();
	string getdepname();
};
