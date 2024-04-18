
#include "serverfunction.h"

QByteArray parse(QString request) {
    // reg&login&password&email
    // auth&login&password
    // getTask&'1 or 2'
    // checkTask& '1 or 2' & variant & answer
    // getUserStat&login
    QStringList data_client = request.split(QLatin1Char('&'));
    QString method = data_client.front();
    data_client.pop_front();
    QString response;
    if (method == QString("auth")) {
        response = auth(data_client.at(0),data_client.at(1));
    }
    else if (method == QString("reg")) {
        response = reg(data_client.at(0),data_client.at(1),data_client.at(2));
    }
    else if (method == QString("checkTask")) {
        response = checkTask(data_client.at(0),data_client.at(1), data_client.at(2), data_client.at(3));
    }
    else if (method == QString("getTask")) {
        response = getTask(data_client.at(0));
    }
    else if (method == QString("getUserStat")) {
        response = getUserStat(data_client.at(0));
    }
    else {
        QVariantMap error_response;
        error_response["error"] = QString("Function is not defined");
        response = QJsonDocument::fromVariant(error_response).toJson(QJsonDocument::Compact);
    }
    return QByteArray((response + "\r\n").toUtf8());
}

QByteArray auth(QString login, QString input_password) {
    QVariantMap response;
    QString query = QString("SELECT * FROM Users WHERE login = \"%1\"").arg(login);
    QSqlQuery queryResult = Database::getInstance()->doSQLQuery(query);
    QSqlRecord record = queryResult.record();
    queryResult.first();
    QVariant dbPassword = queryResult.value(record.indexOf("password"));
    if (dbPassword == QVariant::Invalid) {
        response["status"] = "fail 1";
    }
    else if (dbPassword.toString() == input_password) {
        QString token = queryResult.value(record.indexOf("token")).toString();
        response["status"] = "success";
        response["token"] = token;
    }
    else {
        response["status"] = "fail1 2";
    }

    qDebug() << QString("Autherisation with login %1 and password %2").arg(login, input_password);
    return QJsonDocument::fromVariant(response).toJson(QJsonDocument::Compact);
}

QByteArray reg(QString login, QString password,QString email) {
    QVariantMap response;
    QString query = QString("INSERT INTO Users(login, password, email) "
                            "VALUES (\"%1\", \"%2\", \"%3\")")
                        .arg(login, password,email);
    Database::getInstance()->doSQLQuery(query);
    response["status"] = "success";
    return QJsonDocument::fromVariant(response).toJson(QJsonDocument::Compact);
}

/*QByteArray getUserStat(QString login) {
    QVariantMap response;
    //QString userToken = request["token"].toString();
    QString query = QString("SELECT Tasks.type, COUNT(*) AS solved_tasks "
                            "FROM UsersTasks "
                            "JOIN Tasks ON Tasks.taskID = UsersTasks.taskID "
                            "WHERE UsersTasks.userID = (SELECT userID FROM Users WHERE login = \"%1\") "
                            "GROUP BY Tasks.type")
                        .arg(login);
    QSqlQuery stat = Database::getInstance()->doSQLQuery(query);
    QJsonArray recordsArray;
    while(stat.next()) {
        QJsonObject recordObject;
        for (int x = 0; x < stat.record().count(); x++) {
            recordObject.insert(stat.record().fieldName(x), QJsonValue::fromVariant(stat.value(x)));
        }
        recordsArray.push_back(recordObject);
    }
    response["status"] = "success";
    response["result"] = recordsArray;
    return QJsonDocument::fromVariant(response).toJson(QJsonDocument::Compact);
}*/

QByteArray getUserStat(QString token) {
    QVariantMap response;
    QString userToken = token;
    QString query = QString("SELECT Tasks.type, COUNT(*) AS solved_tasks "
                            "FROM UsersTasks "
                            "JOIN Tasks ON Tasks.taskID = UsersTasks.taskID "
                            "WHERE UsersTasks.userID = (SELECT userID FROM Users WHERE token = \"%1\") "
                            "GROUP BY Tasks.type")
                        .arg(userToken);
    QSqlQuery stat = Database::getInstance()->doSQLQuery(query);
    QJsonArray recordsArray;
    while(stat.next()) {
        QJsonObject recordObject;
        for (int x = 0; x < stat.record().count(); x++) {
            recordObject.insert(stat.record().fieldName(x), QJsonValue::fromVariant(stat.value(x)));
        }
        recordsArray.push_back(recordObject);
    }
    response["status"] = "success";
    response["result"] = recordsArray;
    return QJsonDocument::fromVariant(response).toJson(QJsonDocument::Compact);
}

