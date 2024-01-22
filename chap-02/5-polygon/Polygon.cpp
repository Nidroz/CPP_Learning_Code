#include "Polygon.hpp"

void Polygon::add_vertex(int x, int y) {
    _vertices.emplace_back(x, y);
}

std::ostream& operator<<(std::ostream& stream, Polygon polygon) {
    for (auto polygonData : polygon._vertices) {
        stream << "(" << polygonData.first << "," << polygonData.second << ") ";
    }
    return stream;
}
