#include "../include/Game.h"
#include "../include/Button.h"
#include <QBrush>
#include <QFont>
#include <QGraphicsTextItem>
#include <QGraphicsView>
#include <QImage>
#include <QTimer>

Game::Game(QWidget *parent) {
    // set up the screen
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1000, 800);
    // create the scene
    scene = new QGraphicsScene();
    // make the scene 1000x800 instead of infinity by infinity (default)
    scene->setSceneRect(0, 0, 1000, 800);
    setScene(scene);
    show();
}

void Game::Start() {
    scene->clear();
    setBackgroundBrush(QBrush(QImage("../src/Images/background.jpg")));
    // create the player
    player = new Player();
    player->setPos(550, 640);// TODO generalize to always be in the middle bottom of screen
    // make the player focusable and set it to be the current focus
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    // add the player to the scene
    scene->addItem(player);

    // create the score/health
    score = new Score();
    scene->addItem(score);
    health = new Health();
    health->setPos(health->x(), health->y() + 25);
    scene->addItem(health);
    // spawn enemies
    QTimer *timer = new QTimer();
    QObject::connect(timer, SIGNAL(timeout()), player, SLOT(Spawn()));
    timer->start(2000);
    show();
}

void Game::displayMainMenu() {
    setBackgroundBrush(QBrush(QImage("../src/Images/5th_background.jpg")));
    QGraphicsTextItem *title_text = new QGraphicsTextItem();
    QFont title_font("comic sans", 50);
    title_text->setFont(title_font);
    int tx_pos = this->width() / 2 - title_text->boundingRect().width() / 2;
    int ty_pos = 150;
    title_text->setPos(tx_pos, ty_pos);
    scene->addItem(title_text);

    Button *play_button = new Button(QString("Play"));
    int bx_pos = this->width() / 2 - play_button->boundingRect().width() / 2;
    int by_pos = 275;
    play_button->setPos(bx_pos, by_pos);
    connect(play_button, SIGNAL(clicked()), this, SLOT(Start()));
    scene->addItem(play_button);

    Button *quit_button = new Button(QString("Quit"));
    int qx_pos = this->width() / 2 - quit_button->boundingRect().width() / 2;
    int qy_pos = 350;
    quit_button->setPos(qx_pos, qy_pos);
    connect(quit_button, SIGNAL(clicked()), this, SLOT(close()));
    scene->addItem(quit_button);
}

void Game::drawPanel(int x, int y, int width, int height, QColor color, double opacity) {
    // draws a panel at the specified location with the specified properties
    QGraphicsRectItem *panel = new QGraphicsRectItem(x, y, width, height);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(color);
    panel->setBrush(brush);
    panel->setOpacity(opacity);
    scene->addItem(panel);
}

void Game::gameOver() {
    DisplayGameOverWindow(QString::number(score->GetScore()));
}

void Game::DisplayGameOverWindow(QString message) {

    player->setEnabled(false);
    score->setEnabled(false);
    health->setEnabled(false);

    drawPanel(0, 0, 1024, 768, Qt::black, 0.65);
    drawPanel(312, 184, 400, 400, Qt::lightGray, 0.75);

    Button *play_again = new Button(QString("Play Again"));
    play_again->setPos(410, 300);
    scene->addItem(play_again);
    connect(play_again, SIGNAL(clicked()), this, SLOT(RestartGame()));

    Button *quit = new Button(QString("Quit"));
    quit->setPos(410, 375);
    scene->addItem(quit);
    connect(quit, SIGNAL(clicked()), this, SLOT(close()));

    QGraphicsTextItem *over_text = new QGraphicsTextItem("Your score is " + message);
    over_text->setPos(460, 225);
    scene->addItem(over_text);
}
void Game::RestartGame() {
    scene->clear();
    Start();
}
