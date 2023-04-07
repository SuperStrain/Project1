#pragma once
#include"Worker.h"

class manager:public Worker{
public:
	manager(int id, string name, int depid);
	~manager();
	void showInfo();
	string getdepname();
};
