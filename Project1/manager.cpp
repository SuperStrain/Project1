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
	cout << "ְ����ţ�" << m_id << "\t";
	cout << "ְ��������" << m_name << "\t";
	cout << "��λ��" << this->getdepname() << "\t";
	cout << "��λְ������ϰ彻�������񣬲��·���Ա��" << endl;
}

string manager::getdepname()
{
	return string("����");
}
