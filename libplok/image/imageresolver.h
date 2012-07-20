#ifndef IMAGERESOLVER_H
#define IMAGERESOLVER_H

class ImageResolver {

public:
    virtual QString & getName() = 0;
}
Q_DECLARE_INTERFACE(Library, "org.plok.plugins.imageresolver/1.0")
#endif // IMAGERESOLVER_H
