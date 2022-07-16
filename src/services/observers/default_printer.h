#ifndef __DEFAULT_PRINTER_H__
#define __DEFAULT_PRINTER_H__

#include <iostream>
#include <string>
#include <iomanip>

#include "observer.h"

class DefaultPrinter : public Observer {
    private:
        Board* board;

    public:
        void notify(const int) override;

};
#endif /* __DEFAULT_PRINTER_H__ */