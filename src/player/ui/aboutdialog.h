﻿#pragma once

#include <QDialog>

namespace Ui {
class AboutDialog;
}

class AboutDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AboutDialog(QWidget *parent = nullptr);
    ~AboutDialog() override;

    static void about(QWidget *parent = nullptr);

private:
    QString compilerText_HTML();
    QString compilerText_PlainText();
    QString aboutText_HTML();
    QString aboutText_PlainText();

private:
    Ui::AboutDialog *ui;
};
