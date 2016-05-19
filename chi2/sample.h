#ifndef SAMPLE_H
#define SAMPLE_H

#include <QPair>

typedef QVector< QPair<QString, int> > SamplesInfo; // name, size
typedef struct {
        double* array;
        size_t size;
} Sample;

#endif // SAMPLE_H
