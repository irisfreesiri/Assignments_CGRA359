# Classroom Learning
## Week 1: Git and Version Control
We covered the basics of the course with an introduction. Additionally, we were introduced to GitHub Copilot and Claude AI, along with a detailed overview of Git and version control. I found the GitHub Issues feature particularly interesting. Although we have used Git before, we primarily used Jira as our project management tool and had not utilized the Issues feature in GitHub. 
For the R2R project, we plan to utilize GitHub's Issues feature and aim to become more proficient with it.
## Week 2: Team Formation and Project Planning
The second week's class focused on team formation and project planning, covering topics from teamwork models to communication strategies, as well as role of animal models. I found the content on working from home and communication particularly insightful. Over the past year, I've been doing game outsourcing work with a company in the United States, and I've faced challenges related to time zone differences and remote collaboration.
The discussion on honesty, trust, and respect, while not directly related to technical skills, is crucial for successful collaboration. I appreciate Dr. Simon for highlighting this aspect, as it plays a vital role in teamwork.
## Week 3: Game Audio
In the third week, we learned about game audio, including its principles, production processes, and various applications. In my previous work, I rarely dealt with this aspect, only having some experience with FMOD regarding memory optimization. I once read a GDC presentation about how a shooting game collaborated with Dolby to create an immersive audiovisual experience (https://news.dolby.com/en-WW/224210-dolby-atmos-arrives-in-pubg-mobile-to-bring-immersive-audio-to-the-battleground). 
If possible, I hope to implement similar technologies in my own projects.

# Independent Learning
## **Overview of Self-Study Topics:**
My independent learning is currently divided into two areas. 
- The first is familiarizing myself with Unreal Engine, particularly in terms of the interaction between C++ and Blueprint. 
- The second is researching and studying the content we plan to create for the R2R project.
![Animation Sit Down](./images/Animation-SitDown.gif)
## Familiarizing with Unreal Engine
Create an `InteractiveClass` for the sofa model, add a `BoxCollision` component, and detect if a character enters the interaction area. When the character enters, display a "Sit" button; when the character leaves, hide the button. Upon clicking the "Sit" button, rotate the character to face the sofa, disable gravity, collisions, and input, and play the sitting animation, finally displaying a "Stand" button. Clicking the "Stand" button reverses these actions.
- Adding an `AActor` class in C++, exposing relevant properties to the UE panel, adding `BoxCollision` events, and defining a C++ function callable by Blueprint.
- The UI creation process and how to use Blueprint to add custom event listeners.
- The basic workflow for models, materials, textures, and animations.
## Researching and Studying for the R2R Project
I have reviewed some work related to rendering in destruction-type games, which can generally be categorized into three main areas:
### Chaos Destruction & Niagara
https://dev.epicgames.com/community/learning/tutorials/wrdj/unreal-engine-chaos-destruction-niagara
![Chaos Destruction](./images/city-chaos-destruction-small.gif)
### Visual Effects
https://dev.epicgames.com/documentation/en-us/unreal-engine/creating-visual-effects-in-niagara-for-unreal-engine
![Physics Fluids](./images/physics-fluids-1.gif)
### Global Illumination
https://www.unrealengine.com/en-US/tech-blog/unreal-engine-5-goes-all-in-on-dynamic-global-illumination-with-lumen
![Global Illumination](./images/Pasted%20image%2020240731122556.png)
#### Ray Tracing
https://www.youtube.com/live/qPmwbp7A3BQ?t=9888s
### Hair Physics
(only out of personal interest, as R2R is a robot-themed destruction game and may not feature this aspect)
https://dev.epicgames.com/documentation/en-us/unreal-engine/hair-physics-in-unreal-engine
![Hair Physics](./images/hair-physics-1.gif)

# Future Learning Goals
After discussing with Dr. Simon on Wednesday, I will focus on the Destruction aspect for the next two weeks:
1. Follow tutorials on Chaos & Niagara to become familiar with the current production workflow and the achievable effects.
2. Create different effects for destructible items (buildings, cars, etc.) specific to the R2R game.
3. Learn how to profile performance hotspots in Chaos and Niagara, aiming to maximize the number of Destruction effects that can be displayed on screen simultaneously.
