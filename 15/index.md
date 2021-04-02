---
title: "Analysis of Time Series<br>STATS/DATASCI 531, Winter 2021<br>Chapter 15: A case study of polio including covariates, seasonality & over-dispersion"
author: "Kidus Asfaw, Edward L. Ionides and Aaron A. King"
output: html_document
---

We continue using material from the short course [Simulation-Based Inference for Epidemiological Dynamics](https://kingaa.github.io/sbied/) (SBIED). Chapter 15 is Lesson 6 of SBIED. This case study of polio demonstrates time series data analysis via a mechanistic model. It also develops various topics of general interest for inference on POMP models:

* Covariates. In Section I, we see that the POMP framework allows arbitrary dependence on covariate time series, and how to implement this in **pomp**.

* Seasonality. In Section II, we model seasonality using a periodic covariate. In Section III, we implement non-parametric seasonality using a periodic spline basis.

* Over-dispersion. Poisson and binomial distributions have their variance defined as a function of the mean parameter, which may not be appropriate for the data. In Section II, we discuss the use of the negative binomial distribution and discretized normal distribution to address this. Another approach to over-dispersion is gamma noise on transition rates, which is carried out in a [measles case study](https://kingaa.github.io/sbied/measles/) that you have the option to watch if you want to.

* Workflow issues. Section IV discusses ways to avoid recomputing results unnecessarily when using Rmarkdown. It also presents a way control run time so that a single switch in the code moves between a debug setting, a preliminary set of results, and a final computationally intensive calculation.

Sections VI and VII follow the same route we took for the Consett measles analysis. This workflow is common to many POMP models across diverse applications.

---------------

| | ||
|:---------------|:---------------|:------------------------:|
| Chapter 15, Sections I | Covariates in POMP models and their pomp implementation | [Lecture video (5 mins)](https://youtu.be/TmlPMl_GkT8) | 
| Chapter 15, Section II | A POMP model for historic polio in Wisconsin | [Lecture video (15 mins)](https://youtu.be/zBPvdscwZGo) |
| Chapter 15, Section III | A pomp implementation of the polio POMP model | [Lecture video (9 mins)](https://youtu.be/FoQGr3hq5Xk) |
| Chapter 15, Sections IV | Data analysis logistics: tools for a pomp workflow | [Lecture video (12 mins)](https://youtu.be/-Qr8Dzgfyww) |
| Chapter 15, Section V | Persistence of polio | [Lecture video (7 mins)](https://youtu.be/13KBab1MnbU) |
| Chapter 15, Section VI | Likelihood maximization for polio | [Lecture video (15 mins)](https://youtu.be/xGi9WLUwKWg) |
| Chapter 15, Section VII | A profile likelihood for polio | [Lecture video (7 mins)](https://youtu.be/O2OMIPukzVI) |
| Slides  | | [pdf](https://kingaa.github.io/sbied/polio/slides.pdf) |
| Notes   | | [pdf](https://kingaa.github.io/sbied/polio/notes.pdf) |
| **R** script  | | [**R**](https://kingaa.github.io/sbied/polio/main.R)                                                                   |
-----------


<iframe width="560" height="315" src="https://www.youtube.com/embed/TmlPMl_GkT8" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<iframe width="560" height="315" src="https://www.youtube.com/embed/zBPvdscwZGo" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<iframe width="560" height="315" src="https://www.youtube.com/embed/FoQGr3hq5Xk" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<iframe width="560" height="315" src="https://www.youtube.com/embed/-Qr8Dzgfyww" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<iframe width="560" height="315" src="https://www.youtube.com/embed/13KBab1MnbU" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<iframe width="560" height="315" src="https://www.youtube.com/embed/xGi9WLUwKWg" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<iframe width="560" height="315" src="https://www.youtube.com/embed/O2OMIPukzVI" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

----------------------

[Back to course homepage](../index.html)  
[Acknowledgements](../acknowledge.html)  
[Source code for these notes](http://github.com/kingaa/sbied/tree/master/mif)


----------------------
