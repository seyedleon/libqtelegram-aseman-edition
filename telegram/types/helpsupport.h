// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_HELPSUPPORT
#define LQTG_TYPE_HELPSUPPORT

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QString>
#include "user.h"

class LIBQTELEGRAMSHARED_EXPORT HelpSupport : public TelegramTypeObject
{
public:
    enum HelpSupportType {
        typeHelpSupport = 0x17c6b5f6
    };

    HelpSupport(HelpSupportType classType = typeHelpSupport, InboundPkt *in = 0);
    HelpSupport(InboundPkt *in);
    HelpSupport(const Null&);
    virtual ~HelpSupport();

    void setPhoneNumber(const QString &phoneNumber);
    QString phoneNumber() const;

    void setUser(const User &user);
    User user() const;

    void setClassType(HelpSupportType classType);
    HelpSupportType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const HelpSupport &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    QString m_phoneNumber;
    User m_user;
    HelpSupportType m_classType;
};

Q_DECLARE_METATYPE(HelpSupport)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const HelpSupport &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, HelpSupport &item);

#endif // LQTG_TYPE_HELPSUPPORT
