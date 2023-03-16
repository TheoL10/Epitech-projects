#pragma once
#include "../../Game_Engine/hpp/EntityManager.hpp"
#include "myEvent.hpp"

class Enemy4
{
    public:
        Enemy4(std::unique_ptr<EntityManager>& admin, int x, int y);

        void setVec(float x, float y){
            _vec->setVectorX(x);
            _vec->setVectorY(y);
        }
    private:
        std::unique_ptr<EntityManager>& _admin;
        ComponentR _vec;
};