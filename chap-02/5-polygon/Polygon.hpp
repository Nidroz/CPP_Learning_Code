#pragma once

#include <vector>
#include <utility>

using Vertex = std::pair<int, int>;

class Polygon {
    public:
        void add_vertex(int x, int y);

        Vertex operator[](int index) const { // const ici, car pas vocation de mofifier l'état de l'objet
            return _vertices[index];
        }

    private:
        std::vector<Vertex> _vertices;
};