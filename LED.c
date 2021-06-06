void turnledon(int TotalDist)
{   if ( TotalDist >=100)
{
GPIO_PORTF_DATA_R   = 0x02 ;
}
}