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
	cout << "ְ����ţ�" << m_id << "\t";
	cout << "ְ��������" << m_name << "\t";
	cout << "��λ��" << this->getdepname() << "\t";
	cout << "��λְ�𣺹���˾��������" << endl;
}

string boss::getdepname()
{
	return string("�ϰ�");
}
