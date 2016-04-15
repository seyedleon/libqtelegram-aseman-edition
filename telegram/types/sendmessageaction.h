// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_SENDMESSAGEACTION
#define LQTG_TYPE_SENDMESSAGEACTION

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT SendMessageAction : public TelegramTypeObject
{
public:
    enum SendMessageActionClassType {
        typeSendMessageTypingAction = 0x16bf744e,
        typeSendMessageCancelAction = 0xfd5ec8f5,
        typeSendMessageRecordVideoAction = 0xa187d66f,
        typeSendMessageUploadVideoAction = 0xe9763aec,
        typeSendMessageRecordAudioAction = 0xd52f73f7,
        typeSendMessageUploadAudioAction = 0xf351d7ab,
        typeSendMessageUploadPhotoAction = 0xd1d34a26,
        typeSendMessageUploadDocumentAction = 0xaa0cd9e4,
        typeSendMessageGeoLocationAction = 0x176f8ba1,
        typeSendMessageChooseContactAction = 0x628cbc6f
    };

    SendMessageAction(SendMessageActionClassType classType = typeSendMessageTypingAction, InboundPkt *in = 0);
    SendMessageAction(InboundPkt *in);
    SendMessageAction(const Null&);
    virtual ~SendMessageAction();

    void setProgress(qint32 progress);
    qint32 progress() const;

    void setClassType(SendMessageActionClassType classType);
    SendMessageActionClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const SendMessageAction &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qint32 m_progress;
    SendMessageActionClassType m_classType;
};

Q_DECLARE_METATYPE(SendMessageAction)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const SendMessageAction &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, SendMessageAction &item);

#endif // LQTG_TYPE_SENDMESSAGEACTION
