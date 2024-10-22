# [PSCR](https://www.nist.gov/communications-technology-laboratory/pscr) Haptic Challenge

The unreal engine project for the PSCR Haptic Challenge.
*Please Note - This Read Me document is still in active development and is subject to change*

## Challenge Information

Information about the challenge can be found on the official challenge website.
*Link Below*

### [Haptic Challenge Website](https://publicsafetyhaptics.com/)

## Project Description

This Unreal Engine project has been created specifically for the PSCR Haptic Challenge. It features three different first responder scenarios that will be leveraged by the challenge contestants.
This project is not limited to only those taking part in the challenge. Others are free to use it with the caveat that it is not intended to be commercialized as a product. It is intended to be a tool to assist in research and development.

The scenarios include the following:

* Fire Fighter - Primary Search
  - The goal of this scenario is to simulate the primary search of the top floor of a high rise office building.
* SWAT - Active Shooter
  - This scenario simulates an active shooter situation in which SWAT must engage several individuals in an underground parking garage.
* EMS - Mass Casualty Triage
  - During this scenario EMS must perform triage at a mass casualty traffic collision and determine vitals while in the extremely noisy environment.

## Using the Project

1. Unreal Engine Version
   - This project was developed using unreal engine v4.20.3
     - In order to reduce the number of bugs and potential issues we recommend that you use the same version.
2. VR Headsets and Systems
   - The entire project was developed with SteamVR. If you are using a non VIVE headset make sure that you set it up with steamVR in order for the mechanics to work properly.
   - Since we did the vast majority of our development using the VIVE and VIVE Pro headsets we reccomend using either of these. We did also develop for the Oculus Rift and the Samsung Odyssey. However, due to our small team size we did not perform as much QA testing with the Oculus or the Samsung compared to the VIVE. So, the Oculus and Samsung will be more error prone.
   - If you are using the VIVE or VIVE Pro please note that we developed using the standard vive controllers (not the knuckles) and the v1 Base Stations. Since we did not develop with the knuckles or v2.0 Base Stations in mind, using either may result in unforseen errors or bugs.
3. Project Style Guide
   - We have our own style guide for UE4 based on the style guide by Allar. We reccomend adhearing to the style guide in order to reduce bugs and make parsing easier.
4. Submitting bugs
   - If you encounter a bug please try and reproduce the bug and then submit a bug report to us through the issues tab of the GitHub page.
     - *There is a premade template for bug submissions.*

## What can be altered

Due to the judging requirements for this challenge, the majority of the project cannot be changed. If there is something you wish to change that is not on this list and or you have a question about an item on this list please reach out.

* Levels/ Maps
  - The layout and look of the levels should not be altered in any way in order to maintain a fair comparison between contestants. The following changes are not allowed:
    - Changing the player starting location.
    - Moving, scaling or rotating any piece of the level including all props and gameplay objects within the level.
    - Altering the lighting or post processing of a level.
    - Removing or replacing environment/player sounds.
    - Altering or removing visual effects. (e.g. volumetric smoke, fire, lights etc.)
    - Adding any elements to the level that change the look of the level. (e.g. adding posters on a wall, changing the color of a desk, adding a lamp in the corner etc.)

* Gameplay
  - No changes should be made to the core gameplay functionality. The following changes are not allowed:
    - Altering the controller input map. (e.g. changing the functionality of a game mechanic from the trigger to the grip button)
    - Changing the players method of movement or movement speed. (e.g. changing the VR locomotion method or moving teleport nodes)
    - Using an alterative input method. (e.g. using leap motion for hand input instead of the VR controllers)
    - Altering the menu system design or functionality.