QByteArray getTask(QString number_taskType ) {
    QVariantMap response;
    QVariantMap task;
    int taskType = number_taskType.toInt();
    if(taskType == 0)
    {
        task = generateMatrixTask();
    }
    else if(taskType == 1)
    {
        task = get_result();
    }
    else if(taskType == 2)
    {
        task = Findtheminimumpoint();
    }
    else
    {
        response["status"] = "fail";
        return QJsonDocument::fromVariant(response).toJson(QJsonDocument::Compact);
    }
    QString taskText = task["text"].toString();
    QString taskAnswer = task["answer"].toString();
    QString query = QString("INSERT INTO Tasks(text, answer, type) "
                            "VALUES (\"%1\", \"%2\", %3)")
                        .arg(taskText).arg(taskAnswer).arg(taskType);
    QSqlQuery queryResult = Database::getInstance()->doSQLQuery(query);
    response["status"] = "success";
    //response["status"] = taskType;
    response["taskId"] = queryResult.lastInsertId().toInt();
    response["taskText"] = taskText;
    return QJsonDocument::fromVariant(response).toJson(QJsonDocument::Compact);
}

/*QByteArray getTask1(QString number_taskType ) {
    QVariantMap response;
    int taskType = number_taskType.toInt();
    QVariantMap task = get_result();
    QString taskText = task["text"].toString();
    QString taskAnswer = task["answer"].toString();
    QString query = QString("INSERT INTO Tasks(text, answer, type) "
                            "VALUES (\"%1\", \"%2\", %3)")
                        .arg(taskText).arg(taskAnswer).arg(taskType);
    QSqlQuery queryResult = Database::getInstance()->doSQLQuery(query);
    response["status"] = "success";
    response["taskId"] = queryResult.lastInsertId().toInt();
    response["taskText"] = taskText;
    return QJsonDocument::fromVariant(response).toJson(QJsonDocument::Compact);
}

QByteArray getTask2(QString number_taskType ) {
    QVariantMap response;
    int taskType = number_taskType.toInt();
    QVariantMap task = Findtheminimumpoint();
    QString taskText = task["text"].toString();
    QString taskAnswer = task["answer"].toString();
    QString query = QString("INSERT INTO Tasks(text, answer, type) "
                            "VALUES (\"%1\", \"%2\", %3)")
                        .arg(taskText).arg(taskAnswer).arg(taskType);
    QSqlQuery queryResult = Database::getInstance()->doSQLQuery(query);
    response["status"] = "success";
    response["taskId"] = queryResult.lastInsertId().toInt();
    response["taskText"] = taskText;
    return QJsonDocument::fromVariant(response).toJson(QJsonDocument::Compact);
}*/

QByteArray checkTask( QString TaskId, QString number_taskType, QString answer, QString userToken) { //QString userID,
    QVariantMap response;
    int taskId = TaskId.toInt();
    int taskType = number_taskType.toInt();
    QString query = QString("SELECT * FROM Tasks WHERE taskId = %1 and type = %2").arg(taskId).arg(taskType);
    QSqlQuery queryResult = Database::getInstance()->doSQLQuery(query);
    QSqlRecord record = queryResult.record();
    queryResult.next();
    QString correctAnswer = queryResult.value(record.indexOf("answer")).toString();
    if (answer == correctAnswer) {
        response["status"] = "success";
        QString query = QString("INSERT INTO UsersTasks(userID, taskid) "
                                "SELECT userID, %1 FROM Users WHERE token == \"%2\"")
                            .arg(taskId).arg(userToken);
        Database::getInstance()->doSQLQuery(query);
    }
    else {
        response["status"] = "fail";
    }
    return QJsonDocument::fromVariant(response).toJson(QJsonDocument::Compact);
}
