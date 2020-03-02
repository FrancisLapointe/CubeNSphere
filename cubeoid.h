//
// Created by flapo on 3/2/2020.
//

#ifndef UNTITLED13_CUBEOID_H
#define UNTITLED13_CUBEOID_H
class Cubeoid {
private:
    float height;
    float width;
    float depth;
public:
    Cubeoid(float beginningHeight, float beginningWidth, float beginningDepth) {
        height = beginningHeight;
        width = beginningWidth;
        depth = beginningDepth;
    }
    float getHeight(){
        return height;
    }
    void setHeight(float newHeight) {
        height = newHeight;
    }
    float getWidth(){
        return width;
    }
    void setWidth(float newWidth){
        width = newWidth;
    }
    float getDepth(){
        return depth;
    }
    void setDepth(float newDepth){
        width = newDepth;
    }
    float volume(){
        return height * width * depth;
    }
    float surfaceArea(){
        return 2*(height * width * depth);
    }

};
#endif //UNTITLED13_CUBEOID_H
