#include "CountBase.h"

#include "CountBaseManage.h"

CountBase::CountBase()
{
	// ���๹�캯����ʼ��ʱ��������
	CountBaseManage::getInstance()->addCountBase(this);
}


CountBase::~CountBase()
{

}
void CountBase::notify(QString name, const QString &mes, QVariant &data)
{
	CountBaseManage::getInstance()->Notify(name, mes, data);
}
//CountBase& CountBase::getInstance()
//{
//	// �е���ʱ�Ż����������󣬶���ֻ����һ�Σ�һֱ����
//	static CountBase countBase;
//	return countBase;
//}

//QVariant CountBase::notify(const QString &mes, QVariant &data)
//{
//
//}
//void CountBase::listenMessage(const QString &mes, QVariant &data)
//{
//
//}
