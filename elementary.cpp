/**
 * @brief 高さと底辺から三角形の面積を求める
 * @param heieght 高さ
 * @param bottom 底辺
 */
double get_area_triangle(int height, int bottom){
    double area;
    area = height * bottom / 2;
    return area;
}