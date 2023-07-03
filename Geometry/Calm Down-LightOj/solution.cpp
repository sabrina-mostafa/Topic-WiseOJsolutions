///  ~~~~~Bismillah'hir Rah'maanir Rahim~~~~~  ///

/*  "  Allah(SWT) blesses with knowledge whom he wants. "   */
/*  " Indeed with Hardship, comes Ease. "    */


///         Originator : Sabrina Mostafa
///         Dept. Of CSE
///         International Islamic University Chittagong




#include<bits/stdc++.h>
using namespace std ;

#define   FastRead      ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define   ULL               unsigned long long
#define   LL                  long long
#define   ST                  string
#define   F                    first
#define   S                    second
#define   PB                 push_back
#define   MP                make_pair
#define   pi                   acos(-1.0)
#define   NL                 "\n"
#define    _                    " "

#define YES cout << "YES"<< endl ;
#define NO cout << "NO" << endl ;
#define Yes cout << "Yes" << endl ;
#define No cout << "No" << endl ;
#define yes cout << "yes" << endl ;
#define no cout << "no" << endl ;






int main ()
{
    double  n, R, r, x ;
    int t, i ;

    cin>>t ;

    for(i=1; i<=t; i++)
    {
        cin>>R>>n ;

        x = (pi*2.0/n)/2.0 ;                   // pi = 180

        r = (R*sin(x)) / (1.0+sin(x)) ;

        cout<<"Case "<<i<<": "<<fixed<<setprecision(10)<<r<<endl ;

    }



    return 0 ;
}
