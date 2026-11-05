#include "pleasework.h"
#include <iostream>
#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <thread>
#include <chrono>




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "PLEASE_WORK_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    PleaseWork window;

    window.showMaximized();
    return QApplication::exec();
}
