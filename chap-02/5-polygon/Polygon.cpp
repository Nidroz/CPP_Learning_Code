#include "Polygon.hpp"

void Polygon::add_vertex(int x, int y) {
    _vertices.emplace_back(x, y);
}
