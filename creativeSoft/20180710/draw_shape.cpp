#include "draw_shape.h"

Canvas::Canvas(size_t row, size_t col){
  row_=row;
  col_=col;
  vector<vector<char>>& Ref(row_,vector<char>(col_,.));
}
Canvas::~Canvas();
void Canvas::Resize(size_t w, size_t h){
  
  
}
bool Canvas::Draw(int x,int y, char brush){
}
void Canvas::Clear(){
}
