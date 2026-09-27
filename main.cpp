#include "raylib.h"

#define RAYGUI_IMPLEMENTATION
#include "raygui.h"

int main(void)
{
    InitWindow(800, 450, "Tutorial de Raygui");
    SetTargetFPS(60);

    // Variable para controlar un estado
    bool botonPresionado = false;

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        // Dibujar un botón y comprobar si fue presionado
        // GuiButton recibe un Rectangle (x, y, ancho, alto) y un texto
        if (GuiButton((Rectangle){ 300, 200, 200, 50 }, "¡Presióname!"))
        {
            botonPresionado = !botonPresionado;
        }

        if (botonPresionado)
        {
            DrawText("¡El botón está activo!", 300, 280, 20, DARKGREEN);
        }

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
