#include <iostream>
#include <string>
using namespace std;

//------------------------------------------------------------//

int main () {
   int tipoMob;
   int Xpmob = 0;
   int levelObjetivo = 30;
   int xpNecesaria = 1395;
   string nombreMob = "";



   cout << " MC XP SIMULATOR " << endl;
   cout << "selecciona tu tipo de granja" << endl;
   cout << "1. Zombies/Esqueletos (5 XP cada uno)" << endl;
   cout << "2. Blazes (10 XP por cada uno)" << endl;
   cout << "3. Endermans (5 XP cada uno, pero spawnean mas rapido)" << endl;
   cout << "4. Guardian (10 XP por cada uno)" << endl;  
   cout << "5. Zombified Piglin (5 XP por cada uno)" << endl;
 


   cout << "Opcion:  ";
   cin >> tipoMob;

   float MobsxMin = 0;

   switch(tipoMob) {
         
     case 1: Xpmob = 5; MobsxMin = 8.5; nombreMob = "Zombies/Esqueletos"; break;
     case 2: Xpmob = 10; MobsxMin = 6.0; nombreMob = "Blazes"; break;
     case 3: Xpmob = 5; MobsxMin = 25.0; nombreMob = "Endermans"; break;
     case 4: Xpmob = 10; MobsxMin = 40.0; nombreMob = "Guardian"; break;
     case 5:Xpmob  = 5; MobsxMin = 60,0; nombreMob = "Piglin Zombie"; break;
        default: cout << "opcion invalida." << endl; return 0;

   }    int totalMobsNecesarios = xpNecesaria / Xpmob;
    float tiempoEstimado = totalMobsNecesarios / MobsxMin;

    cout << "\n analisis granja de   " << nombreMob << " - " << endl;
    cout << "Para llegar a nivel 30 desde cero necesitas matar:   " << totalMobsNecesarios << " mobs." << endl;
    cout << "ttiempo estimado AFK: " << tiempoEstimado << " minutos." << endl;

    if (tiempoEstimado > 30) {
        cout << "la granja es lenta" << endl;
    } else {
        cout << "la granja es buena" << endl;
    }

    cout << "---------------------------------------" << endl;
    system("pause");
    return 0;


    
}