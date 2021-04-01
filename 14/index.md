---
title: "Analysis of Time Series<br>STATS/DATASCI 531, Winter 2021<br>Chapter 14: Likelihood maximization for POMP models"
author: "Kidus Asfaw, Edward L. Ionides and Aaron A. King"
output: html_document
---

We continue using material from the short course [Simulation-Based Inference for Epidemiological Dynamics](https://kingaa.github.io/sbied/) (SBIED). Chapter 14 is Lesson 4 of SBIED. The main topic is likelihood maximization via an iterated particle filter. This enables a range of tools of likelihood-based inference to be applied---maximum likelihood estimation, likelihood ratio tests, profile likelihood confidence intervals, and AIC for model selection. Methods are demonstrated on a model for measles, but these techniques apply to the wide range of POMP models for which particle filtering is applicable.

| | ||
|:---------------|:---------------|:------------------------:|
| Chapter 14, Sections I,II | Classification of inference methods for POMP models | [Lecture video (16 mins)](https://youtu.be/OaKbivero6I) | 
| Chapter 14, Section III | Introduction to iterated filtering | [Lecture video (15 mins)](https://youtu.be/4icXW5pdc5E) |
| Chapter 14, Section IV | Iterated filtering in practice | [Lecture video (41 mins)](https://youtu.be/Kq_11Xg8n7E) |
| Chapter 14, Sections V | Global likelihood maximization and profile likelihood | [Lecture video (34 mins)](https://youtu.be/DK9IZFGGYFw) |
| Chapter 14, Section VI | Using likelihood and profile calculations to develop a data analysis | [Lecture video (25 mins)](https://youtu.be/90YyPZiV344) |
| Slides  | | [pdf](https://kingaa.github.io/sbied/mif/slides.pdf) |
| Notes   | | [pdf](https://kingaa.github.io/sbied/mif/notes.pdf) |
| **R** script  | | [**R**](https://kingaa.github.io/sbied/mif/main.R)                                                                   |
-----------


<iframe width="560" height="315" src="https://www.youtube.com/embed/OaKbivero6I" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<iframe width="560" height="315" src="https://www.youtube.com/embed/4icXW5pdc5E" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<iframe width="560" height="315" src="https://www.youtube.com/embed/Kq_11Xg8n7E" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<iframe width="560" height="315" src="https://www.youtube.com/embed/DK9IZFGGYFw" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<iframe width="560" height="315" src="https://www.youtube.com/embed/90YyPZiV344" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

----------------------

[Back to course homepage](../index.html)  
[Acknowledgements](../acknowledge.html)  
[Source code for these notes](http://github.com/kingaa/sbied/tree/master/mif)


----------------------
