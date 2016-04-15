// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_PHOTOSPHOTOS
#define LQTG_TYPE_PHOTOSPHOTOS

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QtGlobal>
#include <QList>
#include "photo.h"
#include "user.h"

class LIBQTELEGRAMSHARED_EXPORT PhotosPhotos : public TelegramTypeObject
{
public:
    enum PhotosPhotosClassType {
        typePhotosPhotos = 0x8dca6aa5,
        typePhotosPhotosSlice = 0x15051f54
    };

    PhotosPhotos(PhotosPhotosClassType classType = typePhotosPhotos, InboundPkt *in = 0);
    PhotosPhotos(InboundPkt *in);
    PhotosPhotos(const Null&);
    virtual ~PhotosPhotos();

    void setCount(qint32 count);
    qint32 count() const;

    void setPhotos(const QList<Photo> &photos);
    QList<Photo> photos() const;

    void setUsers(const QList<User> &users);
    QList<User> users() const;

    void setClassType(PhotosPhotosClassType classType);
    PhotosPhotosClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const PhotosPhotos &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qint32 m_count;
    QList<Photo> m_photos;
    QList<User> m_users;
    PhotosPhotosClassType m_classType;
};

Q_DECLARE_METATYPE(PhotosPhotos)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const PhotosPhotos &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, PhotosPhotos &item);

#endif // LQTG_TYPE_PHOTOSPHOTOS
