class Game_Hero
{
private:
    int healthpoints;
    bool zombi;
    bool dead = false;

public:
    Game_Hero(int health = 10, bool Zombi = false) : healthpoints(health), zombi(Zombi){};
    bool isDead()
    {
        return dead;
    }
    int livePoints()
    {
        return healthpoints;
    }
    void damage(int damage = 5)
    {
        healthpoints -= damage;
        if (healthpoints <= 0)
            dead = true;
    }
    void heal(int health = 3)
    {
        healthpoints += health;
        if (zombi && healthpoints > 0)
        {
            dead = false;
        }
    }
};