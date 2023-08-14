#include "CountBaseManage.h"
#include "CountAlgorithm.h"
#include "uiFace.h"

CountBaseManage::CountBaseManage()
{

}
CountBaseManage::~CountBaseManage()
{
}

CountBaseManage* CountBaseManage::getInstance()
{
	// 必须静态成员
	static CountBaseManage handle;
	return &handle;
}

void CountBaseManage::addCountBase(CountBase* countbase)
{
	m_countbase.append(countbase);
}

void CountBaseManage::Notify(QString name, QString event, QVariant data)
{
	//size_t 是无符号整型类型，通常表示对象大小，索引，Qt中通常用于容器类和字符串类数据结构中
	for (size_t i = 0; i < m_countbase.size(); i++){
		if (name == "all" || m_countbase[i]->getName() == name) {
			m_countbase[i]->listenMessage(event, data);
		}

	}

}
