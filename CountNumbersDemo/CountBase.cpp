#include "CountBase.h"

#include "CountBaseManage.h"

CountBase::CountBase()
{
	// 父类构造函数初始化时，把所有
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
//	// 有调用时才会存在这个对象，而且只创建一次，一直存在
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
