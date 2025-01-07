#include <iostream>
#include "animal.h"
#include "feline.h"
#include "bird.h"
#include "dog.h"
#include "cat.h"
#include "pigeon.h"
#include "crow.h"
#include "bulldog.h"
#include "wildcat.h"

// References => https://www.youtube.com/watch?v=8jLOx1hD3_o
//            => https://github.com/rutura/The-C-20-Masterclass-Source-Code/blob/main/37.Polymorphism/37.10Final

//Interesting fact #1
/*
class Plane final{
    Plane()=default;
};

//This will trigger a compiler error
class FigherJet : public Plane{
    
};
*/

int main(){

    std::cout << "Hello" << std::endl;
    return 0;
}
