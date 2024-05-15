### PARA COPILAR
    g++ *.cpp -o salida.exe `wx-config --cppflags --libs`
### EJECUTAR
    ./salida.exe
### No confias en `wx-config --cppflags --libs` y quieres mirar que hace
    echo `wx-config --cppflags --libs`
