// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "botinlineresultobject.h"

BotInlineResultObject::BotInlineResultObject(const BotInlineResult &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_document(0),
    m_photo(0),
    m_sendMessage(0),
    m_core(core)
{
    m_document = new DocumentObject(m_core.document(), this);
    connect(m_document.data(), &DocumentObject::coreChanged, this, &BotInlineResultObject::coreDocumentChanged);
    m_photo = new PhotoObject(m_core.photo(), this);
    connect(m_photo.data(), &PhotoObject::coreChanged, this, &BotInlineResultObject::corePhotoChanged);
    m_sendMessage = new BotInlineMessageObject(m_core.sendMessage(), this);
    connect(m_sendMessage.data(), &BotInlineMessageObject::coreChanged, this, &BotInlineResultObject::coreSendMessageChanged);
}

BotInlineResultObject::BotInlineResultObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_document(0),
    m_photo(0),
    m_sendMessage(0),
    m_core()
{
    m_document = new DocumentObject(m_core.document(), this);
    connect(m_document.data(), &DocumentObject::coreChanged, this, &BotInlineResultObject::coreDocumentChanged);
    m_photo = new PhotoObject(m_core.photo(), this);
    connect(m_photo.data(), &PhotoObject::coreChanged, this, &BotInlineResultObject::corePhotoChanged);
    m_sendMessage = new BotInlineMessageObject(m_core.sendMessage(), this);
    connect(m_sendMessage.data(), &BotInlineMessageObject::coreChanged, this, &BotInlineResultObject::coreSendMessageChanged);
}

BotInlineResultObject::~BotInlineResultObject() {
}

void BotInlineResultObject::setContentType(const QString &contentType) {
    if(m_core.contentType() == contentType) return;
    m_core.setContentType(contentType);
    Q_EMIT contentTypeChanged();
    Q_EMIT coreChanged();
}

QString BotInlineResultObject::contentType() const {
    return m_core.contentType();
}

void BotInlineResultObject::setContentUrl(const QString &contentUrl) {
    if(m_core.contentUrl() == contentUrl) return;
    m_core.setContentUrl(contentUrl);
    Q_EMIT contentUrlChanged();
    Q_EMIT coreChanged();
}

QString BotInlineResultObject::contentUrl() const {
    return m_core.contentUrl();
}

void BotInlineResultObject::setDescription(const QString &description) {
    if(m_core.description() == description) return;
    m_core.setDescription(description);
    Q_EMIT descriptionChanged();
    Q_EMIT coreChanged();
}

QString BotInlineResultObject::description() const {
    return m_core.description();
}

void BotInlineResultObject::setDocument(DocumentObject* document) {
    if(m_document == document) return;
    if(m_document) delete m_document;
    m_document = document;
    if(m_document) {
        m_document->setParent(this);
        m_core.setDocument(m_document->core());
        connect(m_document.data(), &DocumentObject::coreChanged, this, &BotInlineResultObject::coreDocumentChanged);
    }
    Q_EMIT documentChanged();
    Q_EMIT coreChanged();
}

DocumentObject*  BotInlineResultObject::document() const {
    return m_document;
}

void BotInlineResultObject::setDuration(qint32 duration) {
    if(m_core.duration() == duration) return;
    m_core.setDuration(duration);
    Q_EMIT durationChanged();
    Q_EMIT coreChanged();
}

qint32 BotInlineResultObject::duration() const {
    return m_core.duration();
}

void BotInlineResultObject::setFlags(qint32 flags) {
    if(m_core.flags() == flags) return;
    m_core.setFlags(flags);
    Q_EMIT flagsChanged();
    Q_EMIT coreChanged();
}

qint32 BotInlineResultObject::flags() const {
    return m_core.flags();
}

void BotInlineResultObject::setH(qint32 h) {
    if(m_core.h() == h) return;
    m_core.setH(h);
    Q_EMIT hChanged();
    Q_EMIT coreChanged();
}

qint32 BotInlineResultObject::h() const {
    return m_core.h();
}

void BotInlineResultObject::setId(const QString &id) {
    if(m_core.id() == id) return;
    m_core.setId(id);
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
}

QString BotInlineResultObject::id() const {
    return m_core.id();
}

void BotInlineResultObject::setPhoto(PhotoObject* photo) {
    if(m_photo == photo) return;
    if(m_photo) delete m_photo;
    m_photo = photo;
    if(m_photo) {
        m_photo->setParent(this);
        m_core.setPhoto(m_photo->core());
        connect(m_photo.data(), &PhotoObject::coreChanged, this, &BotInlineResultObject::corePhotoChanged);
    }
    Q_EMIT photoChanged();
    Q_EMIT coreChanged();
}

PhotoObject*  BotInlineResultObject::photo() const {
    return m_photo;
}

void BotInlineResultObject::setSendMessage(BotInlineMessageObject* sendMessage) {
    if(m_sendMessage == sendMessage) return;
    if(m_sendMessage) delete m_sendMessage;
    m_sendMessage = sendMessage;
    if(m_sendMessage) {
        m_sendMessage->setParent(this);
        m_core.setSendMessage(m_sendMessage->core());
        connect(m_sendMessage.data(), &BotInlineMessageObject::coreChanged, this, &BotInlineResultObject::coreSendMessageChanged);
    }
    Q_EMIT sendMessageChanged();
    Q_EMIT coreChanged();
}

BotInlineMessageObject*  BotInlineResultObject::sendMessage() const {
    return m_sendMessage;
}

void BotInlineResultObject::setThumbUrl(const QString &thumbUrl) {
    if(m_core.thumbUrl() == thumbUrl) return;
    m_core.setThumbUrl(thumbUrl);
    Q_EMIT thumbUrlChanged();
    Q_EMIT coreChanged();
}

QString BotInlineResultObject::thumbUrl() const {
    return m_core.thumbUrl();
}

void BotInlineResultObject::setTitle(const QString &title) {
    if(m_core.title() == title) return;
    m_core.setTitle(title);
    Q_EMIT titleChanged();
    Q_EMIT coreChanged();
}

QString BotInlineResultObject::title() const {
    return m_core.title();
}

void BotInlineResultObject::setType(const QString &type) {
    if(m_core.type() == type) return;
    m_core.setType(type);
    Q_EMIT typeChanged();
    Q_EMIT coreChanged();
}

QString BotInlineResultObject::type() const {
    return m_core.type();
}

void BotInlineResultObject::setUrl(const QString &url) {
    if(m_core.url() == url) return;
    m_core.setUrl(url);
    Q_EMIT urlChanged();
    Q_EMIT coreChanged();
}

QString BotInlineResultObject::url() const {
    return m_core.url();
}

void BotInlineResultObject::setW(qint32 w) {
    if(m_core.w() == w) return;
    m_core.setW(w);
    Q_EMIT wChanged();
    Q_EMIT coreChanged();
}

qint32 BotInlineResultObject::w() const {
    return m_core.w();
}

BotInlineResultObject &BotInlineResultObject::operator =(const BotInlineResult &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_document->setCore(b.document());
    m_photo->setCore(b.photo());
    m_sendMessage->setCore(b.sendMessage());

    Q_EMIT contentTypeChanged();
    Q_EMIT contentUrlChanged();
    Q_EMIT descriptionChanged();
    Q_EMIT documentChanged();
    Q_EMIT durationChanged();
    Q_EMIT flagsChanged();
    Q_EMIT hChanged();
    Q_EMIT idChanged();
    Q_EMIT photoChanged();
    Q_EMIT sendMessageChanged();
    Q_EMIT thumbUrlChanged();
    Q_EMIT titleChanged();
    Q_EMIT typeChanged();
    Q_EMIT urlChanged();
    Q_EMIT wChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool BotInlineResultObject::operator ==(const BotInlineResult &b) const {
    return m_core == b;
}

void BotInlineResultObject::setClassType(quint32 classType) {
    BotInlineResult::BotInlineResultClassType result;
    switch(classType) {
    case TypeBotInlineResult:
        result = BotInlineResult::typeBotInlineResult;
        break;
    case TypeBotInlineMediaResult:
        result = BotInlineResult::typeBotInlineMediaResult;
        break;
    default:
        result = BotInlineResult::typeBotInlineResult;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 BotInlineResultObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case BotInlineResult::typeBotInlineResult:
        result = TypeBotInlineResult;
        break;
    case BotInlineResult::typeBotInlineMediaResult:
        result = TypeBotInlineMediaResult;
        break;
    default:
        result = TypeBotInlineResult;
        break;
    }

    return result;
}

void BotInlineResultObject::setCore(const BotInlineResult &core) {
    operator =(core);
}

BotInlineResult BotInlineResultObject::core() const {
    return m_core;
}

void BotInlineResultObject::coreDocumentChanged() {
    if(m_core.document() == m_document->core()) return;
    m_core.setDocument(m_document->core());
    Q_EMIT documentChanged();
    Q_EMIT coreChanged();
}

void BotInlineResultObject::corePhotoChanged() {
    if(m_core.photo() == m_photo->core()) return;
    m_core.setPhoto(m_photo->core());
    Q_EMIT photoChanged();
    Q_EMIT coreChanged();
}

void BotInlineResultObject::coreSendMessageChanged() {
    if(m_core.sendMessage() == m_sendMessage->core()) return;
    m_core.setSendMessage(m_sendMessage->core());
    Q_EMIT sendMessageChanged();
    Q_EMIT coreChanged();
}

