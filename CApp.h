/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CApp.h
 * Author: Teemu
 *
 * Created on 16. helmikuuta 2016, 21:16
 */

#ifndef CAPP_H
#define CAPP_H

// Standard libraries
#include <cstdlib>
#include <iostream>

using namespace std;

// SDL libraries
#include <SDL.h>
#include "SDL_image.h"

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;


class CApp {
public:
    CApp();
    virtual ~CApp();
    
    bool initializeSDL();
    void update();
    void shutdown();
    SDL_Surface* loadMedia(); // Todo: move to its own file
    
    bool bRunning;
    
private:
    SDL_Window* window;
    SDL_Surface* screenSurface;
};

#endif /* CAPP_H */
