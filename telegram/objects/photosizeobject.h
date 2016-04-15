// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_PHOTOSIZE_OBJECT
#define LQTG_TYPE_PHOTOSIZE_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/photosize.h"

#include <QPointer>
#include "filelocationobject.h"

class LIBQTELEGRAMSHARED_EXPORT PhotoSizeObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(PhotoSizeClassType)
    Q_PROPERTY(QByteArray bytes READ bytes WRITE setBytes NOTIFY bytesChanged)
    Q_PROPERTY(qint32 h READ h WRITE setH NOTIFY hChanged)
    Q_PROPERTY(FileLocationObject* location READ location WRITE setLocation NOTIFY locationChanged)
    Q_PROPERTY(qint32 size READ size WRITE setSize NOTIFY sizeChanged)
    Q_PROPERTY(QString type READ type WRITE setType NOTIFY typeChanged)
    Q_PROPERTY(qint32 w READ w WRITE setW NOTIFY wChanged)
    Q_PROPERTY(PhotoSize core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum PhotoSizeClassType {
        TypePhotoSizeEmpty,
        TypePhotoSize,
        TypePhotoCachedSize
    };

    PhotoSizeObject(const PhotoSize &core, QObject *parent = 0);
    PhotoSizeObject(QObject *parent = 0);
    virtual ~PhotoSizeObject();

    void setBytes(const QByteArray &bytes);
    QByteArray bytes() const;

    void setH(qint32 h);
    qint32 h() const;

    void setLocation(FileLocationObject* location);
    FileLocationObject* location() const;

    void setSize(qint32 size);
    qint32 size() const;

    void setType(const QString &type);
    QString type() const;

    void setW(qint32 w);
    qint32 w() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const PhotoSize &core);
    PhotoSize core() const;

    PhotoSizeObject &operator =(const PhotoSize &b);
    bool operator ==(const PhotoSize &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void bytesChanged();
    void hChanged();
    void locationChanged();
    void sizeChanged();
    void typeChanged();
    void wChanged();

private Q_SLOTS:
    void coreLocationChanged();

private:
    QPointer<FileLocationObject> m_location;
    PhotoSize m_core;
};

#endif // LQTG_TYPE_PHOTOSIZE_OBJECT
