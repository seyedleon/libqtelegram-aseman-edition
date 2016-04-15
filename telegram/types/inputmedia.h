// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTMEDIA
#define LQTG_TYPE_INPUTMEDIA

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QString>
#include <QList>
#include "documentattribute.h"
#include "inputfile.h"
#include "inputgeopoint.h"
#include "inputdocument.h"
#include "inputphoto.h"

class LIBQTELEGRAMSHARED_EXPORT InputMedia : public TelegramTypeObject
{
public:
    enum InputMediaClassType {
        typeInputMediaEmpty = 0x9664f57f,
        typeInputMediaUploadedPhoto = 0xf7aff1c0,
        typeInputMediaPhoto = 0xe9bfb4f3,
        typeInputMediaGeoPoint = 0xf9c44144,
        typeInputMediaContact = 0xa6e45987,
        typeInputMediaUploadedDocument = 0x1d89306d,
        typeInputMediaUploadedThumbDocument = 0xad613491,
        typeInputMediaDocument = 0x1a77f29c,
        typeInputMediaVenue = 0x2827a81a,
        typeInputMediaGifExternal = 0x4843b0fd
    };

    InputMedia(InputMediaClassType classType = typeInputMediaEmpty, InboundPkt *in = 0);
    InputMedia(InboundPkt *in);
    InputMedia(const Null&);
    virtual ~InputMedia();

    void setAddress(const QString &address);
    QString address() const;

    void setAttributes(const QList<DocumentAttribute> &attributes);
    QList<DocumentAttribute> attributes() const;

    void setCaption(const QString &caption);
    QString caption() const;

    void setFile(const InputFile &file);
    InputFile file() const;

    void setFirstName(const QString &firstName);
    QString firstName() const;

    void setGeoPoint(const InputGeoPoint &geoPoint);
    InputGeoPoint geoPoint() const;

    void setIdInputDocument(const InputDocument &idInputDocument);
    InputDocument idInputDocument() const;

    void setIdInputPhoto(const InputPhoto &idInputPhoto);
    InputPhoto idInputPhoto() const;

    void setLastName(const QString &lastName);
    QString lastName() const;

    void setMimeType(const QString &mimeType);
    QString mimeType() const;

    void setPhoneNumber(const QString &phoneNumber);
    QString phoneNumber() const;

    void setProvider(const QString &provider);
    QString provider() const;

    void setQ(const QString &q);
    QString q() const;

    void setThumb(const InputFile &thumb);
    InputFile thumb() const;

    void setTitle(const QString &title);
    QString title() const;

    void setUrl(const QString &url);
    QString url() const;

    void setVenueId(const QString &venueId);
    QString venueId() const;

    void setClassType(InputMediaClassType classType);
    InputMediaClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const InputMedia &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QString m_address;
    QList<DocumentAttribute> m_attributes;
    QString m_caption;
    InputFile m_file;
    QString m_firstName;
    InputGeoPoint m_geoPoint;
    InputDocument m_idInputDocument;
    InputPhoto m_idInputPhoto;
    QString m_lastName;
    QString m_mimeType;
    QString m_phoneNumber;
    QString m_provider;
    QString m_q;
    InputFile m_thumb;
    QString m_title;
    QString m_url;
    QString m_venueId;
    InputMediaClassType m_classType;
};

Q_DECLARE_METATYPE(InputMedia)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const InputMedia &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, InputMedia &item);

#endif // LQTG_TYPE_INPUTMEDIA
