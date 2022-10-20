
#pragma once

#include <iostream>
#include <QApplication>
#include <QPlainTextEdit>
#include <QWebEngineView>

#include "./ui_html_editor.h"

class CallerHtmlEditor :public QWidget, public Ui::htmlEditor {
  Q_OBJECT
public:
  CallerHtmlEditor(QWidget* parent = nullptr) : QWidget(parent) {
	setupUi(this);
  }
public slots:
  void slotTextChanged();
};

