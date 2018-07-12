#include "draw_shape.h"

Canvas::Canvas(size_t row, size_t col) : row_(row), col_(col) { }

Canvas::~Canvas() { }

int Canvas::AddShape(const Shape &s)
{
    int x_min=0, x_max=0, y_min=0, y_max=0;
    
    if(s.type == RECTANGLE)
    {
        if(s.width%2==0 || s.height%2==0)
            return ERROR_INVALID_INPUT;
        
        x_min = s.x - s.width/2;
        x_max = s.x + s.width/2;
        y_min = s.y - s.height/2;
        y_max = s.y + s.height/2;
        
    }
    else if(s.type == TRIANGLE_UP)
    {
        x_min = s.x - (s.height-1);
        x_max = s.x + (s.height-1);
        y_min = s.y;
        y_max = s.y + (s.height-1);
    }
    else if(s.type == TRIANGLE_DOWN)
    {
        x_min = s.x - (s.height-1);
        x_max = s.x + (s.height-1);
        y_min = s.y - (s.height-1);
        y_max = s.y;
    }
    
    if(x_min<0 || x_max>=col_ || y_min <0 || y_max>=col_)
        return ERROR_OUT_OF_CANVAS;
    
    shapes_.push_back(s); 
    return int(shapes_.size()-1);
}

void Canvas::DeleteShape(int index)
{
    if(index<0 || index>=shapes_.size()) return;
    
    shapes_.erase(shapes_.begin()+index);
}

void Canvas::Draw(ostream& os)
{
    vector<vector<char> > m(row_, vector<char> (col_, '.'));
    
    for(int i=0; i<shapes_.size(); ++i)
    {
        Shape &s = shapes_[i];
        
        if(s.type==RECTANGLE)
        {
            for(int i=s.y-s.height/2; i<=s.y+s.height/2; ++i)
                for(int j=s.x-s.width/2; j<=s.x+s.width/2; ++j)
                    m[i][j]=s.brush;
        }
        else if(s.type==TRIANGLE_UP)
        {
            for(int i=s.y,cnt=0; i<s.y+s.height; ++i, ++cnt)
            {
                for(int j=s.x-cnt; j<=s.x+cnt; ++j)
                    m[i][j]=s.brush;
            }
        }
        else if(s.type==TRIANGLE_DOWN)
        {
            for(int i=s.y,cnt=0; i>s.y-s.height; --i, ++cnt)
            {
                for(int j=s.x-cnt; j<=s.x+cnt; ++j)
                    m[i][j]=s.brush;
            }
        }
    }
    
    os << ' ';
    for(int i=0; i<col_; ++i)
        os << (i%10);
    os << endl;
    for(int i=0; i<row_; ++i)
    {
        os << (i%10);
        for(int j=0; j<col_; ++j)
            os << m[i][j];
        os << endl;
    }
}

void Canvas::Dump(ostream& os)
{
    for(int i=0; i<shapes_.size(); ++i)
    {
        Shape &s = shapes_[i];
        os << i;
        if(s.type == RECTANGLE)
            os << " rect " << s.x << ' ' << s.y << ' ' << s.width << ' ' << s.height << ' ' << s.brush << endl;
        else if(s.type == TRIANGLE_UP)
            os << " tri_up " << s.x << ' ' << s.y << ' ' << s.height << ' ' << s.brush << endl;
        else if(s.type == TRIANGLE_DOWN)
            os << " tri_down " << s.x << ' ' << s.y << ' ' << s.height << ' ' << s.brush << endl;
    }
}
