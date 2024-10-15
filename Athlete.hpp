//
//  Athlete.hpp
//  OO Concepts 2
//
//  Created by Jovhems Jean-Baptiste on 10/11/24.
//

#include "Athlete.h"

// Base class: Athlete
Athlete::Athlete() : m_height(0), m_weight(0), m_gender('U') {}

Athlete::Athlete(int height, int weight, char gender)
    : m_height(height), m_weight(weight), m_gender(gender) {}

int Athlete::getHeight() const {
    return m_height;
}

void Athlete::setHeight(int height) {
    m_height = height;
}

int Athlete::getWeight() const {
    return m_weight;
}

void Athlete::setWeight(int weight) {
    m_weight = weight;
}

char Athlete::getGender() const {
    return m_gender;
}

void Athlete::setGender(char gender) {
    m_gender = gender;
}

// Derived class: Volleyball
Volleyball::Volleyball() : m_position(""), m_reactionTime(0.0f) {}

Volleyball::Volleyball(string position, float reactionTime)
    : m_position(position), m_reactionTime(reactionTime) {}

string Volleyball::getPosition() const {
    return m_position;
}

void Volleyball::setPosition(string position) {
    m_position = position;
}

float Volleyball::getReactionTime() const {
    return m_reactionTime;
}

void Volleyball::setReactionTime(float reactionTime) {
    m_reactionTime = reactionTime;
}

// Derived class: Tennis
Tennis::Tennis() : m_serveSpeed(0), m_serveAndVolley(false) {}

Tennis::Tennis(int serveSpeed, bool serveAndVolley)
    : m_serveSpeed(serveSpeed), m_serveAndVolley(serveAndVolley) {}

int Tennis::getServeSpeed() const {
    return m_serveSpeed;
}

void Tennis::setServeSpeed(int serveSpeed) {
    m_serveSpeed = serveSpeed;
}

bool Tennis::getServeAndVolley() const {
    return m_serveAndVolley;
}

void Tennis::setServeAndVolley(bool serveAndVolley) {
    m_serveAndVolley = serveAndVolley;
}
