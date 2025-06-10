
/*
 * SonarQube, open source software quality management tool.
 * Copyright (C) 2008-2013 SonarSource
 * http://github.com/SonarOpenCommunity/sonar-cxx
 *
 * SonarQube is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * SonarQube is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include <iostream>
using namespace std;

// 1. Método para multiplicar dos números
int multiplicar(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2;

    // Pedimos al usuario dos números
    cout << "Ingresa el primer número: ";
    cin  >> num1;
    cout << "Ingresa el segundo número: ";
    cin  >> num2;

    // 2. Llamado al método multiplicar
    int producto = multiplicar(num1, num2);

    // Mostramos el resultado
    cout << "El producto de " << num1 
         << " por " << num2 
         << " es: " << producto << endl;

    return 0;
}
