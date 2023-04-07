#pragma once
#include"Worker.h"

class employee :public Worker {
public:
	employee(int id, string name, int depid);
	~employee();
	 void showInfo();
	 string getdepname();
};
