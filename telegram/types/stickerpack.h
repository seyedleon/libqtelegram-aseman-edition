// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_STICKERPACK
#define LQTG_TYPE_STICKERPACK

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QList>
#include <QtGlobal>
#include <QString>

class LIBQTELEGRAMSHARED_EXPORT StickerPack : public TelegramTypeObject
{
public:
    enum StickerPackClassType {
        typeStickerPack = 0x12b299d4
    };

    StickerPack(StickerPackClassType classType = typeStickerPack, InboundPkt *in = 0);
    StickerPack(InboundPkt *in);
    StickerPack(const Null&);
    virtual ~StickerPack();

    void setDocuments(const QList<qint64> &documents);
    QList<qint64> documents() const;

    void setEmoticon(const QString &emoticon);
    QString emoticon() const;

    void setClassType(StickerPackClassType classType);
    StickerPackClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const StickerPack &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QList<qint64> m_documents;
    QString m_emoticon;
    StickerPackClassType m_classType;
};

Q_DECLARE_METATYPE(StickerPack)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const StickerPack &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, StickerPack &item);

#endif // LQTG_TYPE_STICKERPACK
