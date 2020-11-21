/**
 * @brief 高さと底辺から三角形の面積を求める
 * @param heieght 高さ
 * @param bottom 底辺
 */
double get_area_triangle(double height, double bottom){
    double area;
    area = height * bottom / 2.0;
    return area;
}

/**
 * @brief 1 ~ 10 の数の足し算をする
 */
int sum_ten(){
    return 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10;
}