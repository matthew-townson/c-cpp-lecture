#include <QApplication>
#include <QPushButton>
#include <QMessageBox>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Create a button
    QPushButton button("Click me!", nullptr);

    // Connect button click signal to a lambda function
    QObject::connect(&button, &QPushButton::clicked, [&]() {
        // Display a message box when the button is clicked
        QMessageBox::information(nullptr, "Message", "Button clicked!");
    });

    // Set up the layout
    QVBoxLayout layout;
    layout.addWidget(&button);

    // Create a window
    QWidget window;
    window.setLayout(&layout);
    window.setWindowTitle("Simple GUI Example");
    window.show();

    return app.exec();
}