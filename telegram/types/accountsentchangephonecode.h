// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_ACCOUNTSENTCHANGEPHONECODE
#define LQTG_TYPE_ACCOUNTSENTCHANGEPHONECODE

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QString>
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT AccountSentChangePhoneCode : public TelegramTypeObject
{
public:
    enum AccountSentChangePhoneCodeType {
        typeAccountSentChangePhoneCode = 0xa4f58c4c
    };

    AccountSentChangePhoneCode(AccountSentChangePhoneCodeType classType = typeAccountSentChangePhoneCode, InboundPkt *in = 0);
    AccountSentChangePhoneCode(InboundPkt *in);
    AccountSentChangePhoneCode(const Null&);
    virtual ~AccountSentChangePhoneCode();

    void setPhoneCodeHash(const QString &phoneCodeHash);
    QString phoneCodeHash() const;

    void setSendCallTimeout(qint32 sendCallTimeout);
    qint32 sendCallTimeout() const;

    void setClassType(AccountSentChangePhoneCodeType classType);
    AccountSentChangePhoneCodeType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const AccountSentChangePhoneCode &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    QString m_phoneCodeHash;
    qint32 m_sendCallTimeout;
    AccountSentChangePhoneCodeType m_classType;
};

Q_DECLARE_METATYPE(AccountSentChangePhoneCode)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const AccountSentChangePhoneCode &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, AccountSentChangePhoneCode &item);

#endif // LQTG_TYPE_ACCOUNTSENTCHANGEPHONECODE
