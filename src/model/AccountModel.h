#ifndef ACCOUNTMODEL_H
#define ACCOUNTMODEL_H

#include "MoniApp.h"
#include "TransactionModel.h"

#include <QDataStream>
#include <QString>
#include <QList>


class AccountModel
{

private:
	int m_id;
	QString m_title;
	QList<TransactionModel> m_transactions;

public:
	AccountModel();
	AccountModel(int id);
	void setTitle(const QString &title);
	QString title() const;
	int id() const;
	QList<TransactionModel> transactions() const;

	void addTransaction(TransactionModel transaction);

};
QDataStream &operator<<(QDataStream &out, const AccountModel &account);
QDataStream &operator>>(QDataStream &in, AccountModel &account);

#endif // ACCOUNTMODEL_H
