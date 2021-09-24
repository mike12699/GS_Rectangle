#include <iostream>

struct Rect 
{
    float minX;
    float minY;
    float maxX;
    float maxY;
};

float RectangleDistance(float x, float y, Rect& rect)
{
    if (rect.minX < x && x < rect.maxX && rect.minY < y && y < rect.maxY) 
    {
        return 0;
    }
    float distanceX = std::max(rect.minX - x, x - rect.maxX);
    float distanceY = std::max(rect.minY - y, y - rect.maxY);
    return std::sqrt(distanceX * distanceX + distanceY * distanceY);
}

//This outputs the distance between the edge of the rectangle and point 10
int main()
{
    Rect rect = { 0, 0, 10, 10 };
    std::cout << "Distance: " << RectangleDistance(15, 0, rect);
}