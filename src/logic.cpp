/*logic file*/

#include <stdlib.h>
#include <stdio.h>
#include <boost/program_options.hpp>
#include <math.h>
#include <random>
#include "include/data.hpp" /*update if nessecary*/

Map::Map() {
    map = (int**)malloc(200 * sizeof(int*));

    for(int i = 0; i < 200; i++) {
    map[i] = (int*)calloc(200, sizeof(int));
    }
    int n= 200;{/*n is the number of players*/
        float density = n/40000;
        for(int i = 0; i<200; i++){
            for(int j = 0; j<200; j++){
                float RNG = (rand() %100)/100;
                if(RNG<density) 
                    map[i][j] = 1;
                else
                    map[i][j] = 0;
            }
        }
    } 

}




