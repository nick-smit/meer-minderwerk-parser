# Readme

We've been drawn for a new-build home, and therefore we needed a simple way to get some idea about the total costs of all options available. Therefore i wrote this quick and dirty parser which parses in.txt to an out.csv file which i loaded into excel.

## in.txt structure

The file was structured as follows;

```
<IDENTIFIER> <SHORT DESCRIPTION>
<MULTIPLE LINES OF LONGER DESCRIPTION>
<PRICE>
```

Sometimes there were rows of the pdf footer as well, so i had to filter those out.

## out.csv structure

The output file was structured as follows

```
id,description,price
<IDENTIFIER>,<SHORT_DESCRIPTION>,<PRICE>
<IDENTIFIER>,<SHORT_DESCRIPTION>,<PRICE>
<IDENTIFIER>,<SHORT_DESCRIPTION>,<PRICE>
...
```



