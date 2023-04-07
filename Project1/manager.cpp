#include "manager.h"

manager::manager(int id, string name, int depid) {
	this->m_id = id;
	this->m_name = name;
	this->m_department_id = depid;
}

manager::~manager()
{
}

void manager::showInfo()
{
	cout << "职工编号：" << m_id << "\t";
	cout << "职工姓名：" << m_name << "\t";
	cout << "岗位：" << this->getdepname() << "\t";
	cout << "岗位职责：完成老板交代的任务，并下发给员工" << endl;
}

string manager::getdepname()
{
	return string("经理");
}
