// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_ACCOUNTPASSWORDSETTINGS
#define LQTG_TYPE_ACCOUNTPASSWORDSETTINGS

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QString>

class LIBQTELEGRAMSHARED_EXPORT AccountPasswordSettings : public TelegramTypeObject
{
public:
    enum AccountPasswordSettingsType {
        typeAccountPasswordSettings = 0xb7b72ab3
    };

    AccountPasswordSettings(AccountPasswordSettingsType classType = typeAccountPasswordSettings, InboundPkt *in = 0);
    AccountPasswordSettings(InboundPkt *in);
    AccountPasswordSettings(const Null&);
    virtual ~AccountPasswordSettings();

    void setEmail(const QString &email);
    QString email() const;

    void setClassType(AccountPasswordSettingsType classType);
    AccountPasswordSettingsType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const AccountPasswordSettings &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    QString m_email;
    AccountPasswordSettingsType m_classType;
};

Q_DECLARE_METATYPE(AccountPasswordSettings)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const AccountPasswordSettings &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, AccountPasswordSettings &item);

#endif // LQTG_TYPE_ACCOUNTPASSWORDSETTINGS
