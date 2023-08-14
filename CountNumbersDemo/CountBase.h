#pragma once
#include <QString>
#include <QVariant>

class CountBaseManage;
class CountBase
{
public:
	CountBase();
	~CountBase();

	// 起到一个消息转发的作用 转发给manage类具体处理
	void notify(QString name, const QString &mes, QVariant &data);

	// 纯虚函数 加const = 0  const 为了声明函数为常量成员函数，即它不修改类的成员函数。
	virtual QString getName() const = 0;
	// 纯虚函数留给 派生类具体实现监听消息
	virtual void listenMessage(const QString &mes, QVariant &data) = 0;
};

