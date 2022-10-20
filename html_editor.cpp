// html_editor.cpp: определяет точку входа для приложения.
//

#include "html_editor.h"

void CallerHtmlEditor::slotTextChanged() {
  webView->setHtml(html_source->toPlainText());
}

