/* G13. Uzrakstît funkciju, kas saraksta n-to elementu iznîcina un tâ vietâ ievieto to elementu,
kura numurs glabâjâs n-tajâ elementâ.
Darbîba jâveic, pârkabinot saites, nevis pârkopçjot elementu vçrtîbas.

 2) izmantojot STL::list konteineru.
Abâs realizâcijâs ir jâizveido prasîtâ specifiskâ vçrtîbu virknes apstrâdes funkcija un jânodemonstrç tâ darbîbâ,
cita starpâ parâdot gan sâkotnçjâs, gan rezultçjoðâs vçrtîbas.
Saistîtâ saraksta gadîjumâ jâuzraksta arî nepiecieðamâs palîgfunkcijas (piemçram, elementu pievienoðanai),
kâ arî pçc tâ izmantoðanas korekti jâatbrîvo izdalîtâ atmiòa.
*/


#include <iostream>
#include <list>
#include <bits/stdc++.h>
#include <iterator>
using namespace std;


void print(list<int> const &myList)
{
    for(auto const& i:myList ) {
        cout << i << endl;
    }
}



void removeElement (list <int> const &myList)
{
    //myList.remove_if(value == element)

}




int main ()
{
int n;
list<int> myList2 = {1,2,3,4,5,6,7};
list<int> myList = {2,4,6,8,1,2,3};

printf("Ievadiet n'to elementu:");
cin >> n;
printf("%d \n\n", n);
print(myList);

list<int>::iterator itr1, itr2;

itr1 = myList.begin();
itr2 = myList.begin();

cout << endl;
cout << "Size: " << myList.size() << endl;

cout << "Itr1 (pirms) elements: " << *itr1 << endl;
advance(itr1, n-1);
cout << "Itr1 (pec) elements: " << *itr1 << endl;

int n_elementa_vertiba = *itr1;

cout << "Itr2 (pirms) elements: " << *itr2 << endl;
advance(itr2, n_elementa_vertiba-1);
cout << "Itr2 (pec) elements: " << *itr2 << endl;

cout << n << endl;
cout << n_elementa_vertiba << endl;

itr1= myList.erase(itr1);
myList.insert(itr1,*itr2);

itr2=myList.erase(itr2);
cout<< "Idzçð itr1, izprintç pçc dzçðanas" << endl;
print(myList);
return 0;
}
