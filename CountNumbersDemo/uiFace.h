#pragma once

#include <QDebug>
#include <QString>
#include <QVariant>
#include "CountBase.h"


class UiFace: 
	public CountBase
{
public:
	UiFace();
	~UiFace();

	// 子类重写父类纯虚函数， 子类的同名函数自动成为虚函数，virtual 可加可不加，为了程序清晰一般加. override关键字也是如此
	virtual QString getName() const override;
	virtual void listenMessage(const QString &mes, QVariant &data) override;

    void DoStart();


private:
	QString countName;
};

