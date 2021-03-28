---
title: "STATS/DATASCI 531 (Winter 2021) <br>'Analysis of Time Series'"
author: "Instructor: Edward L. Ionides"
output:
  html_document:
    toc: yes
---

------

## Course description

This course gives an introduction to time series analysis using time domain methods and frequency domain methods. 
The goal is to acquire the theoretical and computational skills required to investigate data collected as a time series. 
The first half of the course will develop classical time series methodology, including auto-regressive moving average (ARMA) models, regression with ARMA errors, and estimation of the spectral density.
The second half of the course will focus on state space model techniques for fitting structured dynamic models to time series data. 
We will progress from fitting linear, Gaussian dynamic models to fitting nonlinear models for which Monte Carlo methods are required.
Examples will be drawn from ecology, economics, epidemiology, finance and elsewhere.

A course outline, course information and grading policies are described in the [syllabus](syllabus.html).

--------------

## Class notes and lectures

1. [Introduction](01/index.html)

2. [Time series models, trend and autocovariance](02/index.html)

3. [Stationarity, white noise, and some basic time series models](03/index.html)

4. [Linear time series models and the algebra of ARMA models](04/index.html)

5. [Parameter estimation and model identification for ARMA models](05/index.html)

6. [Extending the ARMA model: Seasonality, integration and trend](06/index.html)

7. [Introduction to time series analysis in the frequency domain](07/index.html)

8. [Smoothing in the time and frequency domains](08/index.html)

9. [Case study: An association between unemployment and mortality?](09/index.html)

10. [Introduction to partially observed Markov process models](10/index.html)

11. [Introduction to simulation-based inference for epidemiological dynamics via the pomp R package](11/index.html)

12. [Simulation of stochastic dynamic models](12/index.html)

13. [Likelihood for POMP models: Theory and practice](13/index.html)

14. [Likelihood maximization for POMP models](14/index.html)

<!--

12. Practical likelihood-based inference for POMP models.
[ pdf. ](12/notes12.pdf)
[ R script. ](12/notes12.R)
recording:
[ part 1. ](https://drive.google.com/open?id=1yQGF6WFZzuaydikoQ4iUimwPieyuCjVW)
[ part 2. ](https://drive.google.com/open?id=1FXdDcLQFGXBj6y0gzSmZ2Cqez0OZ8PUT)
[ part 3. ](https://drive.google.com/open?id=12aq_lxdtNWbaZAdBfVRawwEkTk32Cy_O)


13. Time series models with covariates, and a case study of polio.
[ pdf. ](13/notes13.pdf)
[ R script. ](13/notes13.R)
recording:
[ part 1. ](https://drive.google.com/open?id=15lw9xbcl7jI_bA1-XnHK1jZEwS0cGEYR)
[ part 2. ](https://drive.google.com/open?id=1Wphv9RITzQGl00dvYM_zNK6iicHeN2Rw)


14. Case study: POMP modeling to investigate financial volatility.
[ pdf. ](14/notes14.pdf)
[ R script. ](notes14/notes14.R)
[ recording. ](https://drive.google.com/open?id=1uy3GYiY9DnYjXrz2lEs8-5BtrL_8_oRh)

There are further POMP case studies, in a similar style, on [Ebola modeling](https://kingaa.github.io/sbied/ebola/ebola.html), [measles transmission](https://kingaa.github.io/sbied/measles/measles.html), and [dynamic variation in the rate of human sexual contacts](https://kingaa.github.io/sbied/contacts/contacts.html).

-->

--------

## Homework assignments

Please read the [grading policy in the syllabus](syllabus.html) before submitting homework.

* [Homework 0](hw00/hw00.html). Setting up your computational environment. Nothing to submit.

* [Homework 1](hw01/hw01.html), due Mon Feb 1, 11:59pm.
[Solution](hw01/sol01.html).

* [Homework 2](hw02/hw02.html), due Mon Feb 8, 11:59pm.
[Solution](hw02/sol02.html).

* [Homework 3](hw03/hw03.html), due Mon Feb 22, 11:59pm.
[Solution](hw03/sol03.html).

* [Homework 4](hw04/hw04.html), due Mon Mar 1, 11:59pm.
[Solution](hw04/sol04.html).

* [Homework 5](hw05/hw05.html), due Mon Mar 22, 11:59pm.
[Solution](hw05/sol05.html).

* [Homework 6](hw06/hw06.html), due Mon Mar 29, 11:59pm. 

<!--

[Solution](hw06/sol06.html).

* [Homework 7](hw07/hw07.html), due 5pm on Mon Mar 30.

[Solution](hw07/sol07.html).


* [Homework 8](hw08/hw08.html), due 5pm on Mon Apr 13.
[Solution](hw08/sol08.html).
[slurm script](hw08/sol-3.bat).

-->

-------------------


## Midterm project




* [Information](midterm_project/midterm_project_info.html).


* [2021 midterm projects](midterm_project/index.html)

<!--
* [2020 midterm projects](midterm_project/index.html)

-->

* You are welcome to browse previous midterm projects from [2016](http://ionides.github.io/531w16/midterm_project/), [2018](http://ionides.github.io/531w18/midterm_project/) and [2020](http://ionides.github.io/531w20/midterm_project/)


-------------

## Final project

* [Information](final_project/final_project_info.html)

<!--
* [2020 final projects](final_project/index.html)
-->

* You're welcome to browse previous final projects  for [2016](http://ionides.github.io/531w16/final_project/), [2018](http://ionides.github.io/531w18/final_project/) and [2020](http://ionides.github.io/531w20/final_project/) 
. If building on previous source code, note that there are some differences between versions of the software package **pomp**. The [**pomp** version 2 upgrade guide](https://kingaa.github.io/pomp/vignettes/upgrade_guide.html) can be helpful. The changes from **pomp2.0** to the current **pomp3.3** are smaller.


--------


## Using the Great Lakes cluster

* [Introctory notes](greatlakes/index.html) for using our class account on the greatlakes cluster. This is optional but may be helpful for your final project.

* If you are already familiar with using R on Great Lakes, all you need to know is the class account: ```stats531w21_class```.

* You are expected to use our class account only for computations related to STATS/DATASCI 531.

* Please share knowledge about cluster computing between group members, and/or on piazza, to help everyone who wants to learn these skills.

* Cluster-related questions can also be emailed to hpc-support@umich.edu.


---------
