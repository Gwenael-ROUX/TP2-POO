#include <iostream>
#include <iomanip>
#include <utility>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include "Duree.h"


using namespace std;
using namespace nsUtil;
using namespace rel_ops;

void testDuree (void)
{
    Duree d1 (3661);
    Duree d2 (2661);
    Duree d3 (3661);

    cout << boolalpha;
    /*         */
    d1.display ();
    cout << " <  ";
    d2.display ();
    cout << " : " << (d1 <  d2) << '\n';

    d2.display ();
    cout << " <  ";
    d1.display ();
    cout << " : " << (d2 <  d1) << "\n\n";
    /*         */

    /*         */
    d1.display ();
    cout << " >  ";
    d2.display ();
    cout << " : " << (d1 >  d2) << '\n';

    d2.display ();
    cout << " >  ";
    d1.display ();
    cout << " : " << (d2 >  d1) << "\n\n";
    /*         */

    /*         */
    d1.display ();
    cout << " <= ";
    d2.display ();
    cout << " : " << (d1 <= d2) << '\n';

    d2.display ();
    cout << " <= ";
    d1.display ();
    cout << " : " << (d2 <= d1) << "\n\n";
    /*         */

    /*         */
    d1.display ();
    cout << " >= ";
    d2.display ();
    cout << " : " << (d1 >= d2) << '\n';

    d2.display ();
    cout << " >= ";
    d1.display ();
    cout << " : " << (d2 >= d1) << "\n\n";
    /*         */

    /*         */
    d1.display ();
    cout << " == ";
    d2.display ();
    cout << " : " << (d1 == d2) << '\n';

    d2.display ();
    cout << " == ";
    d1.display ();
    cout << " : " << (d2 == d1) << "\n\n";
    /*         */

    /*         */
    d1.display ();
    cout << " == ";
    d3.display ();
    cout << " : " << (d1 == d3) << '\n';
    /*         */

    /*         */
    d1.display ();
    cout << " != ";
    d2.display ();
    cout << " : " << (d1 != d2) << '\n';
    /*         */


    /*         */
    d1.display ();
    cout << " != ";
    d3.display ();
    cout << " : " << (d1 != d3) << '\n';
    /*         */

    cout << noboolalpha;

} // testDuree()

typedef vector<Duree> CVDuree;
const unsigned long long KDureeMax (100);

void InitCVDuree (CVDuree & vD)
{
    cout <<"choisir taille"<< endl;
    unsigned taille;
    cin >> taille;
    vD.resize(taille);
//    for(auto & val : vD)
//        val = Duree (rand()%KDureeMax);
    for (CVDuree::iterator it (vD.begin());
         it != vD.end(); ++it)
                                                //*it = contenu de it
        *it = Duree (rand()%KDureeMax);
}

void ShowCVDuree (const CVDuree & vD){
//    for(const auto & val : vD)
//        val.display();
    for (CVDuree::const_iterator it (vD.begin());
         it != vD.end(); ++it)
        (*it).display(); //équivaut à *it ->  display()
    cout << string (10, '-') << endl;
}

void TestFind (const CVDuree & vD){
    unsigned d;
    cout << "choisir durée recherché" << endl;
    cin >> d;
    if (find (vD.begin(),vD.end(), Duree (d)) == vD.end())
        cout << "pas trouver mdr t nul" << endl;
    else
        cout << "trouver tu veux un cookie" << endl;
			 << it - vD.begin() << endl;
}


int main()
{
/*  Duree D (1000000);
    D.display();
    Duree D2;
    D2.display();
    testDuree();*/
    srand (time(NULL));
    CVDuree VDuree;
    InitCVDuree(VDuree);
    ShowCVDuree(VDuree);
    sort (VDuree.begin(),VDuree.end());
    ShowCVDuree(VDuree);
    for (unsigned i (0); i<5; ++i)
    {
        TestFind(VDuree);
    }
}
