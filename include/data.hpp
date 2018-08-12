/*first header file*/
#ifndef DATA_HPP
#define DATA_HPP

/*class that holds the settings and constants of the game*/
class Game {
    public:
        class Buildings {
            struct headquarter {const float init_level=1, max_level=30, min_level=1, wood=90, clay=80, iron=70, pop=5,
                 wood_factor=1.26, clay_factor=1.275, iron_factor=1.26, pop_factor=1.17, time_factor=10, points=10;} headquarter;
            struct barracks {const float init_level=0, max_level=25, min_level=0, wood=200, clay=170, iron=90, pop=7,
                 wood_factor=1.26, clay_factor=1.28, iron_factor=1.26, pop_factor=1.17, time_factor=20, points=16;} barracks;    
            struct stables {const float init_level=0, max_level=20, min_level=0, wood=270, clay=240, iron=260, pop=8,
                 wood_factor=1.26, clay_factor=1.28, iron_factor=1.26, pop_factor=1.17, time_factor=66.6, points=20;} stables;
            struct workshop {const float init_level=0, max_level=15, min_level=0, wood=300, clay=240, iron=260, pop=8,
                 wood_factor=1.26, clay_factor=1.28, iron_factor=1.26, pop_factor=1.17, time_factor=66.6, points=24;} workshop;
            struct academy {const float init_level=0, max_level=1, min_level=0, wood=15000, clay=25000, iron=1000, pop=80,
                 wood_factor=2, clay_factor=2, iron_factor2, pop_factor=1.17, time_factor=6520, points=512;} academy;
            struct smithy {const float init_level=0, max_level=20, min_level=0, wood=220, clay=180, iron=240, pop=20,
                 wood_factor=1.26, clay_factor=1.275, iron_factor=1.26, pop_factor=1.17, time_factor=66.6, points=19;} smithy;
            struct market {const float init_level=0, max_level=25, min_level=0, wood=100, clay=100, iron=100, pop=20,
                 wood_factor=1.26, clay_factor=1.275, iron_factor=1.26, pop_factor=1.17, time_factor=30, points=10;} market;
            struct woodcutters {const float init_level=0, max_level=30, min_level=0, wood=50, clay=60, iron=40, pop=5,
                 wood_factor=1.25, clay_factor=1.275, iron_factor=1.245, pop_factor=1.155, time_factor=10, points=6;} woodcutter;
            struct claypit {const float init_level=0, max_level=30, min_level=0, wood=65, clay=50, iron=40, pop=10,
                 wood_factor=1.27, clay_factor=1.265, iron_factor=1.2, pop_factor=1.14, time_factor=10, points=6;} claypit;
            struct ironmine {const float init_level=0, max_level=30, min_level=0, wood=75, clay=65, iron=70, pop=10,
                 wood_factor=1.252, clay_factor=1.275, iron_factor=1.24, pop_factor=1.17, time_factor=13, points=6;} ironmine;
            struct farm {const float init_level=1, max_level=30, min_level=1, wood=45, clay=40, iron=30, pop=0,
                 wood_factor=1.3, clay_factor=1.32, iron_factor=1.29, pop_factor=1.13, time_factor=3, points=5;} farm;
            struct storage {const float init_level=1, max_level=30, min_level=1, wood=60, clay=50, iron=40, pop=0,
                 wood_factor=1.265, clay_factor=1.27, iron_factor=1.245, pop_factor=1.15, time_factor=11.3, points=6;} storage;
            struct wall {const float init_level=0, max_level=20, min_level=0, wood=50, clay=100, iron=20, pop=5,
                 wood_factor=1.26, clay_factor=1.275, iron_factor=1.26, pop_factor=1.17, time_factor=40, points=8;} wall;
        };
};


class Map {
    public: 
        int **map;
        Map();
        ~Map();
};

#endif