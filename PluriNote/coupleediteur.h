#ifndef coupleediteur_h
#define coupleediteur_h
#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QListWidget>
#include <QScrollArea>
#include <QLabel>
#include <QLineEdit>
#include "couple.h"

class CoupleEditeur : public QWidget{
    Q_OBJECT
    QListWidget* note1;
    QListWidget* note2;
    QScrollArea* scroll1;
    QScrollArea* scroll2;
    QLabel* note1l;
    QLabel* note2l;
    QLabel* labell;
    QVBoxLayout* note1Layout;
    QVBoxLayout* note2Layout;
    QHBoxLayout* notes;
    QHBoxLayout* label;
    QVBoxLayout* layout;
    QLineEdit* labelEdit;
    QPushButton* sauver;
    Couple* couple;

public:
    CoupleEditeur(Couple*, QWidget *parent = 0);
    //~CoupleEditeur() {}
    void setList1();
    void setList2();
signals:
public slots:
    void saveModifications();
private slots:
    void afficherBouton();
    void afficherLabel1();
    void afficherLabel2();
};

#endif
