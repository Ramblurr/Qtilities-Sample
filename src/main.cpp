#include <QtGui>
#include <Qtilities>

int main(int argc, char *argv[])
{
    Qtilities::CoreGui::QtilitiesApplication app(argc, argv);
    QLabel label("Hello World!");

    label.show();

    return app.exec();
}
