#include <iostream>
using namespace std;
class TV
{
public:
void set_csatorna(int a);
int get_csatorna();
void bekapcsol() { bekapcs = true; }
void kikapcsol() { bekapcs = false; }
bool get_allapot() { return bekapcs; }
TV();
~TV();
private:
int csatorna;
bool bekapcs;
};
TV::TV()
{
csatorna = 0;
bekapcs = false;
}
TV::~TV()
{
cout << "kidobtuk a TV-t" << endl;
}
void TV::set_csatorna(int a)
{
if(bekapcs)
{
if(a < 0)
{
cout << "ervenytelen csatorna" << endl;
}
else
{
csatorna = a;
}
}
else
{
cout << "HIBA: A TV nincs bekapcsolva" << endl;
}
}
int TV::get_csatorna()
{
return csatorna;
}
int main()
{
TV enTV;
cout << "Az en TVm allapota: " << enTV.get_allapot() <<
" csatorna: "
<< enTV.get_csatorna() << endl;
enTV.bekapcsol();
enTV.set_csatorna(9);
cout << "Az en TVm allapota: " << enTV.get_allapot() <<
" csatorna: "
<< enTV.get_csatorna() << endl;
enTV.set_csatorna(1);
cout << "Az en TVm allapota: " << enTV.get_allapot() <<
" csatorna: "
<< enTV.get_csatorna() << endl;
enTV.kikapcsol();
return 0;
}
