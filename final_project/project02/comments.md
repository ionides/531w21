---
title: "Review comments on Project 2"
author: "STATS/DATASCI 531, Winter 2021"
output:
  html_document:
    theme: flatly
    toc: yes
---

**Strengths**: This project investigates several models previously proposed for infectious diseases in general and COVID in particular. Simulation shows that even the maximum likelihood parameters for these models fail to capture key features of the pandemic.

**Points for consideration**:

1. None of the models under consideration can capture the multiple waves evident from the data. The first wave might have been brought under control by lockdown interventions, whose end led to the second wave. The third wave might be partly due to the end of distancing interventions used for the second wave, partly due to new strains. None of these things can be represented in the models used - quantitative understanding of the COVID waves may require additional modeling detail. Modeling multiple COVID waves is not easy: see Projects 13 & 15 for successful approaches.

2. Please explain what the "infected" variable measures. Is it the number of positive tests? Does this raise issues for understanding the data?

3. The project support a claim that "It is impossible to use SEIR, SEIQR and SECSDR to simulate the daily Infected case no matter how to change the parameters" but it is possible to make appropriate modifications to allow these models to fit the data. The key question becomes what modification(s) are needed. In the conclusion, the project notes that time-varying parameters could be the key for doing this. Retrospectively, the authors might have tried to hypothesize how adding extra Q, C, D compartments will fix the problem before spending time on these model variations. 




