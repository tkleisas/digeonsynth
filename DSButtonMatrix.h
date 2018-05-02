class DSButtonMatrix
{
  public:
    DSButtonMatrix(int c1, int c2, int c3, int c4, int r1, int r2, int r3, int r4)
    {
        cols[0] = c1;
        cols[1] = c2;
        cols[2] = c3;
        cols[3] = c4;
        rows[0] = r1;
        rows[1] = r2;
        rows[2] = r3;
        rows[3] = r4;
    }
    
    void init()
    {
      for(int i = 0;i<4;i++)
      {
        
      }
    }
    int cols[4];
    int rows[4];
    bool buttonState[4][4];
};



