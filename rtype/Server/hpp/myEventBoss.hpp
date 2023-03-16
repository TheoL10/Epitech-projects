#pragma once

#include "../../Game_Engine/hpp/EntityManager.hpp"
#include "../../Game_Engine/hpp/Comp_Position.hpp"
#include "../../Game_Engine/hpp/Comp_Event.hpp"
#include "../../Game_Engine/hpp/Comp_Sound.hpp"
#include "../../Game_Engine/hpp/Comp_Hp.hpp"
#include "../../Game_Engine/hpp/Comp_Scene.hpp"
#include "EnemyExplosion.hpp"

class MyEventBoss : public EventComponent {
    public:
        MyEventBoss(std::vector<std::shared_ptr<IComponent>>& sibling, EntityManager& admin) : _siblings(sibling), _admin(admin) {}
        std::vector<std::shared_ptr<IComponent>>& getSiblings() { return _siblings; }

        void onColision(ComponentR thisComp, ComponentR colidComp, EntityType colideType);

    private:
        std::vector<std::shared_ptr<IComponent>>& _siblings;
        EntityManager& _admin;
};