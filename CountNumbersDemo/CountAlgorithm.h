#pragma once
#include <QString>
#include <QVariant>
#include <QDebug>
#include "CountBase.h"


class CountAlgorithm :
	public CountBase
{
public:
	CountAlgorithm();
	~CountAlgorithm();
	//  子类的
	virtual QString getName() const override;
	void listenMessage(const QString &mes, QVariant &data);

    void DoStart();

private:
	QString countName;
};

