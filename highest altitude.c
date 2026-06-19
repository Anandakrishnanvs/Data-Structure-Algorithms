int largestAltitude(int* gain, int gainSize)
{
    int new=0,alt,larg=0;
    for(int i=0;i<gainSize;i++)
    {
        alt = new + gain[i];
        new = alt;
        if(larg<new)
        {
            larg = new ;
        }
    }
    return larg;

}
