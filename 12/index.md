---
title: "Analysis of Time Series<br>STATS/DATASCI 531, Winter 2021<br>Chapter 12: Simulation of stochastic dynamic models"
author: "Kidus Asfaw, Edward L. Ionides and Aaron A. King"
output: html_document
---

As for [Chapter 11](../11/index.html), we use material from the short course [Simulation-Based Inference for Epidemiological Dynamics](https://kingaa.github.io/sbied/) (SBIED).  We develop a concrete example of the general POMP modeling framework, and we see the theory and practice of implementing a simulator for the model.

The Susceptible-Infected-Recovered (SIR) model used for this chapter is a central concept for epidemiology. For the purposes of STATS/DATASCI 531, we view it as one example of a mechanistic model, which exemplifies a more general process of model development and data analysis. One epidemiological idea used without definition in the lecture is $R_0$, defined to be the expected number of secondary infections arising from one infected individual in a fully susceptible population. The SIR model supposes that previously infected individuals cannot become reinfected, so those in compartment R are protected from infection.


| | ||
|:---------------|:---------------|:------------------------:|
| Chapter 12, Part 1  | Compartment models | [Lecture video (17 mins)](https://youtu.be/l5YCll5qcP0) | 
| Chapter 12, Part 2  | Euler's method for simulating Markov processes | [Lecture video (24 mins)](https://youtu.be/69F4oEjXkug) |
| Chapter 12, Part 3  | Compartment models in the pomp package | [Lecture video (47 mins)](https://youtu.be/XmUQR1Bp8C4) |
| Chapter 12, Part 4  | Discussion of exercises | [Lecture video (10 mins)](https://youtu.be/sNcNhvNY2Ro) |
| Slides  | | [pdf](https://kingaa.github.io/sbied/stochsim/slides.pdf) |
| Notes   | | [pdf](https://kingaa.github.io/sbied/stochsim/notes.pdf) |
| **R** script  | | [**R**](https://kingaa.github.io/sbied/stochsim/main.R)                                                                   |
| Worked solutions to the Exercises | | [html](https://kingaa.github.io/sbied/stochsim/exercises.html)                    
-----------


<iframe width="560" height="315" src="https://www.youtube.com/embed/l5YCll5qcP0" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<iframe width="560" height="315" src="https://www.youtube.com/embed/69F4oEjXkug" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<iframe width="560" height="315" src="https://www.youtube.com/embed/XmUQR1Bp8C4" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<iframe width="560" height="315" src="https://www.youtube.com/embed/sNcNhvNY2Ro" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

----------------------

[Back to course homepage](../index.html)  
[Acknowledgements](../acknowledge.html)  
[Source code for these notes](http://github.com/kingaa/sbied/tree/master/stochsim)


----------------------
