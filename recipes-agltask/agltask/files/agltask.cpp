#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QPixmap backgroundImage(":/image/img.png");
    QLabel backgroundLabel;
    backgroundLabel.setPixmap(backgroundImage);

    int screenWidth = 1080;

    int imageHeight = backgroundImage.height() * screenWidth / backgroundImage.width();

    backgroundLabel.setScaledContents(true);
    backgroundLabel.resize(screenWidth, imageHeight);

    QLabel label("Hello! My Name is Anuj Solanki. \n This is my AGL Task. \n I am a 3rd year CSE student at IIT Mandi. \n I am proficient in App development and Machine Learning. \n I am looking forward to working with AGL. \n Thank You!");
    label.setAlignment(Qt::AlignCenter);
    label.setStyleSheet("font-size: 20pt; color: black;");

    QVBoxLayout layout;
    layout.addWidget(&label, 1, Qt::AlignCenter);

    QWidget window;
    window.resize(1080,1488);
    window.setLayout(&layout);
    backgroundLabel.setParent(&window);
    backgroundLabel.move(0, 0);
    window.show();

    return app.exec();
}
