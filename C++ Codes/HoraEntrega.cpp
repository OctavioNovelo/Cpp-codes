/* Javier andaba en su clase de informática muy aburrido como siempre, ya que era un gran programador.
Un día el maestro decide dejar la tarea en la página de colegio. Dentro de la página los alumnos 
suben su tarea desde una computadora a la hora que puedan; sin embargo, existe una hora límite.
Javier al entrar a la página para ver las tareas se percata de un fallo. Al momento de mostrar las
horas de entrega, hay ciertos números que no se logran distinguir. Como buen alumno Javier reporto
el fallo a control escolar y le respondieron "puedes decirnos la hora que quieras y esa pondremos 
como el límite. Siempre y cuando se conserven los dígitos que si son visibles". Como alumno flojo 
Javier decide decir la hora más tarde posible. La hora está marcada desde 00:00 hasta las 23:59.
Por ejemplo, si en la plataforma aparece ?1:2?, quiere decir que el primer digito de la hora y el 
ultimo digito de los minutos no son visibles. Por tanto, Javier dirá la hora 21:29, ya que es la más
tarde que puede poner, de manera que ninguno de los dígitos que sí se veían cambien. */

/* Link: https://omegaup.com/arena/simup1/#problems/Hora-de-entrega */
// 79% PA
#include <bits/stdc++.h>

using namespace std;

int main(){


    int h, h2, m, m2;

    cin >> h >> h2 >> m >> m2;

    if(h != -1 && h2 != -1 && m != -1 && m2 != -1){
        cout << h << " " << h2 << " " << m << " " << m2;
        return 0;
    }
    if(h == -1 && h2 == -1 && m == -1 && m2 == -1){
        cout << 2 << " " << 3 << " " << 5 << " " << 9;
        return 0;
    }
    if(h == -1 && h2 != -1 && h2 <= 3 && m != -1 && m2 != -1){
        h = 2;
    }
    if(h == -1 && h2 == -1 && h2 >= 4 && m != -1 && m2 != -1){
        h = 1;
    }
    if(h == 2 && h2 == -1 && m != -1 && m2 != -1){
        h2 = 3;
    }
    if(h == 1 && h2 == -1 && m != -1 && m2 != -1){
        h2 = 9;
    }
    if(h == -1){
        h = 2;
        
    }
    if(h2 == -1){
        h2 = 3;
    }
    if(h == 1){
        h2 = 9;
    }
    if(h == -1 && h2 > 3){
        h = 1;
    }
    else if(h == -1 || h == 2 && h2 <= 3){
        h = 2;
    }
    if(m == -1){
        m = 5;
    }
    if(m2 == -1){
        m2 = 9;
    }    

    cout << h << " " << h2 << " " << m << " " << m2;

    return 0;
}