#ifndef LIBRARY_H
#define LIBRARY_H

class Library {

public:
    virtual QString & getName() = 0;

}

Q_DECLARE_INTERFACE(Library, "org.plok.plugins.library/1.0")
#endif // LIBRARY_H
