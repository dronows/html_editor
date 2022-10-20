
#include "html_editor.h"


int main(int argc, char** argv)
{
  QApplication a(argc, argv);
  CallerHtmlEditor editor (nullptr);
  editor.resize(600,500);
  editor.show();
  return a.exec();
}
