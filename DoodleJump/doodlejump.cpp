#include "doodlejump.h"
#include "ui_doodlejump.h"

DoodleJump::DoodleJump(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DoodleJump)
{
    ui->setupUi(this);
}

DoodleJump::~DoodleJump()
{
    delete ui;
}

