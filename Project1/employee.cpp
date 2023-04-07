#include "employee.h"

employee::employee(int id, string name, int depid)
{
	this->m_id = id;
	this->m_name = name;
	this->m_department_id = depid;
}

employee::~employee()
{
}

void employee::showInfo()
{
	cout << "职工编号：" << m_id << "\t";
	cout <<"职工姓名：" << m_name << "\t";
	cout << "岗位：" << this->getdepname() << "\t";
	cout << "岗位职责：完成经理交代的任务" << endl;
}

string employee::getdepname()
{
	return string("普通员工");
}


