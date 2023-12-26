#include <stdio.h>

int addTen(int x){ //return type (int in this func) name (parameter){}
    x += 10;
    printf("in addTen x=%d\n", x);
    return x;
}

int x; //is global.
int addTwenty();

//เวลาจอง memmory ใน byte นั้นอาจจะไม่ได้ว่างเปล่าต่อเนื่อง อาจจะมีค่าที่เคยเก็บไว้อยู่ทำให้ค่านั้นอิงมาที่ตัวแปนหากไม่ได้กำหนดค่าเริ่มต้น.

int main()
{
    //when you use elab and you make global variable you must start number or data.
    int x; //when make variable os will lock address = amount type in memmory emty
    int y = addTen(x); //first find in local variable (local in own fuction)

    printf("in main x=%d, y=%d, address=%p\n", x, y, &x); //& is show address.

    y = addTwenty();
    printf("in main 2 x = %d, y = %d\n", x, y);
}

int addTwenty(){
    x += 20;
    printf("in addTwenty x = %d\n", x);
    return x;
}