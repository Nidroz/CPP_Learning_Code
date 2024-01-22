#pragma once

#include <vector>
#include <utility>
#include <ostream>

using Vertex = std::pair<int, int>;

class Polygon {
    friend std::ostream& operator<<(std::ostream& stream, Polygon Polygon);
    // comme déclaré avec friend, ici FONCTION LIBRE, pas fonction-membre !

    public:
        void add_vertex(int x, int y);

        Vertex operator[](int index) const { // const ici, car pas vocation de mofifier l'état de l'objet
            return _vertices[index];
        }

    private:
        std::vector<Vertex> _vertices;
};