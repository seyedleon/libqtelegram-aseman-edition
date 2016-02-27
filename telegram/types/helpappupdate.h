// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_HELPAPPUPDATE
#define LQTG_TYPE_HELPAPPUPDATE

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QtGlobal>
#include <QString>

class LIBQTELEGRAMSHARED_EXPORT HelpAppUpdate : public TelegramTypeObject
{
public:
    enum HelpAppUpdateType {
        typeHelpAppUpdate = 0x8987f311,
        typeHelpNoAppUpdate = 0xc45a6536
    };

    HelpAppUpdate(HelpAppUpdateType classType = typeHelpAppUpdate, InboundPkt *in = 0);
    HelpAppUpdate(InboundPkt *in);
    HelpAppUpdate(const Null&);
    virtual ~HelpAppUpdate();

    void setCritical(bool critical);
    bool critical() const;

    void setId(qint32 id);
    qint32 id() const;

    void setText(const QString &text);
    QString text() const;

    void setUrl(const QString &url);
    QString url() const;

    void setClassType(HelpAppUpdateType classType);
    HelpAppUpdateType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const HelpAppUpdate &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    bool m_critical;
    qint32 m_id;
    QString m_text;
    QString m_url;
    HelpAppUpdateType m_classType;
};

Q_DECLARE_METATYPE(HelpAppUpdate)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const HelpAppUpdate &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, HelpAppUpdate &item);

#endif // LQTG_TYPE_HELPAPPUPDATE
