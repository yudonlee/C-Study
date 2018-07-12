
#include "draw_shape.h"

int main()
{
    size_t row, col;
    cin >> row >> col;
    
    Canvas *canvas = new Canvas(row, col);
    canvas->Draw(cout);
    
    while(true)
    {
        string inputs;
        cin >> inputs;
        if(inputs == "add")
        {
            Shape s;
            string type;
            cin >> type;
            
            if(type=="rect")
            {
                s.type = RECTANGLE;
                cin >> s.x >> s.y >> s.width >> s.height >> s.brush;
            }
            else if(type=="tri_up")
            {
                s.type = TRIANGLE_UP;
                cin >> s.x >> s.y >> s.height >> s.brush;
            }
            else if(type=="tri_down")
            {
                s.type = TRIANGLE_DOWN;
                cin >> s.x >> s.y >> s.height >> s.brush;
            }
            
            int t = canvas->AddShape(s);
            if(t==ERROR_OUT_OF_CANVAS)
                cout << "error out of canvas\n";
            else if(t==ERROR_INVALID_INPUT)
                cout << "error invalid input\n";
        }
        else if(inputs == "delete")
        {
            int n;
            cin >> n;
            canvas->DeleteShape(n);
        }
        else if(inputs == "draw") canvas->Draw(cout);
        else if(inputs == "dump") canvas->Dump(cout);
        else if(inputs == "quit") break;
    }
    delete canvas;
    return 0;
}
