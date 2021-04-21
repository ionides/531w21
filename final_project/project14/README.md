## Stats531 Final Project Group 8 subgroup 1

### Report
Click [here](http://htmlpreview.github.io/?https://github.com/jessicaleviton/Stats_531_Final/blob/main/writeup.html) to see our latest version of write-up

### Topic
Using pomp package and SEIR model to investigate the pattern of mumps(a contagious disease).

### Research Question
Can mumps cases of Michigan in the 1970s be well modeled by an SEIR pomp model?

### Group Members
- Jessica Leviton
- Hongfan Chen

### Code Organization
- `writeup.Rmd` / `writeup.html`: the write-up for this project
- `data/`:  
  - `mumps.csv`: the dataset we download from [Project Tycho](https://www.kaggle.com/pitt/contagious-diseases) 
  - `mumps.R`: Building SEIR model and carrying the analysis

### Data Description
[Project Tycho: Mumps](https://www.kaggle.com/pitt/contagious-diseases?select=mumps.csv)


Variables of interest
|  Variable               | Description                                         |
| ----------------------- | ----------------------------------------------------|
| `week` | Index variable and takes week as a unit of measurement of time                 |
| `cases`                | Record the overall reporting cases                          |
| `state_name`                   |  The state where cases are reported                             |




