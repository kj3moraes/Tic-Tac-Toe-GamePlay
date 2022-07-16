#ifndef __SUBJECT_H__
#define __SUBJECT_H__

#include <vector>
#include <string>
#include "./observers/observer.h"

class Subject {
    private:
        std::vector<Observer*> observers;

    public:
        virtual void attach(Observer*);
        virtual void detach(Observer*);
        virtual void notifyObservers(const int state);
        virtual ~Subject() = 0;
};
#endif /* __SUBJECT_H__ */