#ifndef PLANEGAME_TEST_H
#define PLANEGAME_TEST_H

#include "../include/Game.h"
#include "gtest/gtest.h"

extern Game *game;

int DisplayGameOverWindow(QString &message) {
    return game->DisplayGameOverWindow(message);
}

int ReturnFirstPosition(int first_position) {
    first_position = game->vector_[0];
    return first_position;
}

int DrawProperly(int draw_size) {
    draw_size = game->draw_[0];
    return draw_size;
}

int WrongDraw(int draw_size) {
    draw_size = game->draw_[0];
    return draw_size;
}

TEST(TestMessage, CheckForMessage) {
    const char *first_string = "Play";
    QString second_string = "Play";
    EXPECT_STREQ(first_string, reinterpret_cast<const char *>(DisplayGameOverWindow(second_string)));
}

TEST(TestPosition, CheckForPosition) {
    EXPECT_EQ(1000, ReturnFirstPosition(game->vector_[0]));
}

TEST(TestDraw, CheckForDraw) {
    EXPECT_EQ(1024, DrawProperly(game->draw_[0]));
}

TEST(TestSecondDraw, CheckForSecondDraw) {
    EXPECT_NE(1000, WrongDraw(game->draw_[0]));
}

#endif//PLANEGAME_TEST_H
