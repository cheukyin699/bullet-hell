#include "widget.h"

Widget::Widget(int x, int y, int w, int h) :
    pos(Vector2i(x, y)), size(Vector2u(w, h)) {
}

Widget::Widget(Vector2i pos, Vector2u size) :
    pos(pos), size(size) {
}
