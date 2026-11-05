#ifndef PLEASEWORK_H
#define PLEASEWORK_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class PleaseWork;
}
QT_END_NAMESPACE

class PleaseWork : public QMainWindow
{
    Q_OBJECT

public:
    explicit PleaseWork(QWidget *parent = nullptr);
    ~PleaseWork() override;

private:
    Ui::PleaseWork *ui;
};
#endif // PLEASEWORK_H
