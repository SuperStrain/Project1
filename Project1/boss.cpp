#include "boss.h"

boss::boss(int id, string name, int depid)
{
	this->m_id = id;
	this->m_name = name;
	this->m_department_id = depid;
}

boss::~boss()
{
}

void boss::showInfo()
{
	cout << "职工编号：" << m_id << "\t";
	cout << "职工姓名：" << m_name << "\t";
	cout << "岗位：" << this->getdepname() << "\t";
	cout << "岗位职责：管理公司所有事务" << endl;
}

string boss::getdepname()
{
	return string("老板");
}
