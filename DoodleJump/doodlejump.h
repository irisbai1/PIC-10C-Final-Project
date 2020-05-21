#ifndef DOODLEJUMP_H
#define DOODLEJUMP_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class DoodleJump; }
QT_END_NAMESPACE

class DoodleJump : public QMainWindow
{
    Q_OBJECT

public:
    DoodleJump(QWidget *parent = nullptr);
    ~DoodleJump();

private:
    Ui::DoodleJump *ui;
};
#endif // DOODLEJUMP_H
