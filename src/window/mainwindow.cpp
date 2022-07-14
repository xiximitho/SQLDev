#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setProps();
    createActions();
    createMenus();
}

MainWindow::~MainWindow()
{
}

void MainWindow::setProps()
{
    this->setWindowTitle("SQL Dev");
    this->setMinimumSize(1280,720);
    this->adjustSize();
}

void MainWindow::createMenus()
{
    /*Menu Arquivo*/
    fileMenu = menuBar()->addMenu(tr("&Arquivo"));
    fileMenu->addAction(newAct);
    fileMenu->addAction(openAct);

    /*Menu Editar*/
    editMenu = menuBar()->addMenu(tr("&Editar"));

    /*Menu Ajuda*/
    helpMenu = menuBar()->addMenu(tr("&Ajuda"));

    /*Menu Formatar*/
    formatMenu = editMenu->addMenu(tr("&Formatar"));
    formatMenu->addAction(identAct);
}

void MainWindow::createActions()
{
    newAct = new QAction(tr("&Novo"), this);
    newAct->setShortcuts(QKeySequence::New);
    newAct->setStatusTip(tr("Cria um novo arquivo"));
    connect(newAct, &QAction::triggered, this, &MainWindow::newFile);

    openAct = new QAction(tr("&Abrir"), this);
    openAct->setShortcuts(QKeySequence::Open);
    openAct->setStatusTip(tr("Abrir um arquivo"));
    connect(openAct, &QAction::triggered, this, &MainWindow::open);

    identAct = new QAction(tr("&Identar"), this);
    identAct->setShortcuts(QKeySequence::Italic);
    identAct->setStatusTip(tr("Identa o arquivo"));
    connect(identAct, &QAction::triggered, this, &MainWindow::ident);
}

void MainWindow::newFile()
{

}

void MainWindow::open()
{

}

void MainWindow::ident()
{

}
