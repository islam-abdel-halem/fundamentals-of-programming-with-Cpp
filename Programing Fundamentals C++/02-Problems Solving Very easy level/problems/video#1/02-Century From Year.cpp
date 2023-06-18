int centuryFromYear(int year) 
{
return year%100?year/100+1:year/100;
}

//other way

int centuryFromYear(int year) 
{
    return (year + 99) / 100;
}