/*
 * Copyright 2015 Jacques Berger
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <stdio.h>

void afficherIntroduction();
int saisirValeurNumerique();

int main(int argc, char** argv)
{
  int nombre;

  afficherIntroduction();
  nombre = saisirValeurNumerique();

  printf("Le nombre saisi : %d\n\n", nombre);

  return 0;
}

void afficherIntroduction()
{
  printf("Ce logiciel est un exemple pour le cours INF3135.\n\n");
  printf("Toute reproduction est permise\n\n\n");
}

int saisirValeurNumerique()
{
  int valeur;
  printf("Entrez une valeur numerique : ");
  scanf("%d", &valeur);
  return valeur;
}
