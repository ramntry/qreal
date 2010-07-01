#pragma once
#include "IKeyManager.h"
#include "keymanager.h"
#include "../../kernel/ids.h"
#include "../../editorManager/editorManager.h"
#include <QPoint>
#include <QList>
#include <QString>
#include <QMap>

class MouseMovementManager
{
public:
    MouseMovementManager(QList<qReal::Id> elements, qReal::EditorManager editorManager);
    void setElements(QList<qReal::Id> const & elements);
    void addPoint(QPoint const & point);
    qReal::Id getObject();
    static QList<QPoint> stringToPath(QString const &str);

private:
    static QPoint parsePoint(QString const &str);
    void createMap();
    QList<QPoint> mPath;
    IKeyManager * mKeyManager;
    KeyManager mKeyStringManager;
    qReal::EditorManager * mEditorManager;
    QList<qReal::Id> mElements;
    QMap<QString, qReal::Id> mGestures;
};
