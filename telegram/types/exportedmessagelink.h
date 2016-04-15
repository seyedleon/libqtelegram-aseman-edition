// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_EXPORTEDMESSAGELINK
#define LQTG_TYPE_EXPORTEDMESSAGELINK

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QString>

class LIBQTELEGRAMSHARED_EXPORT ExportedMessageLink : public TelegramTypeObject
{
public:
    enum ExportedMessageLinkClassType {
        typeExportedMessageLink = 0x1f486803
    };

    ExportedMessageLink(ExportedMessageLinkClassType classType = typeExportedMessageLink, InboundPkt *in = 0);
    ExportedMessageLink(InboundPkt *in);
    ExportedMessageLink(const Null&);
    virtual ~ExportedMessageLink();

    void setLink(const QString &link);
    QString link() const;

    void setClassType(ExportedMessageLinkClassType classType);
    ExportedMessageLinkClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const ExportedMessageLink &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QString m_link;
    ExportedMessageLinkClassType m_classType;
};

Q_DECLARE_METATYPE(ExportedMessageLink)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const ExportedMessageLink &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, ExportedMessageLink &item);

#endif // LQTG_TYPE_EXPORTEDMESSAGELINK
