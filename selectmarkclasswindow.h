﻿#ifndef SELECTMARKCLASSWINDOW_H
#define SELECTMARKCLASSWINDOW_H
#include <QWidget>
#include <QDialog>
#include <QLabel>
#include <QSpinBox>
#include <QComboBox>
#include <QLineEdit>
#include <QCheckBox>
#include <QPushButton>
#include <QListWidget>
#include <QGroupBox>

class SelectMarkClassWindow : public QDialog
{
     Q_OBJECT
public:
    explicit SelectMarkClassWindow(QDialog *parent = 0);

    void setObjectRect(const QString sampleClass);
    QString getObjectClass();
    bool getIsDifficult();
    int getObjectFlag();

signals:

public slots:

    void slotSelectItem(QListWidgetItem *item);
    void slotSelectOk(QListWidgetItem *item);
    void slotOk();

private:

    QLineEdit *classText;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QListWidget *classListWidget;
    QLabel *objectFlagLabel;
    QGroupBox *flagGroundBox;
    QCheckBox *isDifficultBox;
    QComboBox *objectFlagBox;

    QList<QString> classList;

    QString sampleCalss;

    void initData();
    void initUI();
    void initConncet();

    void initObjectFlagBox();
};

#endif // SELECTMARKCLASSWINDOW_H
