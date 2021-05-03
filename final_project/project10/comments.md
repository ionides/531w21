---
title: "Review comments on Project 10"
author: "STATS/DATASCI 531, Winter 2021"
output:
  html_document:
    theme: flatly
    toc: yes
---

**Strengths**: Joint analysis of vaccination and COVID case report data. Various models are considered. Limitations of linear models are found, and partially successful attempts are made to build mechanistic alternatives that describe the nonlinear infection dynamics.

**Points for consideration**:

1. There is an erroneous instantaneous drop in susceptibles evident when this is plotted. It later becomes clear that this corresponds to a huge spike in cases. A referee noticed the following: I try to search for the news about this abnormality but cannot get a clear answer. Instead, I find a piece of news that could help to explain it. According to FOX 5 Atlanta Digital Team, "The spike in cases is also a spike in reported tests. The Georgia Department of Public Health said about 12,000 of the cases reported today are all from one facility in metro Atlanta that is catching up on reporting its numbers for the week." Therefore one probably the solution is to delete it and fill it with the mean of adjacent day’s cases, which is a common method I have seen to solve this kind of problem in some paper.

2. How much benefit is there to develop a range of models for vaccination counts when the main subsequent goal is to use that as a covariate to understand cases, for which vaccination is treated as an input not a response. The goal behind looking at both these time series is not clearly explained.

3. There is a clear outlier in the cases - it is unclear what was done about it. Diagnostic plots are not shown, but potentially such an outlier can be problematic for model development and fitting. 

4. Too many significant figures in the table. For example, 3 significant figures, or 1 decimal place for log likelihood, is usually enough.

5. The ARMA(4,1,4) model for vaccination seems to successfully describe the weekly periodicity.

6. Why do we not see the covariate of vaccination helping to explain the 2nd difference of COVID cases? It may be because the covariate is not influencing COVID at this timescale - a second difference is somewhat like a second derivative.

7. The project did not get so far into the POMP modeling. The simulated models have far less variability than the data, which likely explains why they cannot provide a statistical fit. Modeling multiple COVID waves is not easy: see Projects 13 and 15 for successful approaches.

8. The graphic in the introduction contains microbiological details that are not needed for the project. Either explain the role of this information, or leave it out. 

9. Non-English captions on some graphs were distracting to some readers, as were other typos and inconsistent abbreviations. 





