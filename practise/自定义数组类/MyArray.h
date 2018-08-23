#pragma once
class MyArray
{
  public:
    MyArray(int len);
    ~MyArray();
    MyArray(const MyArray&another);
    void setData(int index, int data);
    int getData(int index);
    int getLen();

  private:
    int _len;
    int *_space;
};
