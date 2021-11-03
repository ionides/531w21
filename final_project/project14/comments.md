---
title: "Review comments on Project 14"
author: "STATS/DATASCI 531, Winter 2021"
output:
  html_document:
    theme: flatly
    toc: yes
---

**Strengths**: A careful analysis leading to a successful mumps model. Clear presentation.

**Points for consideration**:

1. The project interprets the maximization difficulty in terms of the challenge of searching a large box. The local search is quite successful, with many searches jumping up to the consensus maximum around 500. The global search finds two modes, one with a reporting rate around 10% and another with a close to 100%. The latter corresponds to quite a different interpretation, where depletion of susceptibles has no dynamic importance. There is also some hint of a third mode, with even lower reporting rate.

2. The log likelihood search sometimes falls off a likelihood cliff, perhaps because the binomial distribution in the measurement and/or process models does not always have quite enough stochasticity to explain the data. Viewing the log likelihood on this scale makes it hard to distinguish the likelihoods of the candidate modes.

3. The measurement model in the code is negative binomial, rather than the binomial reported in the text, so if overdispersion is the issue it could be needed in the process model.

4. A section on potential future work can be useful, particularly given the restrictive time limitations of a course final project. 

5. The search and results might look cleaner if phase were reparameterized to take values only in $(0,2\pi)$ since otherwise the periodicity of phase adds extra clutter to the numerical results.



