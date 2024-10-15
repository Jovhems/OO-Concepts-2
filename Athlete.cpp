//
//  Athlete.cpp
//  OO Concepts 2
//
//  Created by Jovhems Jean-Baptiste on 10/11/24.
//

#ifndef ATHLETE_H
#define ATHLETE_H

#include <string>
using namespace std;

// Base class: Athlete
class Athlete {
protected:
    int m_height;
    int m_weight;
    char m_gender;

public:
    // Default constructor
    Athlete();
    // Parameterized constructor
    Athlete(int height, int weight, char gender);

    // Getters and Setters
    int getHeight() const;
    void setHeight(int height);

    int getWeight() const;
    void setWeight(int weight);

    char getGender() const;
    void setGender(char gender);
};

// Derived class: Volleyball
class Volleyball : public Athlete {
private:
    string m_position;
    float m_reactionTime;

public:
    // Default constructor
    Volleyball();
    // Parameterized constructor
    Volleyball(string position, float reactionTime);

    // Getters and Setters
    string getPosition() const;
    void setPosition(string position);

    float getReactionTime() const;
    void setReactionTime(float reactionTime);
};

// Derived class: Tennis
class Tennis : public Athlete {
private:
    int m_serveSpeed;
    bool m_serveAndVolley;

public:
    // Default constructor
    Tennis();
    // Parameterized constructor
    Tennis(int serveSpeed, bool serveAndVolley);

    // Getters and Setters
    int getServeSpeed() const;
    void setServeSpeed(int serveSpeed);

    bool getServeAndVolley() const;
    void setServeAndVolley(bool serveAndVolley);
};

#endif
