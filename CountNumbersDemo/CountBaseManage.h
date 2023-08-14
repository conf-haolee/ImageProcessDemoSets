#pragma once
#include <QVector>
#include <QString>
#include <QDebug>


#include "CountAlgorithm.h"
#include "uiFace.h"

class CountBaseManage
{
public:
	CountBaseManage();
	~CountBaseManage();
	
	// 创建一个单例
	static CountBaseManage* getInstance();
	
	void addCountBase(CountBase* countbase);

    void Notify(QString name, QString event, QVariant data);

	//void notify(const QString &name, QVariant &data);
	//void listenMessage(const QString &mes, QVariant &data);


private:
	QVector<CountBase*> m_countbase;

};

