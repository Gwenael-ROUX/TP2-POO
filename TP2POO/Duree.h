#ifndef DUREE_H_INCLUDED
#define DUREE_H_INCLUDED

namespace nsUtil
{
    class Duree
    {
    private:
        unsigned long long myDuree;
        unsigned long long mySeconds;
        unsigned long long myMinutes;
        unsigned long long myHours;
        unsigned long long myDays;
        void Normaliser ();
    public:
        Duree (const unsigned & d = 0);
        void display ()const;
        void inc (const unsigned long long & delta);
        void dec (const unsigned long long & delta);
        unsigned long long getDuree() const;
        Duree operator + (const Duree & d) const;
        Duree operator - (const Duree & d) const;
        bool operator < (const Duree & d) const;
        bool operator == (const Duree & d) const;
//        Duree operator + (const int & d) const;

    };//Duree
    //        Duree operator + (const Duree & d1, const Duree & d2) ;  commutatif
    //        Duree operator + (const int & i, const Duree & d2)
    //         {
    //            return d2 +i;
    //         };
}


#endif // DUREE_H_INCLUDED
