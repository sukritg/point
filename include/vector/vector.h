#ifndef LIBRARY_TEMPLATE_VECTOR_H
#define LIBRARY_TEMPLATE_VECTOR_H
#include <ostream>
#include <iomanip>

template<class T>
struct Vector {
    T x, y, z;
};

// Vector functions
// Magnitude
template<class T>
T magnitude(const Vector<T> &vectorA)
{
    return sqrt(vectorA.x * vectorA.x + vectorA.y * vectorA.y + vectorA.z * vectorA.z);
}

// Addition
template<class T>
Vector<T> operator+(const Vector<T> &vectorA, const Vector<T> &vectorB)
{
    Vector<T> result;
    result.x = vectorA.x + vectorB.x;
    result.y = vectorA.y + vectorB.y;
    result.z = vectorA.z + vectorB.z;
    return result;
}

// Subtraction
template<class T>
Vector<T> operator-(const Vector<T> &vectorA, const Vector<T> &vectorB)
{
    Vector<T> result;
    result.x = vectorA.x - vectorB.x;
    result.y = vectorA.y - vectorB.y;
    result.z = vectorA.z - vectorB.z;
    return result;
}

// Dot Product
template<class T>
T dot(const Vector<T> &vectorA, const Vector<T> &vectorB)
{
    return vectorA.x * vectorB.x + vectorA.y * vectorB.y + vectorA.z * vectorB.z;
}

// Cross Product
template<class T>
Vector<T> operator*(const Vector<T> &vectorA, const Vector<T> &vectorB)
{
    Vector<T> Result;
    Result.x = vectorA.y * vectorB.z - vectorA.z * vectorB.y;
    Result.y = -vectorA.x * vectorB.z + vectorA.z * vectorB.x;
    Result.z = vectorA.x * vectorB.y - vectorA.y * vectorB.x;
    return Result;
}

// Scale
template<class T>
Vector<T> scale(const Vector<T> &vectorA, T scalingFactor)
{
    Vector<T> scaledVector;
    scaledVector.x *= scalingFactor;
    scaledVector.y *= scalingFactor;
    return scaledVector;
}

// Unit vector
template<class T>
T unitVector(const Vector<T> &vectorA)
{
    return scale(vectorA, 1.0/magnitude(vectorA));
}

// Vector angle between 2 vectors
template<class T>
T angle(const Vector<T> &vectorA, const Vector<T> &vectorB)
{
    return dot(vectorA, vectorB)/ magnitude(vectorA, vectorB);
}

// Output stream
template<class T>
std::ostream& operator<<(std::ostream& os, const Vector<T>& vector)
{
    os << std::fixed << std::setprecision(3);
    os << "[" << vector.x  <<  ", " << vector.y << ", " << vector.z << "]";
    return os;
}

#endif //LIBRARY_TEMPLATE_VECTOR_H
