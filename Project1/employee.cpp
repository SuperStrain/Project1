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
	cout << "ְ����ţ�" << m_id << "\t";
	cout <<"ְ��������" << m_name << "\t";
	cout << "��λ��" << this->getdepname() << "\t";
	cout << "��λְ����ɾ�����������" << endl;
}

string employee::getdepname()
{
	return string("��ͨԱ��");
}


