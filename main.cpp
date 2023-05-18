#include <qul/application.h>
#include <qul/qul.h>
#include "test1.h"
#include "MCU2Depricated.h"

#include "MCU2Depricated.h"

extern "C" void setupUART();
extern "C" void transmitUART(const char* str);

int main()
{
    setupUART();
    transmitUART("ABC\n");

    Qul::initHardware();
    Qul::initPlatform();
    Qul::Application _qul_app;
    static struct ::MCU2Depricated _qul_item;
    _qul_app.setRootItem(&_qul_item);

    test1 test;

    _qul_app.exec();
    return 0;
}
