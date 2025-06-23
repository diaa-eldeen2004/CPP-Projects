#ifndef ALARMCLOCK_H
#define ALARMCLOCK_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QTimer>
#include <QLabel>
#include <QList>
#include <QTime>

class AlarmClock : public QWidget
{
    Q_OBJECT

public:
    explicit AlarmClock(QWidget *parent = nullptr);
    ~AlarmClock();

private slots:
    void onAddButtonClicked();
    void onDeleteButtonClicked();
    void onShowButtonClicked();
    void onRingAlarm();
    void updateAlarmStatus();

private:
    void addAlarm(int hour, int minute, const QString &label);
    void deleteAlarm(int hour, int minute, const QString &label);
    void displayAlarms();

    QLineEdit *timeEdit;
    QLineEdit *labelEdit;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QPushButton *showButton;
    QLabel *statusLabel;
    QVBoxLayout *layout;
    QTimer *alarmTimer;
    QList<QTime> alarmTimes;
    QList<QString> alarmLabels;
    bool alarmRinging;
};

#endif // ALARMCLOCK_H
