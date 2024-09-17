# 1. Introduction
**REDUCED TO RUBBLE (R2R)** is a fast-paced action-arcade game where players control a massive robot to cause destruction and chaos in a destructible environment. The primary objective is to rack up high scores by destroying as much as possible within a time limit, combining elements of action, simulation, and destruction for a thrilling experience. The game aims to appeal to both casual players looking for quick fun and highscore chasers who enjoy mastering challenges and pushing their limits.
In this prototype, I will present the team's perspective on the current state, implemented features, and the development plan for the next three weeks in chapters 2, 3, and 6. In chapters 4 and 5, which focus on technical challenges and current limitations, I will cover only my personal contributions.
# 2. Current State
The image is from the first version of **REDUCED TO RUBBLE (R2R)**. In this new project, we are developing a more intense second version with more NPCs, more objective types, more power-ups, and even more spectacular destruction effects.
![Reduced to Rubble](./images/Reduced%20to%20Rubble.gif)
We have completed the initial design as originally planned, implementing basic player control functions (including climbing, running, and jumping), building destruction, and civilian NPCs along with the directive system. 
Building on this, we conducted testing and gathered player feedback, leading to a second round of design and development. This includes, but is not limited to, the addition of throwable objects and traps, combo mechanics, tanks, police, army functionalities, and the integration of more elements such as health bars.
# 3. Implemented Features
## 3.1 Level
We have completed the experimental level, and based on that, Curtis has started developing our first level map, which is modeled after the city of Wellington.
![Level-Buildings](./images/Level-Building-01.png)
## 3.2 Character
The player model and animations are being implemented by Drake. The model creation and basic run, jump, and car transformation animations have been completed, and more animations are currently in progress, such as backflip and victory.
![Player-Model-Backflip](./videos/PlayerModel-Backflip.mp4)
![PlayerModel-Victory](./videos/PlayerModel-Victory.mp4)
Currently, the NPCs are designed with various functionalities, including civilians, polices, and tanks.
## 3.3 Building
Based on the static building models, Kent used the Fracture mode to fragment the shell of each building, thereby achieving the destruction effect.
![Destrutible-Building](./images/Building-Destruction.png)
## 3.4 Directive System
Ocean completed the UI and Directive System, set up the DataTable, and implemented features such as creating directives, completing directives, and adding scores.
![UI-DirectiveSystem](./images/UI-DirectiveSystem.png)
## 3.5 NPC - Civilian
The initial civilian AI was developed by Dennis, but due to performance bottlenecks—we aimed to have tens of thousands of civilians on the screen simultaneously—the task was handed over to Iris for completion.
Iris (I) has implemented the civilian functionality, which includes basic movement such as obstacle avoidance and player evasion, damage handling, and a timed spawn system.
![Civilian-Movement](./videos/Civilian-Movement.mp4)
# 4. Technical Challenges and Solutions
The technical challenges of the Civilian task can be divided into three main parts: 
1. Rendering tens of thousands of civilians on screen, 
2. AI logic (obstacle avoidance and evasion of the player), and 
3. Detecting damage range and removing the corresponding civilians.
## 4.1 Rendering
Before taking on this task, I conducted some research and explored potential technical solutions:
1. Niagara Crowds (Reference: [Creating Ambient Birds in Unreal with Niagara and Vertex Animations](https://www.chrismccole.com/blog/creating-ambient-birds-in-unreal-with-niagara-and-vertex-animations))
2. Instanced Static Mesh (Reference: [Unreal Engine 5 Tutorial - Instanced Static Meshes - ISM/HISM](https://www.youtube.com/watch?v=cfR36FTbvcQ))
3. Mass Entity (Reference: [Large Numbers of Entities with Mass in UE5 | Feature Highlight | State of Unreal 2022](https://www.youtube.com/watch?v=f9q8A-9DvPo&t=219s))
After comparing the implementation complexity and the project requirements for interactive civilians, I chose the second option.
## 4.2 AI Logic
Additionally, based on the Instanced Static Mesh, I further implemented some AI logic features, such as avoiding building obstacles and evading the player), spherical damage detection.
## 4.3 Detecting Damage Range
## Niagara Crowds
## Instanced Static Mesh
## Mass Entity
## Avoidance Obstacle
## Evading Player
## Timer Spawn
# 5. Current Limitations
# 6. Future Development Plan
![[Pasted image 20240917204223.png]]
# 7. Appendix
