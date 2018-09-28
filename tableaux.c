// *****************************************************************************
// Nom : tableaux.c
// Auteur : 
// Date : 17 septembre 2018
//
// Exercice sur les tableaux. Vous n'avez pas à 
// modifier le main.
//
// *****************************************************************************
#include <stdio.h>
#include <stdlib.h>

// *****************************************************************************
//
// etendue
//
// Trouve la différence entre le plus grand et le plus petit élément d'un
// tableau.
//
// INPUT
//     tab : un tableau d'entiers
//     taille : le nombre de cases dans tab
//
// OUTPUT
//      L'étendue de tab.
//
// *****************************************************************************
int etendue(int tab[], int taille)
{
    return 0;
}

// *****************************************************************************
//
// moyenne
//
// Trouve la moyenne des éléments d'un tableau d'entiers
//
// INPUT
//     tab : un tableau d'entiers
//     taille : le nombre de cases dans tab
//
// OUTPUT
//      La moyenne de tab
//
// *****************************************************************************
double moyenne(int tab[], int taille)
{
    return 0.0;
}

// *****************************************************************************
//
// comboMax
//
// Trouve la longueur de la plus longue série de cases identiques dans un
// tableau.
//
// INPUT
//     tab : un tableau d'entiers
//     taille : le nombre de cases dans tab
//
// OUTPUT
//      La longueur du plus long combo dans tab.
//
// *****************************************************************************
int comboMax(int tab[], int taille)
{
    return 0;
}

// *****************************************************************************
//
// mode
//
// Trouve l'élément le plus courant dans un tableau d'entiers.
//
// INPUT
//     tab : un tableau d'entiers
//     taille : le nombre de cases dans tab
//
// OUTPUT
//      Le mode de tab.
//
// *****************************************************************************
int mode(int tab[], int taille)
{
    return 0;
}

// *****************************************************************************
//
// estPalindrome
//
// Détermine si un tableau est symétrique par rapport au centre. I.e. il se lit
// de la même manière, qu'on commence du début ou de la fin.
//
// INPUT
//     tab : un tableau d'entiers
//     taille : le nombre de cases dans tab
//
// OUTPUT
//      1 si tab est palindromique, 0 sinon.
//
// *****************************************************************************
int estPalindrome(int tab[], int taille)
{
    return 0;
}

// *****************************************************************************
//
// fouille
//
// Détermine si un tableau contient une valeur.
//
// INPUT
//     tab : un tableau d'entiers
//     taille : le nombre de cases dans tab
//     valeur : la valeur a chercher dans tab
//
// OUTPUT
//     1 si tab contient valeur, 0 sinon.
//
// *****************************************************************************
int fouille(int tab[], int taille, int valeur)
{
    return 0;
}

// *****************************************************************************
//
// main
//
// Fonction pilote pour les exercices, elle demande à l'utilisateur d'entrer la
// taille d'un tableau, les cases d'un tableau puis un nombre, et exécute les
// fonctions définies plus haut sur ces entrées.
//
// *****************************************************************************
int main()
{
    printf("Entrez la taille du tableau, puis des entiers séparés par des espaces.\n");
    printf("Entrez ensuite un entier.\n");
  
    int taille = 0;
    int valeur = 0;
  
    scanf("%d", &taille);
    if (taille < 0)
        return -1;

    int tableau[taille];
    for (int i = 0; i < taille; i++)
        scanf("%d", &(tableau[i]));
  
    scanf("%d", &valeur);
    
    printf("\n\nVous avez choisi d'entrer %d entiers : ", taille);
    for (int i = 0; i < taille; i++)
        printf("%d ", tableau[i]);

    printf("\nVous avez choisi d'entrer le nombre : %d\n\n\n", valeur);

    printf("L'étendue est : %d\n", etendue(tableau, taille));
    printf("La moyenne est : %lf\n", moyenne(tableau, taille));
    printf("Le mode est : %d\n", mode(tableau, taille));
    printf("Le plus long combo est de longueur : %d\n", comboMax(tableau, taille));

   
    if (estPalindrome(tableau, taille))
        printf("Le tableau est un palindrome.\n");
    else
        printf("Le tableau n'est pas un palindrome.\n");

    if (fouille(tableau, taille, valeur))
        printf("Le tableau contient %d.\n", valeur);
    else
        printf("Le tableau ne contient pas %d.\n", valeur);
}
