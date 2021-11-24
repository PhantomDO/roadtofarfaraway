# Road to Far Far Away

# Fiche signalétique

__Nom du jeu__ : Road to FarFarAway <br>
__Type de jeu__ : Reversed Tower Defense <br>
__Mode__ : Solo <br>
__Support__ : PC <br>
__Moteur__ : Unity 2020.3.23f1 <br>
__Pitch__ : Aidez Shrek et ses amis à sauver Fiona de Lord Farquaad à Far Far Away. Prenez toutes les forteresses sur votre chemin pour vous faire plus d'alliés à déployer lors de l'attaque de la ville.<br>

# Inspiration 

## Shrek
![image](images/shrek.gif)

## Totally Accurate Battle Simulator
![image](images/tabs.gif)

## Advance Wars
![image](images/advance_wars.gif)

# Gameplay

## Core

### Spawn

* __Start__ : le joueur peut poser notre base sur une tile libre et tagger comme *__"Spawnable"__* 
* __Spawner__ : le joueur peut faire apparaitre ses unitées sur les tiles *__Spawner__*, ces tiles sont créer au départ et lorsqu'il détruit des bâtiments adverses.

### Actions

* __Movement__ : les unitées vont d'un point A vers un point B, si celui-ci est une cible elles attaques.
* __Attaque__ : l'unité inflige des dégats à celle qu'elle attaque.

![image](images/advance_wars_movement.gif)
![image](images/creep_lol_attack.gif)

### Ai Properties

* __Damage__ : dégats total qu'elle peut infliger aux unitées adverses sans malus
* __Max Health__ : point de vie total de l'unité lors de sa création
* __Current Health__ : point de vie actuel de l'unité
* __Move Speed__ : vitesse de déplacement de l'unité
* __Fire rate__ : temps entre chacun des coups de l'unité