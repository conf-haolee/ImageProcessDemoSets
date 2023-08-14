#include "uiFace.h"
#include "CountBaseManage.h"

UiFace::UiFace()
{
	countName = "uiface";
}
UiFace::~UiFace()
{

}

QString UiFace::getName() const
{
	return "UiFace";
}

void UiFace::listenMessage(const QString &mes, QVariant &data)
{
	
}

void UiFace::DoStart()
{
    qDebug() << "UIface ¿ªÊ¼Æô¶¯";
    notify("CountAlgorithm","start",QVariant());
}


