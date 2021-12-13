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
    setFixedSize(vector_[0], vector_[1]);
    // create the scene
    scene = new QGraphicsScene();
    // make the scene 1000x800 instead of infinity by infinity (default)
    scene->setSceneRect(0, 0, vector_[0], vector_[1]);
    setScene(scene);
    show();
}

void Game::Start() {
    scene->clear();
    setBackgroundBrush(QBrush(QImage("../images/background.jpg")));
    // create the player
    player = new Player();
    player->setPos(vector_[3], vector_[2]);// TODO generalize to always be in the middle bottom of screen
    // make the player focusable and set it to be the current focus
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    // add the player to the scene
    scene->addItem(player);

    // create the score/health
    score = new Score();
    scene->addItem(score);
    health = new Health();
    health->setPos(health->x(), health->y() + vector_[5]);
    scene->addItem(health);
    // spawn enemies
    auto *timer = new QTimer();
    QObject::connect(timer, SIGNAL(timeout()), player, SLOT(Spawn()));
    timer->start(2 * vector_[0]);
    show();
}

void Game::DisplayMainMenu() {
    setBackgroundBrush(QBrush(QImage("../images/5th_background.jpg")));
    auto *title_text = new QGraphicsTextItem();
    QFont title_font("comic sans", vector_[4]);
    title_text->setFont(title_font);
    int tx_pos = this->width() / 2 - title_text->boundingRect().width() / 2;
    int ty_pos = display_[0];
    title_text->setPos(tx_pos, ty_pos);
    scene->addItem(title_text);

    auto *play_button = new Button(QString("Play"));
    int bx_pos = this->width() / 2 - play_button->boundingRect().width() / 2;
    int by_pos = display_[1];
    play_button->setPos(bx_pos, by_pos);
    connect(play_button, SIGNAL(clicked()), this, SLOT(Start()));
    scene->addItem(play_button);

    auto *quit_button = new Button(QString("Quit"));
    int qx_pos = this->width() / 2 - quit_button->boundingRect().width() / 2;
    int qy_pos = display_[2];
    quit_button->setPos(qx_pos, qy_pos);
    connect(quit_button, SIGNAL(clicked()), this, SLOT(close()));
    scene->addItem(quit_button);
}

void Game::DrawPanel(int x, int y, int width, int height, const QColor &color, double opacity) const {
    // draws a panel at the specified location with the specified properties
    auto *panel = new QGraphicsRectItem(x, y, width, height);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(color);
    panel->setBrush(brush);
    panel->setOpacity(opacity);
    scene->addItem(panel);
}

void Game::GameOver() {
    DisplayGameOverWindow(QString::number(score->GetScore()));
}

void Game::DisplayGameOverWindow(const QString &message) {

    player->setEnabled(false);
    score->setEnabled(false);
    health->setEnabled(false);
    DrawPanel(0, 0, draw_[0], draw_[1], Qt::black, 0.65);
    DrawPanel(draw_[2], draw_[3], draw_[4], draw_[4], Qt::lightGray, 0.75);

    auto *play_again = new Button(QString("Play Again"));
    play_again->setPos(draw_[5], draw_[6]);
    scene->addItem(play_again);
    connect(play_again, SIGNAL(clicked()), this, SLOT(RestartGame()));

    auto *quit = new Button(QString("Quit"));
    quit->setPos(draw_[5], draw_[7]);
    scene->addItem(quit);
    connect(quit, SIGNAL(clicked()), this, SLOT(close()));

    auto *over_text = new QGraphicsTextItem("Your score is " + message);
    over_text->setPos(draw_[8], draw_[draw_.size() - 1]);
    scene->addItem(over_text);
}
void Game::RestartGame() {
    scene->clear();
    Start();
}
