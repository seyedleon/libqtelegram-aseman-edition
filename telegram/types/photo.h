// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_PHOTO
#define LQTG_TYPE_PHOTO

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QtGlobal>
#include <QList>
#include "photosize.h"

class LIBQTELEGRAMSHARED_EXPORT Photo : public TelegramTypeObject
{
public:
    enum PhotoClassType {
        typePhotoEmpty = 0x2331b22d,
        typePhoto = 0xcded42fe
    };

    Photo(PhotoClassType classType = typePhotoEmpty, InboundPkt *in = 0);
    Photo(InboundPkt *in);
    Photo(const Null&);
    virtual ~Photo();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setDate(qint32 date);
    qint32 date() const;

    void setId(qint64 id);
    qint64 id() const;

    void setSizes(const QList<PhotoSize> &sizes);
    QList<PhotoSize> sizes() const;

    void setClassType(PhotoClassType classType);
    PhotoClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const Photo &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qint64 m_accessHash;
    qint32 m_date;
    qint64 m_id;
    QList<PhotoSize> m_sizes;
    PhotoClassType m_classType;
};

Q_DECLARE_METATYPE(Photo)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const Photo &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, Photo &item);

#endif // LQTG_TYPE_PHOTO
