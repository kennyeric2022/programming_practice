
struct Boy {
    int code;
    Boy* next;
};

class Ring {
public:
   Ring(int n); 
   void Count(int m);
   void PutBoy();
   void ClearBoy();
   ~Ring();
protected:
   Boy* pBegin;
   Boy* pivot;
   Boy* pCurrent;
};
