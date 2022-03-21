class Box {
private:
    int length;
    int width;
    int height;
public:
    // write prototypes of setters for length, width and height
    
    void setLength(int l);
    void setWidth(int w);
    void setHeight(int h);
  
    // write prototypes of getters for length, width and height

    int getLength(void);
    int getWidth(void);
    int getHeight(void);

    int calcVolume();
};
