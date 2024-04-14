
class Box{
    private : 
     int l, b, h;
    public :
       Box() : l(0),b(0),h(0) {}
       Box(int _l,int _b,int _h) : l(_l),h(_h),b(_b) {}
       Box(const Box &B) : l(B.l),h(B.h),b(B.b) {}
       int getLength(){
           return l;
       }
       int getBreadth (){
           return b;
       }
       int getHeight (){
           return h;
       }
       long long CalculateVolume(){
           return static_cast<long long>(l) * b * h; 
       }
       bool operator<(Box &B){
          if(l < B.l) return true;
          if(h < B.h && l == B.l) return true;
          if(b < B.b && h == B.h && l == B.l) return true;
          return false;
       }
       friend ostream& operator <<(ostream& out, Box& B){
           out << B.l << " "<<B.b <<" "<<B.h;
           return out;
       }
};
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

