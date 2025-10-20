#if !defined(BIRD_H)
#define BIRD_H
#include <bits/stdc++.h>

// using class
class Bird {
public:
    virtual void eat() = 0;
    virtual void fly() = 0;
    virtual ~Bird() {}
};


class Sparrow : public Bird
{
public:
    void eat()
    {
        std::cout << "Sparrow is eating\n";
    }
    void fly()
    {
        std::cout << "Sparrow is flying \n";
    }
};
class Eagle : public Bird
{
public:
    void eat()
    {
        std::cout << "Eagle is eating\n";
    }
    void fly()
    {
        std::cout << "Eagle is flying \n";
    }
};
class Pigeion : public Bird
{
public:
    void eat()
    {
        std::cout << "Pigeion is eating\n";
    }
    void fly()
    {
        std::cout << "Pigeion is flying \n";
    }
};
#endif
