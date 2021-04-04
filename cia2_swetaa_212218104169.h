#ifndef CIA2_SWETAA_212218104169_H
#define CIA2_SWETAA_212218104169_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Cia2_swetaa_212218104169; }
QT_END_NAMESPACE

class Cia2_swetaa_212218104169 : public QMainWindow
{
    Q_OBJECT

public:
    Cia2_swetaa_212218104169(QWidget *parent = nullptr);
    ~Cia2_swetaa_212218104169();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_toggled(bool checked);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::Cia2_swetaa_212218104169 *ui;
};
#endif // CIA2_SWETAA_212218104169_H
