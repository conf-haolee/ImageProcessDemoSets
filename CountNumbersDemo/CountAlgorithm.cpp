#pragma execution_character_set("utf-8") 

#include "CountAlgorithm.h"
#include "CountBaseManage.h"

CountAlgorithm::CountAlgorithm()
{
	countName = "CountAlgorithm";
}
CountAlgorithm::~CountAlgorithm()
{

}

QString CountAlgorithm::getName() const
{
	return countName;
}

void CountAlgorithm::listenMessage(const QString &mes, QVariant &data)
{
	if (mes == "start")
	{
		qDebug() << "CountAlgorithm 响应 start消息";
		qDebug() << "响应的数据是" << data;
	}		
}

void CountAlgorithm::DoStart()
{

}
