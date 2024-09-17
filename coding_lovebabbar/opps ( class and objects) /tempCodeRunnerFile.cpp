Hero(int health)
    {
        this->health = health;

        cout << "this->health " << this->health << endl;
        cout << "this " << this << endl;
        cout << "&health " << &health << endl;
    }

    Hero(int health, char level)
    {
        this->level = level;

        this->health = health;
    }