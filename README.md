# Greed - Juego de Dados

**Greed** es una variante del juego *Push Your Luck* desarrollado originalmente por Bob Lancaster en 1990 para MS-DOS. Esta implementación en C++ permite jugar a este clásico juego de dados en modo de uno o dos jugadores.

## 📋 Reglas del Juego

- El juego consta de **tres rondas**.
- En cada ronda:
  - Se lanzan **dos dados bloqueadores** que determinan qué valores quedarán inhabilitados para las siguientes tiradas.
  - El jugador puede realizar múltiples tiradas con hasta **cinco dados**.
  - Cada dado que **coincida con un valor bloqueador** se elimina y **no se vuelve a lanzar** en la misma ronda.
  - Los puntos de una tirada se suman **solo con los dados que no fueron bloqueados**.
  - Después de cada tirada, se le pregunta al jugador si desea continuar o terminar la ronda.

### 🧨 Reglas especiales

- Si todos los dados lanzados muestran el **mismo valor** y **no coinciden con los bloqueadores**, el jugador:
  - **Duplica el puntaje** de esa tirada.
  - Está **obligado a tirar nuevamente**.
- Si el jugador se queda sin dados disponibles (todos fueron bloqueados), pierde todos los puntos acumulados en esa ronda (**puntaje = 0**).
- En modo de dos jugadores, luego de que un jugador termina su ronda, es el turno del otro.

## 🕹️ Controles

El juego se juega desde consola. Durante cada ronda, después de cada tirada se le preguntará al jugador si desea seguir lanzando o no.
