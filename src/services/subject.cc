#include "subject.h"

void Subject::attach(Observer* observer) {
    observers.push_back(observer);
}

void Subject::detach( Observer *o ) {
    for ( auto it = observers.begin(); it != observers.end(); ++it ) {
        if ( *it == o ) {
            observers.erase(it);
            break;
        }
    }
}

void Subject::notifyObservers(const int state) {
    for ( auto it = observers.begin(); it != observers.end(); ++it ) {
        (*it)->notify(state);
    }
}
