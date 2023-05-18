#ifndef TEST1_H
#define TEST1_H

#include <qul/object.h>
#include <qul/property.h>
#include <qul/signal.h>
#include <qul/singleton.h>

class test1 : public Qul::Singleton<test1>
{
public:
    Qul::Property<int> bigness;
    int feed(int amount);
    Qul::Signal<void()> gotFood;
};

#endif // TEST1_H
