# Starting out

## Introduction

Here are some notes in regards to the starting of the project.


## Motivation

I wanted to create this bullet hell Touhou clone because I wanted to have more
experience on how games are structured. I also wanted more experience with
objects collision detection.


## Starting Up

Starting all games, you should always build the skeleton of the project and have
everything set up nicely.

Different parts of the game were segmented and divided up into different files.
For this game (and most games), I had the idea of adding game states (e.g. menu
states, playing state, options state, about state). The idea being that there is
a base state that all states derive from, inheriting 3 key functions: `handle`,
`update`, and `draw`.

- `handle`
    - used for handling user inputs
- `update`
    - used for updating variables and displays
    - updates using the delta-time between frames
- `draw`
    - draws the state onto the window

All of these functions are then overridden in consequent subclasses.
