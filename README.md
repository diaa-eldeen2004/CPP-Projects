# CPP Projects

## 📌 Quick Links

* [Divide and Conquer Algorithms 🚀](#divide-and-conquer-algorithms-)
* [Divide and Conquer Algorithm Paper](#divide-and-conquer-algorithm-paper)
* [Qt Memory Card Game 🃏](#qt-memory-card-game-)
* [Qt Alarm Clock ⏰](#qt-alarm-clock-)
* [C++ Banking System 🏦](#c-banking-system-)
* [Academic Course Advisor 🎓](#academic-course-advisor-)

## [Divide and Conquer Algorithms 🚀](#divide-and-conquer-algorithms-)

**Description:**
Divide and Conquer Algorithms is a C++ console application developed with Qt Creator to demonstrate efficient problem-solving using the divide-and-conquer paradigm. It includes implementations of Fast Exponentiation and Peak Element Finding, emphasizing their logarithmic time complexity. Users input values for exponentiation or array elements for peak finding, with results and time complexity analysis based on the Master Theorem. 🧠

**Features:**

* **Fast Exponentiation ⚡**: Calculates base^exponent efficiently using recursive divide-and-conquer (O(log n)).
* **Peak Element Finding 📈**: Identifies a peak element in an array using binary search in O(log n) time.
* **User Input ⌨**: Accepts inputs for both features.
* **Time Complexity Analysis 📊**: In-code comments analyze algorithmic complexity (Case 2: O(log n)).

**Technologies Used:**

* **C++ 💻**: Core programming language.
* **Qt Creator 🛠️**: IDE used for development.
* **Standard Libraries**: Includes `<iostream>` and `<vector>`.

**How It Works:**

* **Fast Exponentiation**: Divides the problem by half recursively.
* **Peak Element**: Binary search compares midpoints with neighbors.
* **Efficiency**: Achieves O(log n) time complexity.

**Usage:**

* Input base and exponent for computation.
* Enter array size and elements for peak finding.
* Results are displayed in the console.

**Dependencies:**

* C++11 or later 📦
* Standard C++ libraries (`<iostream>`, `<vector>`)

**File Structure:**

* `main.cpp`: Implements both algorithms and user interaction.

**Future Improvements:**

* Add more algorithms (e.g., merge sort) 📋
* Create graphical interface using Qt 🎨
* Add file-based input support 📜
* Visualize steps for educational use 📉

## [Divide and Conquer Algorithm Paper](#divide-and-conquer-algorithm-paper)

This repository contains a LaTeX paper discussing Fast Exponentiation and Peak Element algorithms. Developed by students from the Faculty of Computer Science at Misr International University, it explores the divide-and-conquer approach.

**What’s Inside?**

* **Fast Exponentiation**: Efficient power calculation (e.g., x^n) using recursive halving.
* **Peak Element**: Finds an array element larger than neighbors.
* **Details**: C++ examples, complexity analysis (O(log n)), real-world uses, and comparisons.
* **Reference**: Based on *Foundations of Algorithms* by Neapolitan & Naimipour (2009).

**Why Check It Out?**

* Demonstrates the power of problem decomposition.
* Offers educational insights.
* LaTeX source included for reuse.

**License**: MIT License
**Contributing**: Contributions welcome via PR or issues! 🙌

## [Qt Memory Card Game 🃏](#qt-memory-card-game-)

**Description:**
Qt Memory Card Game is a classic memory-matching game built with Qt Creator using C++ and Qt Widgets. Players flip cards in a 4x4 grid to find matches, with score and time tracking.

**Features:**

* **Card Flipping 🔄**: Match pairs (A-H).
* **Score Tracking ⭐**: Gain 150 points per match (max 1200).
* **Time Tracking ⏱**: Shows elapsed time.
* **Dynamic UI 🎨**: Visual feedback for card flips.
* **Game Controls ▶️**: Start or cancel game.
* **Win Condition 🏆**: Message when all matches found.

**Technologies Used:**

* **C++ 💻**
* **Qt Framework 🎮**
* **Qt Creator 🛠️**
* **Qt Classes**: `QTimer`, `QPushButton`, `QLabel`, `QGridLayout`, `QMessageBox`, etc.

**How It Works:**

* Initializes and shuffles 16 cards.
* Flips reveal card values and track matches.
* QTimer manages delays and time.

**Usage:**

* Click "Start" to begin.
* Flip two cards to match.
* Monitor score and time.

**Dependencies:**

* Qt 5 or later (Widgets module) 📦
* C++11 or later

**File Structure:**

* `MatchingGame.h`, `MatchingGame.cpp`, `main.cpp`

**Future Improvements:**

* Add sound effects 🎶
* Difficulty levels ⏳
* High score tracking 🥇
* Animations/custom designs ✨

**License**: MIT License
**Contributing**: PRs and issues welcome! 🙌

## [Qt Alarm Clock ⏰](#qt-alarm-clock-)

**Description:**
A desktop alarm clock app built with Qt Creator (C++ and Qt Widgets). Users can manage alarms and get notifications when alarms match the system time.

**Features:**

* **Add Alarms ➕**
* **Delete Alarms 🗑️**
* **View Alarms 📋**
* **Real-Time Checking 🔄**
* **Input Validation ✅**
* **Status Updates 💬**

**Technologies Used:**

* **C++ 💻**
* **Qt Framework**
* **Qt Creator**
* **Qt Classes**: `QTimer`, `QLineEdit`, `QPushButton`, `QLabel`, `QVBoxLayout`, `QMessageBox`

**How It Works:**

* QTimer checks time every second.
* Alarms stored in `QList`.
* GUI for adding/deleting/viewing alarms.

**Usage:**

* Enter time & label.
* Add/Delete/View alarms.
* Alert triggers when time matches.

**Dependencies:**

* Qt 5+ 📦
* C++11+

**File Structure:**

* `alarmclock.h`, `alarmclock.cpp`, `main.cpp`

**Future Improvements:**

* Add sound effects 🎵
* Recurring alarms/snooze 🛌
* Save/load alarm settings 💾
* Enhanced styling 🎨

**License**: MIT License
**Contributing**: PRs/issues welcome! 🙌

## [C++ Banking System 🏦](#c-banking-system-)

**Description:**
A C++ console-based application that simulates banking operations with file-based data storage.

**Features:**

### Admin Panel 👨‍💼

* Login
* Add/Update/Search clients
* Display all/VIP clients
* Load existing data

### Client Panel 👤

* Login
* View balance
* Deposit/Withdraw

### Data Storage

* Client data saved in `Clients data.txt`
* Persistent across sessions

### VIP Detection

* Based on balance threshold

**Built With:**

* C++ (OOP)
* File I/O

**File Structure:**

* `main()` calls `Client::displaymenu()`
* Core logic inside `Client` class

**Ideal For:**

* Practicing file handling
* Learning OOP in C++
* Simulating data systems

## [Academic Course Advisor 🎓](#academic-course-advisor-)

**Purpose:**
Analyzes a student's transcript and recommends suitable courses based on credit hours and prerequisites.

**Key Files:**

* `transcript.txt`: Completed courses
* `course_1.txt` to `course_4.txt`: Course levels
* `ADVISE CENTER.txt`: Output recommendations

**Data Structures:**

* `struct courses`: Course info
* `struct student`: Student info and completed courses

**Core Functions:**

1. `Get_student_data()` – reads student input & courses
2. `Get_courses_data_1/2/3/4()` – loads courses per level
3. `totall()` – calculates total credit hours
4. `check()` – recommends courses based on hours/prereqs

**Main Flow in `main()`**

1. Gather data
2. Load course files
3. Compute hours
4. Recommend courses
5. Output results

**Features:**

* Validates prerequisites
* Structured file input/output

**Limitations:**

* 1 student, 6 courses max
* Rigid file handling
* No dynamic memory

---

**License:** MIT License
**Contributing:** Contributions are encouraged! 🙌
