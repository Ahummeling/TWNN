/*first header file*/
#ifndef DATA_HPP
#define DATA_HPP

/*class that holds the settings and constants of the game*/
class Game {
    public:
        class Buildings {
            const float headquarter[13] = {1,30,1,90,80,70,5,1.26,1.275,1.26,1.17,10,10};
            const float barracks[13] = {0,25,0,200,170,90,7,1.26,1.28,1.26,1.17,20,16};
            const float stables[13] = {0,20,0,270,240,260,8,1.26,1.28,1.26,1.17,66.6,20};
            const float workshop[13] = {0,15,0,300,240,260,8,1.26,1.28,1.26,1.17,66.6,24};
            const float academy[13] = {0,1,0,15000,25000,10000,80,2,2,2,1.17,6520,512};
            const float smithy[13] = {0,20,0,220,180,240,20,1.26,1.275,1.26,1.17,66.6,19};
            const float market[13] = {0,25,0,100,100,100,20,1.26,1.275,1.26,1.17,30,10};
            const float woodcutters[13] = {0,30,0,50,60,40,5,1.25,1.275,1.245,1.155,10,6};
            const float claypit[13] = {0,30,0,65,50,40,10,1.27,1.265,1.24,1.14,10,6};
            const float ironmine[13] = {0,30,0,75,65,70,10,1.252,1.275,1.24,1.17,13,6};
            const float farm[13] = {1,30,1,45,40,30,0,1.3,1.32,1.29,1,13.3,5};
            const float storage[13] = {1,30,1,60,50,40,0,1.265,1.27,1.245,1.15,11.3,6};
            const float wall[13] = {0,20,0,50,100,20,5,1.26,1.275,1.26,1.17,40,8};
        };
};


class Map {
    public: 
        int **map;
        Map();
        ~Map();
};

#endif