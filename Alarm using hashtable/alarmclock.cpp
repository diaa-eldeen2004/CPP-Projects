#include "alarmclock.h"
#include <QMessageBox>
#include <QTime>
#include <QTimer>
#include <QLabel>
#include <QPushButton>

AlarmClock::AlarmClock(QWidget *parent) :
    QWidget(parent),
    alarmRinging(false)
{
    // Create UI elements
    timeEdit = new QLineEdit(this);
    timeEdit->setPlaceholderText("Enter time (HH:MM)");

    labelEdit = new QLineEdit(this);
    labelEdit->setPlaceholderText("Enter label");

    addButton = new QPushButton("Add Alarm", this);
    deleteButton = new QPushButton("Delete Alarm", this);
    showButton = new QPushButton("Show Alarms", this);

    statusLabel = new QLabel("No alarms set", this);

    // Set up layout
    layout = new QVBoxLayout(this);
    layout->addWidget(timeEdit);
    layout->addWidget(labelEdit);
    layout->addWidget(addButton);
    layout->addWidget(deleteButton);
    layout->addWidget(showButton);
    layout->addWidget(statusLabel);

    // Set up the timer to check the current time
    alarmTimer = new QTimer(this);
    connect(alarmTimer, &QTimer::timeout, this, &AlarmClock::updateAlarmStatus);
    alarmTimer->start(1000); // check every second

    // Connect buttons to slots
    connect(addButton, &QPushButton::clicked, this, &AlarmClock::onAddButtonClicked);
    connect(deleteButton, &QPushButton::clicked, this, &AlarmClock::onDeleteButtonClicked);
    connect(showButton, &QPushButton::clicked, this, &AlarmClock::onShowButtonClicked);
}

AlarmClock::~AlarmClock() {}

void AlarmClock::onAddButtonClicked()
{
    QString timeText = timeEdit->text();
    QString labelText = labelEdit->text();

    // Validate input
    if (timeText.isEmpty() || labelText.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter both time and label");
        return;
    }

    // Parse time
    QTime alarmTime = QTime::fromString(timeText, "HH:mm");
    if (!alarmTime.isValid()) {
        QMessageBox::warning(this, "Invalid Time", "The time format is incorrect. Use HH:MM");
        return;
    }

    // Add the alarm
    addAlarm(alarmTime.hour(), alarmTime.minute(), labelText);
    timeEdit->clear();
    labelEdit->clear();
}

void AlarmClock::onDeleteButtonClicked()
{
    QString timeText = timeEdit->text();
    QString labelText = labelEdit->text();

    // Validate input
    if (timeText.isEmpty() || labelText.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter both time and label");
        return;
    }

    // Parse time
    QTime alarmTime = QTime::fromString(timeText, "HH:mm");
    if (!alarmTime.isValid()) {
        QMessageBox::warning(this, "Invalid Time", "The time format is incorrect. Use HH:MM");
        return;
    }

    // Delete the alarm
    deleteAlarm(alarmTime.hour(), alarmTime.minute(), labelText);
    timeEdit->clear();
    labelEdit->clear();
}

void AlarmClock::onShowButtonClicked()
{
    displayAlarms();
}

void AlarmClock::onRingAlarm()
{
    if (!alarmRinging) {
        statusLabel->setText("Alarm ringing!");
        alarmRinging = true;
    }
}

void AlarmClock::updateAlarmStatus()
{
    QTime currentTime = QTime::currentTime();

    for (int i = 0; i < alarmTimes.size(); ++i) {
        if (currentTime.hour() == alarmTimes[i].hour() && currentTime.minute() == alarmTimes[i].minute()) {
            onRingAlarm();
            break;
        }
    }
}

void AlarmClock::addAlarm(int hour, int minute, const QString &label)
{
    alarmTimes.append(QTime(hour, minute));
    alarmLabels.append(label);
    statusLabel->setText("Alarm added!");
}

void AlarmClock::deleteAlarm(int hour, int minute, const QString &label)
{
    for (int i = 0; i < alarmTimes.size(); ++i) {
        if (alarmTimes[i].hour() == hour && alarmTimes[i].minute() == minute && alarmLabels[i] == label) {
            alarmTimes.removeAt(i);
            alarmLabels.removeAt(i);
            statusLabel->setText("Alarm deleted!");
            return;
        }
    }

    statusLabel->setText("No such alarm found!");
}

void AlarmClock::displayAlarms()
{
    QString displayText;
    if (alarmTimes.isEmpty()) {
        displayText = "No alarms set.";
    } else {
        for (int i = 0; i < alarmTimes.size(); ++i) {
            displayText += alarmTimes[i].toString("HH:mm") + " - " + alarmLabels[i] + "\n";
        }
    }
    statusLabel->setText(displayText);
}
