/***************************************************
 * @file      mainwindow.h
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 ***************************************************/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------
#include "./ui_mainWindow.h"
#include <QMainWindow>

/*
#include <nameOfLib.c>   || #include "nameOfLib.c"
#include <nameOfLib.h>   || #include "nameOfLib.h"
*/

//? ------------------------------ COLORS PROTOTYPE DECLARATION PART ------------------------------
/*
 * TEXT COLORS
 ** define COLOR "ANSI CODE"...
 * BACKGROUND COLORS
 ** define bgCOLOR "ANSI CODE"...
 */

//? -------------------------------  MSG PROTOTYPE DECLARATION PART -------------------------------
/*
 * ERROR_MSG
 ** define errorMsgXX...
 * SUCCESS_MSG
 ** define successMsgXX...
 */

//? ------------------------------ STRUCT PROTOTYPE DECLARATION PART ------------------------------
/*
 * struct...
 */

//? ----------------------------- FUNCTIONS PROTOTYPE DECLARATION PART -----------------------------
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

private:
  Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
