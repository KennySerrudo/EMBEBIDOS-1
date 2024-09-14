
# Actividad de Simulación: Reproductor de Música

## Objetivo

Simular el funcionamiento básico de un reproductor de música con dos botones configurados como interrupciones. El programa mostrará en el monitor serial el tiempo transcurrido de una canción en formato `MM:SS` (minutos y segundos).

### Funcionalidad de los botones:
- **Botón 1 (Play/Pausa)**: 
    - Al presionar el botón de **Play**, el contador de tiempo comienza a correr y se muestra en el monitor serial.
    - Al presionar nuevamente el botón, el contador se debe **pausar** y detener el incremento del tiempo.
    - Si se presiona el botón después de estar en pausa, el contador debe **retomar** desde el tiempo en el que se quedó.
    
- **Botón 2 (Stop)**:
    - Al presionar el botón de **Stop**, el contador debe **detenerse** por completo y reiniciarse a `00:00`, sin que el tiempo vuelva a avanzar hasta que se presione el botón de Play.

### Formato de tiempo:
El tiempo transcurrido se debe mostrar en el monitor serial en formato `MM:SS` (minutos y segundos). El contador debe actualizarse cada segundo, simulando el tiempo que transcurre mientras la "canción" está reproduciéndose.

## Requerimientos
1. Configura dos botones en tu simulador o entorno de trabajo (Wokwi, Tinkercad, u otra herramienta de simulación que estés utilizando).
2. Utiliza interrupciones para los dos botones:
    - Uno que funcione como **Play/Pausa**.
    - Otro que funcione como **Stop**.
3. Implementa el código necesario para que el tiempo se actualice correctamente en el monitor serial, utilizando `millis()` para controlar el tiempo.
4. Asegúrate de que el botón de **Stop** reinicie el tiempo a `00:00` sin que este vuelva a avanzar hasta presionar **Play**.
5. Prueba tu simulación y valida el funcionamiento de los botones.

## Ejemplo de ejecución en el monitor serial:
```
00:01
00:02
00:03
(Pausa)
00:03
00:03
(Play)
00:04
00:05
(Stop)
00:00
```


